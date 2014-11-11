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
	/// Summary for Finance_V
	/// </summary>
	public ref class Finance_V : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Finance_V(String^ user)
		{
			InitializeComponent();
			username=user;
			Fillcombo ();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Finance_V()
		{
			if (components)
			{
				delete components;
			}
		}

		private: System::Windows::Forms::TextBox^  textBox3;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  volunteer_name;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->volunteer_name = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(140, 234);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 60;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(140, 208);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 58;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 213);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 16);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Cheque Id";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 16);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Amount";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 16);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Date of submission";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(140, 94);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(153, 23);
			this->comboBox2->TabIndex = 54;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Finance_V::comboBox2_SelectedIndexChanged_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Task Type";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(409, 167);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 16);
			this->label8->TabIndex = 52;
			this->label8->Text = L"Deadline";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(409, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 16);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Task Status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(409, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Task Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button1->Location = System::Drawing::Point(398, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 50);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Update Task";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Finance_V::button1_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkViolet;
			this->button3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button3->Location = System::Drawing::Point(640, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 47);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Download File";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Finance_V::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button2->Location = System::Drawing::Point(640, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 35);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Upload File";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Finance_V::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 16);
			this->label1->TabIndex = 46;
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
			this->comboBox1->Location = System::Drawing::Point(140, 133);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 23);
			this->comboBox1->TabIndex = 45;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Finance_V::comboBox1_SelectedIndexChanged_1);
			// 
			// volunteer_name
			// 
			this->volunteer_name->AutoSize = true;
			this->volunteer_name->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->volunteer_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->volunteer_name->Location = System::Drawing::Point(26, 36);
			this->volunteer_name->Name = L"volunteer_name";
			this->volunteer_name->Size = System::Drawing::Size(156, 16);
			this->volunteer_name->TabIndex = 44;
			this->volunteer_name->Text = L"Hello Volunteer";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(409, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 16);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Amount";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(26, 183);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Bank";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox4->Location = System::Drawing::Point(140, 179);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(153, 20);
			this->textBox4->TabIndex = 64;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd HH:mm:ss";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(209, 264);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(158, 20);
			this->dateTimePicker1->TabIndex = 65;
			// 
			// Finance_V
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(802, 465);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
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
			this->Name = L"Finance_V";
			this->Text = L"Finance_V";
			this->Load += gcnew System::EventHandler(this, &Finance_V::Finance_V_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private : void Fillcombo (void) {

					  comboBox2->Items->Add("Indivisual");
					  comboBox2->Items->Add("Group");

			 }


private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {

			 
			 if (comboBox2->Text == "Indivisual"){

				 this->comboBox1->Items->Clear();
				 String^ vol_name = "rgewr";
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.f_ind_tasks where ind_name= '"+vol_name+"';",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 while(myReader->Read())	{
						 String^ task_Name;
						 task_Name = myReader->GetString("task_name");
						 comboBox1->Items->Add(task_Name);
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }




			 }
			 else{


				this->comboBox1->Items->Clear();
				 String^ grp_name = "vdd";
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.f_group_tasks where grpname= '"+grp_name+"';",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 while(myReader->Read())	{
						 String^ task_Name;
						  MessageBox::Show("Item added");
						 task_Name = myReader->GetString("task_name");
						 comboBox1->Items->Add(task_Name);
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }




			 }


		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 String^ temp1;
			 if(comboBox2->Text == "Group"){
				 temp1 = "yes" ;
			 }else{
				 temp1 = "no" ;
			 }
			 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" insert into  database.f_task_approval (chequeid,amount,dateofsubmission,bank,isgroup,status,task_name) values ('"+this->textBox1->Text+"','"+this->textBox3->Text+"','"+this->dateTimePicker1->Text+"','"+this->textBox4->Text+"','"+temp1+"','no','"+this->comboBox1->Text+"') ;",conDataBase);
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
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {

			 if (comboBox2->Text == "Indivisual"){

				 String^ combo_val = comboBox1->Text;
				 label2->Text = combo_val;

				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.f_ind_tasks where task_name = '"+combo_val+"';",conDataBase);
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
						 temp = myReader->GetString("amount");
						 label9->Text = "Amount - "+temp;
						
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }

			 }
			 else{

				 String^ grp_name = "vdd";
				 label2->Text = comboBox1->Text;

				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.f_group_tasks where grpname = '"+grp_name+"';",conDataBase);
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
						 temp = myReader->GetString("amount");
						 label9->Text = "Amount - "+temp;
						
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
			 }

		 }
private: System::Void Finance_V_Load(System::Object^  sender, System::EventArgs^  e) {
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

