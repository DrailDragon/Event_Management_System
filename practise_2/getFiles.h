#pragma once

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for getFiles
	/// </summary>
	public ref class getFiles : public System::Windows::Forms::Form
	{
	public:
		getFiles(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~getFiles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGrid1;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGrid1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &getFiles::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(224, 249);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(204, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Download";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &getFiles::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select the file:";
			// 
			// dataGrid1
			// 
			this->dataGrid1->AllowUserToAddRows = false;
			this->dataGrid1->AllowUserToDeleteRows = false;
			this->dataGrid1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid1->Location = System::Drawing::Point(12, 12);
			this->dataGrid1->Name = L"dataGrid1";
			this->dataGrid1->ReadOnly = true;
			this->dataGrid1->Size = System::Drawing::Size(458, 199);
			this->dataGrid1->TabIndex = 4;
			// 
			// getFiles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 365);
			this->Controls->Add(this->dataGrid1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"getFiles";
			this->Text = L"getFiles";
			this->Load += gcnew System::EventHandler(this, &getFiles::getFiles_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void getFiles_Load(System::Object^  sender, System::EventArgs^  e) {
			 fillComboBox();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files;",conDatabase);
			// MySqlDataReader^ myReader;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid1->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
			 
	private: void fillComboBox(void) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files ;",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 this->comboBox1->Items->Add(myReader->GetString("name"));
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
    private: void getFileDatabase(void){
			  String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files where name='"+this->comboBox1->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 //check++;
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 if(myReader->Read()){
						//memPic=gcnew MemoryStream(myReader->GetBytes("fileContent"));
						int size=myReader->GetInt32("fileSize");
						String^ extension=myReader->GetString("fileType");
						array<Byte> ^Buffer=gcnew array<Byte>(size);
						myReader->GetBytes(4,0,Buffer,0,size);
						//MessageBox::Show(Buffer[5].ToString());
						//MemoryStream ^memPic=gcnew MemoryStream(Buffer);
						String^ file=this->comboBox1->Text+extension;
						FileStream^ fs=gcnew FileStream(file,FileMode::Create,FileAccess::Write);
						/*StreamWriter^ w=gcnew StreamWriter(fs);
						try{
							for(int i=0;i<size-1;i++)
								w->Write(Buffer[i]);
						}
						catch(Exception^ ex){
							MessageBox::Show(ex->Message);
						}*/
						fs->Write(Buffer,0,size);
						fs->Close();
					    }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files where name='"+this->comboBox1->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 //check++;
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
				 myReader->Close();
				}
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 getFileDatabase();
		 }
};
}
