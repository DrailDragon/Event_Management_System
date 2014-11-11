#pragma once

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for update_resource
	/// </summary>
	public ref class update_resource : public System::Windows::Forms::Form
	{
	public:
		update_resource(void)
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
		~update_resource()
		{
			if (components)
			{
				delete components;
			}
		}
	int i,j,k;
	private: System::Windows::Forms::ComboBox^  option;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  name;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  entry;

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
			this->option = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->entry = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// option
			// 
			this->option->FormattingEnabled = true;
			this->option->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Total pieces", L"Available pieces", L"Price per piece"});
			this->option->Location = System::Drawing::Point(86, 62);
			this->option->Name = L"option";
			this->option->Size = System::Drawing::Size(230, 21);
			this->option->TabIndex = 1;
			this->option->SelectedIndexChanged += gcnew System::EventHandler(this, &update_resource::option_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Option";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"updated entry";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->entry);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->option);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(121, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(322, 170);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// entry
			// 
			this->entry->Location = System::Drawing::Point(86, 99);
			this->entry->Name = L"entry";
			this->entry->Size = System::Drawing::Size(230, 20);
			this->entry->TabIndex = 7;
			this->entry->TextChanged += gcnew System::EventHandler(this, &update_resource::entry_TextChanged);
			// 
			// name
			// 
			this->name->FormattingEnabled = true;
			this->name->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Total pieces", L"Available pieces", L"Price per piece"});
			this->name->Location = System::Drawing::Point(86, 23);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(230, 21);
			this->name->TabIndex = 6;
			this->name->SelectedIndexChanged += gcnew System::EventHandler(this, &update_resource::name_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Name:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &update_resource::button1_Click);
			// 
			// update_resource
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 261);
			this->Controls->Add(this->groupBox1);
			this->Name = L"update_resource";
			this->Text = L"update_resource";
			this->Load += gcnew System::EventHandler(this, &update_resource::update_resource_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void update_resource_Load(System::Object^  sender, System::EventArgs^  e) {
				 i=0;j=0;k=0;
				 fillCombo();
				 /*this->option->Hide();
				 this->entry->Hide();*/
			 }
private: void fillCombo(void){
			        this->name->Items->Clear();
					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.items;",conDatabase);
					 MySqlDataReader^ myReader;
					 int i1=0;
					 try{
						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 while(myReader->Read()){
							this->name->Items->Add(myReader->GetString("name"));
							
						 }
						 //if(i1>0)
							// MessageBox::Show("Deleted!!");
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
					
		 }



private: System::Void name_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 i++;
		 }
private: System::Void option_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 j++;
		 }
private: System::Void entry_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 k++;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((i>0)&&(j>0)&&(k>0))
			 {
				     String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 String^ s=this->entry->Text;
					 String^ n=this->name->Text;
					 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Update project.items set tot_no_of_pieces='"+s+"' where name='"+n+"';",conDatabase);
					 MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Update project.items set pieces_available='"+s+"' where name='"+n+"';",conDatabase);
					 MySqlCommand^ cmdDatabase3=gcnew MySqlCommand("Update project.items set price='"+s+"' where name='"+n+"';",conDatabase);
					 MySqlDataReader^ myReader;
					 int i1=0;
					 try{
						 conDatabase->Open();
						 String^ o=this->option->Text;
						 if(o=="Total pieces")
							myReader=cmdDatabase1->ExecuteReader();
						 else if(o=="Available pieces")
							myReader=cmdDatabase2->ExecuteReader();
						 else 
							 myReader=cmdDatabase3->ExecuteReader();
						 
						 while(myReader->Read()){
							//this->del_txt->Items->Add(myReader->GetString("name"));
							
						 }
						 //if(i1>0)
							// MessageBox::Show("Deleted!!");
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
			 }
		 }
};
}
