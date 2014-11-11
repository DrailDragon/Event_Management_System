#pragma once
#include"Upload_File.h"
#include"getFiles.h"

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Resource_V
	/// </summary>
	public ref class Resource_V : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Resource_V(String^ user)
		{
			username=user;
			InitializeComponent();
			Fillcombo ();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Resource_V()
		{
			if (components)
			{
				delete components;
			}
		}

		private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  volunteer_name;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	protected: 








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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->volunteer_name = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button1->Location = System::Drawing::Point(86, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 50);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Update Task";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Resource_V::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkViolet;
			this->button3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button3->Location = System::Drawing::Point(640, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 47);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Download File";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Resource_V::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button2->Location = System::Drawing::Point(640, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 35);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Upload File";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Resource_V::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 16);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Task Name";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(140, 128);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 23);
			this->comboBox1->TabIndex = 24;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Resource_V::comboBox1_SelectedIndexChanged);
			// 
			// volunteer_name
			// 
			this->volunteer_name->AutoSize = true;
			this->volunteer_name->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->volunteer_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->volunteer_name->Location = System::Drawing::Point(26, 31);
			this->volunteer_name->Name = L"volunteer_name";
			this->volunteer_name->Size = System::Drawing::Size(156, 16);
			this->volunteer_name->TabIndex = 23;
			this->volunteer_name->Text = L"Hello Volunteer";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(409, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 16);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Deadline";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(409, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 16);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Task Status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(409, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Task Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Task Type";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(140, 89);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(153, 23);
			this->comboBox2->TabIndex = 37;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Resource_V::comboBox2_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 16);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Price per item";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 16);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Number of pieces";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Item";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(140, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 41;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(158, 239);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 42;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(186, 203);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(107, 20);
			this->textBox3->TabIndex = 43;
			// 
			// Resource_V
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(801, 367);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->volunteer_name);
			this->Name = L"Resource_V";
			this->Text = L"Resource_V";
			this->Load += gcnew System::EventHandler(this, &Resource_V::Resource_V_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private : void Fillcombo (void) {

					  comboBox2->Items->Add("Individual");
					  comboBox2->Items->Add("Group");

			 }


private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


			 if (comboBox2->Text == "Individual"){

				 String^ combo_val = comboBox1->Text;
				 label2->Text = combo_val;

				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.r_tasks_i where task_name = '"+combo_val+"';",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 if(myReader->Read())	{
						 String^ temp;
						 temp = myReader->GetString("status");
						 label3->Text = "Task completed - "+temp;
						 temp = myReader->GetString("deadline");
						 label8->Text = "Deadline - "+temp;
						
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }

			 }
			 else{
				 String^ combo_val = comboBox1->Text;
				 label2->Text = combo_val;
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.r_tasks_grp where task_name = '"+combo_val+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 
//				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.r_tasks_grp where grpname = '"+grp_name+"';",conDataBase);
				 //MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 if(myReader->Read())	{
						 String^ temp;
						 temp = myReader->GetString("status");
						 label3->Text = "Task completed - "+temp;
						 temp = myReader->GetString("deadline");
						 label8->Text = "Deadline - "+temp;
						
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
				 
			 }

		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (comboBox2->Text == "Individual"){

				 this->comboBox1->Items->Clear();
				 String^ vol_name = "Max";
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.r_tasks_i where volunteer= '"+vol_name+"';",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 while(myReader->Read())	{
						 String^ task_Name;
						 task_Name = myReader->GetString("task_name");
						 comboBox1->Items->Add(task_Name);
					 
					 }
					 myReader->Close();
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }




			 }
			 else{


				this->comboBox1->Items->Clear();

				int count=0;
				 
				 //String^ grp_name = "g2";
				 label2->Text = comboBox1->Text;
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.group_members where volunteer = '"+username+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 int i=0;	
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 while(myReader->Read())	{
						 count++;			
					 
					 }
					 myReader->Close();
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
				 // MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.r_tasks_grp where grpname = '"+grp_name+"';",conDataBase);
				 //MySqlDataReader^ myReader;
				array<String^>^ grp=gcnew array<String^>(count);
				 try{
					 //conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 while(myReader->Read())	{
						 grp[i]=myReader->GetString("name");				
					     i++;
					 }
					 myReader->Close();
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
				 /*String^ grp_name = "g2";
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);*/
				
				 //MySqlDataReader^ myReader;
				for(int j=0;j<count;j++){
					 MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand(" select * from project.r_tasks_grp where grpname= '"+grp[j]+"';",conDataBase);
				 try{
					 //conDataBase->Open();
					 myReader = cmdDataBase1->ExecuteReader();
					 while(myReader->Read())	{
						 String^ task_Name;
						 task_Name = myReader->GetString("task_name");
						 comboBox1->Items->Add(task_Name);
					 
					 }
					 myReader->Close();
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }

				}


			 }

		 }
private: System::Void Resource_V_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" insert into  project.task_approval (task_name,name,no_of_pieces,price,status,type) values ('"+this->comboBox1->Text+"','"+this->textBox1->Text+"','"+this->textBox3->Text+"','"+this->textBox2->Text+"','no','"+this->comboBox2->Text+"') ;",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();

					 MessageBox::Show("Your data has been saved ");
					 while(myReader->Read())	{
						 
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }

		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  Upload_File^ f=gcnew Upload_File(username);
			 f->ShowDialog(); 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			   getFiles^ f=gcnew getFiles();
			 f->ShowDialog();
		 }
};
}
