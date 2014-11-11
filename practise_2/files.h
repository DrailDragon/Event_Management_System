#pragma once

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for files
	/// </summary>
	public ref class files : public System::Windows::Forms::Form
	{
	public:
		files(void)
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
		~files()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGrid1;
	protected: 


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button1;
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
			this->dataGrid1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGrid1
			// 
			this->dataGrid1->AllowUserToAddRows = false;
			this->dataGrid1->AllowUserToDeleteRows = false;
			this->dataGrid1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid1->GridColor = System::Drawing::Color::Black;
			this->dataGrid1->Location = System::Drawing::Point(26, 28);
			this->dataGrid1->Name = L"dataGrid1";
			this->dataGrid1->ReadOnly = true;
			this->dataGrid1->Size = System::Drawing::Size(474, 186);
			this->dataGrid1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"SElect the file:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(122, 248);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(378, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &files::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"File name:";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(122, 307);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(378, 20);
			this->name->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(58, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 48);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Select the file where to download";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &files::button2_Click_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 48);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Download";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &files::button1_Click);
			// 
			// files
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 453);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGrid1);
			this->Name = L"files";
			this->Text = L"files";
			this->Load += gcnew System::EventHandler(this, &files::files_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void files_Load(System::Object^  sender, System::EventArgs^  e) {
			fillComboBox();
			String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select (name,description,uploader,fileType,fileSize,fileContent) from project.files;",conDatabase);
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
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: void fillComboBox(void) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.files ;",conDatabase);
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
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.files where name='"+this->comboBox1->Text+"';",conDatabase);
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
						FileStream^ fs=gcnew FileStream("G:\trail.jpg",FileMode::Create,FileAccess::Write);
						BinaryWriter^ w=gcnew BinaryWriter(fs);
						try{
							for(int i=0;i<size-1;i++)
								w->Write(Buffer[i]);
						}
						catch(Exception^ ex){
							MessageBox::Show(ex->Message);
						}
						fs->Close();
					    }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->ShowDialog();
		 }

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 getFileDatabase();
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
