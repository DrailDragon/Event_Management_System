#pragma once
#include"stdafx.h"

#include <Windows.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
using namespace std;

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	using namespace System::Text;
	/// <summary>
	/// Summary for Event_Request_admin
	/// </summary>
	public ref class Event_Request_admin : public System::Windows::Forms::Form
	{
	public:
		Event_Request_admin(void)
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
		~Event_Request_admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  id;
	private: System::Windows::Forms::ColumnHeader^  Event_Name;

	private: System::Windows::Forms::ColumnHeader^  Date;
	private: System::Windows::Forms::ColumnHeader^  Time;
	private: System::Windows::Forms::ColumnHeader^  Duration;
	private: System::Windows::Forms::ColumnHeader^  Venue;
	private: System::Windows::Forms::ColumnHeader^  Resources;
	private: System::Windows::Forms::ColumnHeader^  finance_status;
	private: System::Windows::Forms::ColumnHeader^  cost;
	private: System::Windows::Forms::ColumnHeader^  admin_status;
	private: System::Windows::Forms::Button^  btn_Approve_Event;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  txtbx_budget_remained;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_Total_Budget;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btn_Reject;

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Event_Request_admin::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->id = (gcnew System::Windows::Forms::ColumnHeader());
			this->Event_Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Duration = (gcnew System::Windows::Forms::ColumnHeader());
			this->Venue = (gcnew System::Windows::Forms::ColumnHeader());
			this->Resources = (gcnew System::Windows::Forms::ColumnHeader());
			this->finance_status = (gcnew System::Windows::Forms::ColumnHeader());
			this->cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->admin_status = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_Approve_Event = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtbx_budget_remained = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_Total_Budget = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Reject = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {this->id, this->Event_Name, 
				this->Date, this->Time, this->Duration, this->Venue, this->Resources, this->finance_status, this->cost, this->admin_status});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Right;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) {listViewItem1});
			this->listView1->Location = System::Drawing::Point(368, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(896, 570);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// id
			// 
			this->id->Text = L"Id";
			this->id->Width = 48;
			// 
			// Event_Name
			// 
			this->Event_Name->Text = L"Event_Name";
			this->Event_Name->Width = 97;
			// 
			// Date
			// 
			this->Date->Text = L"Date";
			this->Date->Width = 71;
			// 
			// Time
			// 
			this->Time->Text = L"Time";
			this->Time->Width = 68;
			// 
			// Duration
			// 
			this->Duration->Text = L"Duration";
			this->Duration->Width = 92;
			// 
			// Venue
			// 
			this->Venue->Text = L"Venue";
			this->Venue->Width = 67;
			// 
			// Resources
			// 
			this->Resources->Text = L"Resources";
			this->Resources->Width = 142;
			// 
			// finance_status
			// 
			this->finance_status->Text = L"finance_status";
			this->finance_status->Width = 103;
			// 
			// cost
			// 
			this->cost->Text = L"cost";
			// 
			// admin_status
			// 
			this->admin_status->Text = L"admin_status";
			this->admin_status->Width = 144;
			// 
			// btn_Approve_Event
			// 
			this->btn_Approve_Event->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Approve_Event->Location = System::Drawing::Point(66, 209);
			this->btn_Approve_Event->Name = L"btn_Approve_Event";
			this->btn_Approve_Event->Size = System::Drawing::Size(100, 35);
			this->btn_Approve_Event->TabIndex = 1;
			this->btn_Approve_Event->Text = L"Approve Event";
			this->btn_Approve_Event->UseVisualStyleBackColor = true;
			this->btn_Approve_Event->Click += gcnew System::EventHandler(this, &Event_Request_admin::btn_Approve_Event_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(66, 121);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(230, 28);
			this->comboBox1->TabIndex = 2;
			// 
			// txtbx_budget_remained
			// 
			this->txtbx_budget_remained->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtbx_budget_remained->Location = System::Drawing::Point(279, 347);
			this->txtbx_budget_remained->Multiline = true;
			this->txtbx_budget_remained->Name = L"txtbx_budget_remained";
			this->txtbx_budget_remained->Size = System::Drawing::Size(83, 26);
			this->txtbx_budget_remained->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 304);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Total Budget ";
			// 
			// lbl_Total_Budget
			// 
			this->lbl_Total_Budget->AutoSize = true;
			this->lbl_Total_Budget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Total_Budget->Location = System::Drawing::Point(275, 304);
			this->lbl_Total_Budget->Name = L"lbl_Total_Budget";
			this->lbl_Total_Budget->Size = System::Drawing::Size(71, 20);
			this->lbl_Total_Budget->TabIndex = 5;
			this->lbl_Total_Budget->Text = L"1,00,000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 350);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Remaining Budget for the event";
			// 
			// btn_Reject
			// 
			this->btn_Reject->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Reject->Location = System::Drawing::Point(196, 209);
			this->btn_Reject->Name = L"btn_Reject";
			this->btn_Reject->Size = System::Drawing::Size(100, 35);
			this->btn_Reject->TabIndex = 7;
			this->btn_Reject->Text = L"Reject";
			this->btn_Reject->UseVisualStyleBackColor = true;
			this->btn_Reject->Click += gcnew System::EventHandler(this, &Event_Request_admin::btn_Reject_Click);
			// 
			// Event_Request_admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1264, 570);
			this->Controls->Add(this->btn_Reject);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbl_Total_Budget);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbx_budget_remained);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btn_Approve_Event);
			this->Controls->Add(this->listView1);
			this->Name = L"Event_Request_admin";
			this->Text = L"Event_Request_admin";
			this->Load += gcnew System::EventHandler(this, &Event_Request_admin::Event_Request_admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

   
	private : void ListFill(){
		
		     String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.financerequests where financial_status='"+"Yes"+"' ;",conDataBase);
			 MySqlDataReader^	myReader;
			 listView1->Items->Clear();
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 //showing the items
					 ListViewItem ^ itm = listView1->Items->Add(myReader->GetString(0));
					 itm->SubItems->Add(myReader->GetString(1));
					 itm->SubItems->Add(myReader->GetString(2));
					 itm->SubItems->Add(myReader->GetString(3));
					 itm->SubItems->Add(myReader->GetString(4));
					 itm->SubItems->Add(myReader->GetString(5));
					 itm->SubItems->Add(myReader->GetString(6));
                     itm->SubItems->Add(myReader->GetString(7));
					 itm->SubItems->Add(myReader->GetString(8));
				     itm->SubItems->Add(myReader->GetString(9));
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			  			 		  			  
		}

    private : void ComboFill(){
		
		     String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.financerequests;",conDataBase);
			 MySqlDataReader^	myReader;
			 comboBox1->Items->Clear();
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 comboBox1->Items->Add(myReader->GetString("Name"));
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			  			 		  			  
		}
	private: void CalculateBudget(void){

			 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.financerequests where admin_status='"+"Yes"+"';",conDataBase);
			 MySqlDataReader^ myReader;
			 try
			 {					
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 int sum=0;
				
				 while(myReader->Read())
				 {					 
					 sum+=myReader->GetInt32("cost");
				 }
				 txtbx_budget_remained->Text = sum.ToString();
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 } 
			 		 
			 
	  }


	private: System::Void Event_Request_admin_Load(System::Object^  sender, System::EventArgs^  e) {

				 ListFill();
				 ComboFill();
				 CalculateBudget();

			 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.total_budget ;",conDataBase);
			 MySqlDataReader^ myReader;
			 
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					lbl_Total_Budget->Text = ( myReader->GetInt32("total_budget")).ToString();
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }		   
			
			    
			 }
	private: System::Void btn_Approve_Event_Click(System::Object^  sender, System::EventArgs^  e) {

		if(MessageBox::Show("Are you sure to approve the event??","Event Approval",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		 {
			if(comboBox1->SelectedIndex!=-1)
			{
			     String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update database.financerequests set admin_status='"+"Yes"+"' where Name='"+this->comboBox1->Text+"' ;",conDataBase);
			 			

			 
			 try
			 {	
				MySqlDataReader^	myReader;
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {

				 }MessageBox::Show("The event has been approved successfully!!","Event Approval",MessageBoxButtons::OK);
				 conDataBase->Close();
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			

			 //Update databases.

			 
			  //updating database.budget

			 // Taking available moneyfrom database.budget

			 MySqlCommand^ cmdDataBase0=gcnew MySqlCommand("Select * from  database.budget where id='"+"1"+"' ;",conDataBase);
			
			 
			 int temp;

			 try
			 {		
				 MySqlDataReader^ myReader;
				 conDataBase->Open();
				 myReader=cmdDataBase0->ExecuteReader();
				 while(myReader->Read())
				 {
					temp = myReader->GetInt32("available");
				 }
				 conDataBase->Close();
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 // Getting the cost of the event
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select * from  database.financerequests where Name='"+this->comboBox1->Text+"' ;",conDataBase);
			 
			 
			 int cost_event;

			 try
			 {		
				 MySqlDataReader^	myReader;
				 conDataBase->Open();
				 myReader=cmdDataBase1->ExecuteReader();
				 while(myReader->Read())
				 {
					cost_event = myReader->GetInt32("cost");
				 }
				 conDataBase->Close();
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 temp -= cost_event;
			 // Updating available cost to databse.budget
			 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Update database.budget set available='"+temp+"' where id='"+"1"+"' ;",conDataBase);
			
			 
			 try
			 {		
				  MySqlDataReader^	myReader;
				 conDataBase->Open();
				 myReader=cmdDataBase2->ExecuteReader();
				 while(myReader->Read())
				 {
					
				 } conDataBase->Close();
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			  
            //Getting values from database.financerequests
		   MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("Select * from database.financerequests where Name='"+this->comboBox1->Text+"' ;",conDataBase);
			 
			 String^ date;
			 int duration;
			 int time;
			 String^ venue;
			 String^ event_name;
			 String^ resources;
			 
			 try
			 {	
				MySqlDataReader^	myReader;
				 conDataBase->Open();
				 myReader=cmdDataBase3->ExecuteReader();
				 while(myReader->Read())
				 {

					date=myReader->GetString("Date");MessageBox::Show(date);
					time=myReader->GetInt32("Time");
					duration=myReader->GetInt32("Duration");
					venue=myReader->GetString("venue");
					event_name=myReader->GetString("Name");
					resources=myReader->GetString("resources");
				 }
				 conDataBase->Close();
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 //Updating project.items

			  String^ line=resources;//Contains the string of resources
			 int c=0;
			 for(int i=0; i < line->Length ; i++){
				if(line[i]==',')// counting the number of commas to determine the size of the array "words"
					c++;
			 }
			 int cost=0;
			 String^ delim=",()";//The delimiter/separator here is ,( and ) only
			 array<Char>^ delimiter=delim->ToCharArray();//The input to the split function must be a character array
			 array<String^>^ words;//The substrings separated by commas as extracted into an array of pointers to strings and words serve as that array
			 words=line->Split(delimiter);//Using the Split fuction in the extraction of the substrings for resources
			 for(int i=0; i<c ; ){
				 String^ resource=words[i];//Always the resources are at the even position
				 i++;
				 String^ piece=words[i];//The no of pieces is at the odd positions
				 int noOfPieces=Int32::Parse(piece);//to convert the no of pieces from string to int
				 i++;
				 
//--------------- Get the total price of the  items after the permission is granted to be forwarded to the finance manager--------------------
				 //
				 //Connecting to the database
				 //
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.items  where name='"+resource+"';",conDatabase);
//				 int cst;
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 int cnt=0;
					 while(myReader->Read()){
						 ++cnt;
						int cst=myReader->GetInt32("price");
						cost=myReader->GetInt32("tot_no_of_pieces")+cst*noOfPieces;
					//his->cst_txt->Text=cst.ToString();
						      String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				              MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
						       MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Update project.items  Set tot_no_of_pieces='"+cost+"' where name='"+resource+"';",conDatabase);
				                MySqlDataReader^ myReader;
								 try{
					                  conDatabase->Open();
					                 myReader=cmdDatabase1->ExecuteReader();
					                    while(myReader->Read()){
										}conDataBase->Close();
										}
								   catch(Exception^ ex){
					                     MessageBox::Show(ex->Message);
				                     }
						
					       }
					 myReader->Close();
					 
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }

			 
			
			}
			else
			{
				MessageBox::Show("Please select an event to approve it.");
            }

           ListFill();
		   CalculateBudget();
		   comboBox1->SelectedIndex=-1;
		  }
		 }
private: System::Void btn_Reject_Click(System::Object^  sender, System::EventArgs^  e) {
         
			
		 if(MessageBox::Show("Do you want to reject an event??","Event Rejection",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		 { 

			 if(comboBox1->SelectedIndex!=-1)
			{
				try
				 {
					 System::IO::File::SetAttributes("logfile.txt",~FileAttributes::Hidden);	//making log file appear from hidden
				 }
				 catch(Exception^ ex)
				 {
					 System::IO::StreamWriter^ objwriter1=gcnew System::IO::StreamWriter("logfile.txt");
					 ex->Message;
					 objwriter1->Close();
				 }


				 _chmod( "logfile.txt",_S_IWRITE);		//change file mode to write
				 System::DateTime^ now=System::DateTime::Now;	//present date
				 String^ datetimenow=Convert::ToString(now);

				 System::IO::StreamWriter^ objwriter=gcnew System::IO::StreamWriter("logfile.txt",true);

				 objwriter->WriteLine("Admin has rejected the event : "+comboBox1->Text+" at "+datetimenow);
				 objwriter->Close();
				 _chmod( "logfile.txt",_S_IREAD);		//change file mode to read

				 fflush(stderr);
				 System::IO::File::SetAttributes("logfile.txt",FileAttributes::Hidden);		//make file hidden


			 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Delete from database.financerequests  where Name='"+this->comboBox1->Text+"' ;",conDataBase);
			 MySqlDataReader^	myReader;
			 
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					
				 }MessageBox::Show("The event has been rejected!!","Event Rejection",MessageBoxButtons::OK);
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			
			}
			else
			{
				MessageBox::Show("Please select an event to reject it.");
            }

           ListFill();
		   ComboFill();
		   CalculateBudget();
		   comboBox1->SelectedIndex=-1;

		 }



		 }
private: System::Void txtbx_budget_remained_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
	
};
}
