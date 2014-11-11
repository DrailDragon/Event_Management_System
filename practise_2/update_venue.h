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
	/// Summary for update_venue
	/// </summary>
	public ref class update_venue : public System::Windows::Forms::Form
	{
	public:
		update_venue(void)
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
		~update_venue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  update;
	private: System::Windows::Forms::DateTimePicker^  date;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  time;
	private: System::Windows::Forms::ComboBox^  name;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_add_event_schedule;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::TextBox());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::ComboBox());
			this->name = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_add_event_schedule = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_add_event_schedule);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->update);
			this->groupBox1->Controls->Add(this->date);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->time);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(96, 84);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 237);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &update_venue::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Update event:";
			// 
			// update
			// 
			this->update->Location = System::Drawing::Point(116, 142);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(208, 20);
			this->update->TabIndex = 6;
			this->update->TextChanged += gcnew System::EventHandler(this, &update_venue::update_TextChanged);
			// 
			// date
			// 
			this->date->CustomFormat = L"yyyy-MM-dd";
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date->Location = System::Drawing::Point(116, 66);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(208, 20);
			this->date->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Time:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Date:";
			// 
			// time
			// 
			this->time->FormattingEnabled = true;
			this->time->Items->AddRange(gcnew cli::array< System::Object^  >(24) {L"12-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6", L"6-7", 
				L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20", 
				L"20-21", L"21-22", L"22-23", L"23-24"});
			this->time->Location = System::Drawing::Point(116, 105);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(208, 21);
			this->time->TabIndex = 2;
			// 
			// name
			// 
			this->name->FormattingEnabled = true;
			this->name->Location = System::Drawing::Point(116, 19);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(208, 21);
			this->name->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// btn_add_event_schedule
			// 
			this->btn_add_event_schedule->Location = System::Drawing::Point(93, 192);
			this->btn_add_event_schedule->Name = L"btn_add_event_schedule";
			this->btn_add_event_schedule->Size = System::Drawing::Size(130, 23);
			this->btn_add_event_schedule->TabIndex = 9;
			this->btn_add_event_schedule->Text = L"Add event schedule";
			this->btn_add_event_schedule->UseVisualStyleBackColor = true;
			this->btn_add_event_schedule->Click += gcnew System::EventHandler(this, &update_venue::btn_add_event_schedule_Click);
			// 
			// update_venue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 388);
			this->Controls->Add(this->groupBox1);
			this->Name = L"update_venue";
			this->Text = L"update_venue";
			this->Load += gcnew System::EventHandler(this, &update_venue::update_venue_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void update_venue_Load(System::Object^  sender, System::EventArgs^  e) {
				 nameCombo();
			 }
	private : void nameCombo(void){
				  this->name->Items->Clear();
					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.venue;",conDatabase);
					 MySqlDataReader^ myReader;
					 //int i1=0;
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


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					//this->del_txt->Items->Clear();

				      String^ check=this->time->Text;

					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase;


					 if(check=="12_1")
					 
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 12_1='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);
   
					 else if(check=="1_2")
					     cmdDatabase=gcnew MySqlCommand("Update project.venue set 1_2='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="2_3")
					 
                       cmdDatabase=gcnew MySqlCommand("Update project.venue set 2_3='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);
					 

					 else if(check=="3_4")
					     cmdDatabase=gcnew MySqlCommand("Update project.venue set 3_4='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="4_5")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 4_5='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="5_6")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 5_6='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="6_7")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 6_7'='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="7_8")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 7_8='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="8_9")
					     cmdDatabase=gcnew MySqlCommand("Update project.venue set 8_9='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="9_10")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 9_10='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="10_11")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 10_11='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="11_12")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 11_12='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="12_13")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 12_13='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="13_14")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 13_14='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="14_15")
					     cmdDatabase=gcnew MySqlCommand("Update project.venue set 14_15='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="15_16")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 15_16='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="16_17")
					     cmdDatabase=gcnew MySqlCommand("Update project.venue set 16_17='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="17_18")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 17_18='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="18_19")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 18_19='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="19_20")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 19_20'='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="20_21")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 20_21='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="21_22")
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 21_22='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else if(check=="22_23")
					     cmdDatabase=gcnew MySqlCommand("Update project.venue set 22_23='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);

					 else 
					      cmdDatabase=gcnew MySqlCommand("Update project.venue set 23_24='"+this->update->Text+"' where name='"+this->name->Text+"' and date='"+this->date->Text+"';",conDatabase);
					

					 MySqlDataReader^ myReader;
					 //int i1=0;
					 try{
						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 int cnt=0;
						 while(myReader->Read()){
							//this->del_txt->Items->Add(myReader->GetString("name"));
							 ++cnt;
							MessageBox::Show("Successfully updated!!");
						 }
						 if(cnt==0)
							 MessageBox::Show("Sorry , Unable to update because the date which you have selected is not in database.");
						 //if(i1>0)
							 
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
			 }
private: System::Void update_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_add_event_schedule_Click(System::Object^  sender, System::EventArgs^  e) {

			  String^ check=this->time->Text;

					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase;


					 if(check=="12_1")
					 
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);
   
					 else if(check=="1_2")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="2_3")
					 
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);
					 

					 else if(check=="3_4")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="4_5")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="5_6")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="6_7")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="7_8")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="8_9")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="9_10")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="10_11")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="11_12")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="12_13")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="13_14")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="14_15")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="15_16")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="16_17")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="17_18")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="18_19")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="19_20")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="20_21")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="21_22")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else if(check=="22_23")
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);

					 else 
					      cmdDatabase=gcnew MySqlCommand("Insert into project.venue  (name,12_1,date) values('"+this->name->Text+"','"+this->update->Text+"','"+this->date->Text+"') ;",conDatabase);
					

					 MySqlDataReader^ myReader;
					 //int i1=0;
					 try{
						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 while(myReader->Read()){
						 MessageBox::Show("The data has been succesfully inserted into database.");

						 }
						
						 //if(i1>0)
							 
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
		 }
};
}
