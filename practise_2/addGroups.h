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
	/// Summary for addGroups
	/// </summary>
	public ref class addGroups : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		addGroups(String^ user)
		{
			InitializeComponent();
			username=user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addGroups()
		{
			if (components)
			{
				delete components;
			}
		}
	String^ section;
	private: System::Windows::Forms::CheckedListBox^  volunteer;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  des;
	private: System::Windows::Forms::Label^  label3;

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
			this->volunteer = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->des = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// volunteer
			// 
			this->volunteer->FormattingEnabled = true;
			this->volunteer->Location = System::Drawing::Point(124, 231);
			this->volunteer->Name = L"volunteer";
			this->volunteer->Size = System::Drawing::Size(295, 94);
			this->volunteer->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->des);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->volunteer);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(96, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(434, 394);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// des
			// 
			this->des->Location = System::Drawing::Point(124, 80);
			this->des->Multiline = true;
			this->des->Name = L"des";
			this->des->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->des->Size = System::Drawing::Size(295, 126);
			this->des->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Description:";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(124, 30);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(295, 20);
			this->name->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(344, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addGroups::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Volunteers:";
			// 
			// addGroups
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 431);
			this->Controls->Add(this->groupBox1);
			this->Name = L"addGroups";
			this->Text = L"addGroups";
			this->Load += gcnew System::EventHandler(this, &addGroups::addGroups_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addGroups_Load(System::Object^  sender, System::EventArgs^  e) {

			
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 //int i=Convert::ToInt32(this->pieces->Text);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.login where Username='"+username+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 //Get the section to which the volunteers should belong to
				 while(myReader->Read()){
					String^ position=myReader->GetString("Position");
				
					if(position=="Resource_Manager")
						section="resource";
					else if(position=="Event_Manager")
						section="events";
					else 
						section="finance";
					fillCheckBox(section);
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
	private: void fillCheckBox(String^ Section){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
//			 int i=Convert::ToInt32(this->pieces->Text);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.volunteers where section='"+Section+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 String^ v=myReader->GetString("name");
					 this->volunteer->Items->Add(v);
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			  String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
//			 int i=Convert::ToInt32(this->pieces->Text);
			 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Select * from project.groups where name='"+this->name->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase1->ExecuteReader();
				 int count=0;
				 while(myReader->Read()){
					 ++count;
				 }
				 if(count!=0)
				 {
				   MessageBox::Show("There already exists a group with this name.So, Please select a different name. ");
				 
				 }
				 else
				 {
				       String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
//			 int i=Convert::ToInt32(this->pieces->Text);
			 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Insert into project.groups (name,description,section) values ('"+this->name->Text+"','"+this->des->Text+"','"+this->section+"');",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase1->ExecuteReader();
				 
				 while(myReader->Read()){
					 
				 }

				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
			 //
			 //Reading the check box data one by one for uploading in the database
			 for(int i=0;i<volunteer->Items->Count;i++){
				 if(volunteer->GetItemChecked(i)){
					 MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Insert into project.group_members (name,volunteer) values ('"+this->name->Text+"','"+this->volunteer->Items[i]+"');",conDatabase);
					/* MySqlDataReader^ myReader;*/
					 try{
						 //conDatabase->Open();
						 myReader=cmdDatabase2->ExecuteReader();
						 while(myReader->Read()){
						 }

						 myReader->Close();
					 }
					 catch(Exception ^ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
				 else{
					//MessageBox::Show("NO volunteer selected");
				 }
			 }
				 
				 
				 }
				 
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }


			
		 }
};
}
