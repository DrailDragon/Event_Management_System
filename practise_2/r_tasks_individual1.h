#pragma once
#include<vector>
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for r_tasks_individual1
	/// </summary>
	public ref class r_tasks_individual1 : public System::Windows::Forms::Form
	{
	public:
		r_tasks_individual1(void)
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
		~r_tasks_individual1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  item;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::DateTimePicker^  deadline;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  combo;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->combo = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->item = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->deadline = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->combo);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->item);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->deadline);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(89, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(360, 236);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &r_tasks_individual1::groupBox1_Enter);
			// 
			// combo
			// 
			this->combo->FormattingEnabled = true;
			this->combo->Location = System::Drawing::Point(101, 25);
			this->combo->Name = L"combo";
			this->combo->Size = System::Drawing::Size(237, 21);
			this->combo->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(263, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &r_tasks_individual1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Name:";
			// 
			// item
			// 
			this->item->Location = System::Drawing::Point(101, 98);
			this->item->Name = L"item";
			this->item->Size = System::Drawing::Size(237, 20);
			this->item->TabIndex = 6;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(101, 61);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(237, 20);
			this->name->TabIndex = 5;
			// 
			// deadline
			// 
			this->deadline->CustomFormat = L"yyyy-MM-dd";
			this->deadline->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->deadline->Location = System::Drawing::Point(101, 140);
			this->deadline->Name = L"deadline";
			this->deadline->Size = System::Drawing::Size(237, 20);
			this->deadline->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Deadline:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"No of items";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Group";
			this->label1->Click += gcnew System::EventHandler(this, &r_tasks_individual1::label1_Click);
			// 
			// r_tasks_individual1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 304);
			this->Controls->Add(this->groupBox1);
			this->Name = L"r_tasks_individual1";
			this->Text = L"r_tasks_individual1";
			this->Load += gcnew System::EventHandler(this, &r_tasks_individual1::r_tasks_individual1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //fillComboBox();
			 }
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: void fillComboBox(void){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 String^ sec="resource";
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.groups where section='resource';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 this->combo->Items->Add(myReader->GetString("name"));
				 }
				 myReader->Close();
				 conDatabase->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 int itm=Convert::ToInt32(this->item->Text);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Insert into project.r_tasks_grp (name,deadline,grpname,pieces) values ('"+this->name->Text+"','"+this->deadline->Text+"','"+this->combo->Text+"','"+itm+"');",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					
				 }
			 }
			 catch(Exception ^ex){
				MessageBox::Show(ex->Message);
			 }
			 conDatabase->Close();
			 updateGroups();
			 updateIndividuals();
		 }
private: void updateGroups(){
			 int itm;
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Select * from project.groups where name='"+this->combo->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase1->ExecuteReader();
				 while(myReader->Read()){
					 itm=myReader->GetInt32("tasks_given");
					 itm=itm+1;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			     }
					 myReader->Close();
			  
			  MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Update project.groups set tasks_given='"+itm+"' where name='"+this->combo->Text+"';",conDatabase);
				 try{
					//myReader->Close();
					 myReader=cmdDatabase2->ExecuteReader();
					 while(myReader->Read()){
						//MessageBox::Show("Done!!");
					}
				 }
				 catch(Exception ^ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();			 
			    conDatabase->Close();
		 }
private: void updateIndividuals(void){
			//array<String^>^ volunteer;
			int count=0;
			int*arr;
			String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Select * from project.group_members where name='"+this->combo->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase1->ExecuteReader();
				 while(myReader->Read()){
					 count++;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			  }
			  myReader->Close();
			  array<String^>^ volunteer=gcnew array<String^>(count);
			  arr=new int(count);
			  try{
				  int i=0;
				 //conDatabase->Open();
				 myReader=cmdDatabase1->ExecuteReader();
				 while(myReader->Read()){
					 volunteer[i]=myReader->GetString("volunteer");
					 i++;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			  }
			 myReader->Close();
			  for(int i=0;i<count;i++){
				  MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Select * from project.volunteers where name='"+volunteer[i]+"';",conDatabase);
				  try{
						myReader=cmdDatabase2->ExecuteReader();
						while(myReader->Read()){
							int idx=myReader->GetInt32("tasks_given");
							idx=idx+1;
							arr[i]=idx;
							
						}
				  }
				  catch(Exception^ ex){
					  MessageBox::Show(ex->Message);
				  }
				  myReader->Close();
			  }
			  for(int i=0;i<count;i++){
					MySqlCommand^ cmdDatabase3=gcnew MySqlCommand("Update project.volunteers set tasks_given='"+arr[i]+"' where name='"+volunteer[i]+"';",conDatabase);
							try{
								//myReader->Close();
								myReader=cmdDatabase3->ExecuteReader();
								while(myReader->Read()){
								}
							}
							catch(Exception^ ex){
								MessageBox::Show(ex->Message);
							}
							myReader->Close();
			  }
		 }
private: System::Void r_tasks_individual1_Load(System::Object^  sender, System::EventArgs^  e) {
			 fillComboBox();
		 }
};
}
