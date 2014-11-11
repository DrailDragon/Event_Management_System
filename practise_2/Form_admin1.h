#pragma once
#include"stdafx.h"
#include<vector>
#include"Form_Assign_Volunteer.h"
#include"Event_Request_admin.h"

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
	using namespace System::Drawing::Imaging;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	using namespace System::Text;
	/// <summary>
	/// Summary for Form_admin
	/// </summary>
	public ref class Form_admin : public System::Windows::Forms::Form
	{
	public:
		Form_admin(void)
		{
			InitializeComponent();
			this->img_timer->Start();
			//this->picBox->Image=Image::FromFile("../10.jpg");						
			
			//
			//TODO: Add the constructor code here
			//
		}
          
//		   MySqlDataReader^ myReader;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_admin()
		{
			if (components)
			{
				delete components;
			}
		}


    int* img_id;//Keeps a track of the image ids
    int img_count;   
	private:static int timer=0;
    int* id;

	private: System::Windows::Forms::Button^  btn_LogOut;
	private: System::Windows::Forms::Button^  btn_Event_Requests;
	private: System::Windows::Forms::Button^  btn_Finalized_Events;
	private: System::Windows::Forms::Button^  btn_Resources;
	private: System::Windows::Forms::Button^  btn_Financial_Database;





	private: System::Windows::Forms::DataGridView^  datagridview_admin;
	private: System::Windows::Forms::Button^  btn_Volunteer_data;
	private: System::Windows::Forms::Button^  btn_set_budget;

	private: System::Windows::Forms::TextBox^  txtbx_set_budget;
	private: System::Windows::Forms::PictureBox^  picBox;

	private: System::Windows::Forms::Timer^  img_timer;
	private: System::Windows::Forms::Button^  btn_Log_File;


	private: System::ComponentModel::IContainer^  components;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btn_LogOut = (gcnew System::Windows::Forms::Button());
			this->btn_Event_Requests = (gcnew System::Windows::Forms::Button());
			this->btn_Finalized_Events = (gcnew System::Windows::Forms::Button());
			this->btn_Resources = (gcnew System::Windows::Forms::Button());
			this->btn_Financial_Database = (gcnew System::Windows::Forms::Button());
			this->datagridview_admin = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Volunteer_data = (gcnew System::Windows::Forms::Button());
			this->btn_set_budget = (gcnew System::Windows::Forms::Button());
			this->txtbx_set_budget = (gcnew System::Windows::Forms::TextBox());
			this->picBox = (gcnew System::Windows::Forms::PictureBox());
			this->img_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_Log_File = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->datagridview_admin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_LogOut
			// 
			this->btn_LogOut->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_LogOut->Location = System::Drawing::Point(260, 566);
			this->btn_LogOut->Name = L"btn_LogOut";
			this->btn_LogOut->Size = System::Drawing::Size(75, 33);
			this->btn_LogOut->TabIndex = 0;
			this->btn_LogOut->Text = L"LogOut";
			this->btn_LogOut->UseVisualStyleBackColor = true;
			this->btn_LogOut->Click += gcnew System::EventHandler(this, &Form_admin::btn_LogOut_Click);
			// 
			// btn_Event_Requests
			// 
			this->btn_Event_Requests->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Event_Requests->Location = System::Drawing::Point(49, 414);
			this->btn_Event_Requests->Name = L"btn_Event_Requests";
			this->btn_Event_Requests->Size = System::Drawing::Size(170, 29);
			this->btn_Event_Requests->TabIndex = 1;
			this->btn_Event_Requests->Text = L"View Event Requests";
			this->btn_Event_Requests->UseVisualStyleBackColor = true;
			this->btn_Event_Requests->Click += gcnew System::EventHandler(this, &Form_admin::btn_Event_Requests_Click);
			// 
			// btn_Finalized_Events
			// 
			this->btn_Finalized_Events->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Finalized_Events->Location = System::Drawing::Point(49, 490);
			this->btn_Finalized_Events->Name = L"btn_Finalized_Events";
			this->btn_Finalized_Events->Size = System::Drawing::Size(170, 29);
			this->btn_Finalized_Events->TabIndex = 2;
			this->btn_Finalized_Events->Text = L"View Finalized Events";
			this->btn_Finalized_Events->UseVisualStyleBackColor = true;
			this->btn_Finalized_Events->Click += gcnew System::EventHandler(this, &Form_admin::btn_Finalized_Events_Click);
			// 
			// btn_Resources
			// 
			this->btn_Resources->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Resources->Location = System::Drawing::Point(260, 490);
			this->btn_Resources->Name = L"btn_Resources";
			this->btn_Resources->Size = System::Drawing::Size(128, 29);
			this->btn_Resources->TabIndex = 3;
			this->btn_Resources->Text = L"View Resources Database";
			this->btn_Resources->UseVisualStyleBackColor = true;
			this->btn_Resources->Click += gcnew System::EventHandler(this, &Form_admin::btn_Resources_Click);
			// 
			// btn_Financial_Database
			// 
			this->btn_Financial_Database->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Financial_Database->Location = System::Drawing::Point(49, 566);
			this->btn_Financial_Database->Name = L"btn_Financial_Database";
			this->btn_Financial_Database->Size = System::Drawing::Size(170, 29);
			this->btn_Financial_Database->TabIndex = 4;
			this->btn_Financial_Database->Text = L"View Finacial Database";
			this->btn_Financial_Database->UseVisualStyleBackColor = true;
			this->btn_Financial_Database->Click += gcnew System::EventHandler(this, &Form_admin::btn_Financial_Database_Click);
			// 
			// datagridview_admin
			// 
			this->datagridview_admin->AllowUserToAddRows = false;
			this->datagridview_admin->AllowUserToDeleteRows = false;
			this->datagridview_admin->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datagridview_admin->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->datagridview_admin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagridview_admin->Location = System::Drawing::Point(477, 290);
			this->datagridview_admin->Name = L"datagridview_admin";
			this->datagridview_admin->Size = System::Drawing::Size(513, 319);
			this->datagridview_admin->TabIndex = 5;
			this->datagridview_admin->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_admin::datagridview_admin_CellContentClick);
			// 
			// btn_Volunteer_data
			// 
			this->btn_Volunteer_data->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Volunteer_data->Location = System::Drawing::Point(260, 414);
			this->btn_Volunteer_data->Name = L"btn_Volunteer_data";
			this->btn_Volunteer_data->Size = System::Drawing::Size(114, 33);
			this->btn_Volunteer_data->TabIndex = 6;
			this->btn_Volunteer_data->Text = L"View Volunteer Data";
			this->btn_Volunteer_data->UseVisualStyleBackColor = true;
			this->btn_Volunteer_data->Click += gcnew System::EventHandler(this, &Form_admin::btn_Volunteer_data_Click);
			// 
			// btn_set_budget
			// 
			this->btn_set_budget->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_set_budget->Location = System::Drawing::Point(260, 320);
			this->btn_set_budget->Name = L"btn_set_budget";
			this->btn_set_budget->Size = System::Drawing::Size(135, 28);
			this->btn_set_budget->TabIndex = 7;
			this->btn_set_budget->Text = L"Set Total Budget";
			this->btn_set_budget->UseVisualStyleBackColor = true;
			this->btn_set_budget->Click += gcnew System::EventHandler(this, &Form_admin::btn_set_budget_Click);
			// 
			// txtbx_set_budget
			// 
			this->txtbx_set_budget->Location = System::Drawing::Point(49, 320);
			this->txtbx_set_budget->Multiline = true;
			this->txtbx_set_budget->Name = L"txtbx_set_budget";
			this->txtbx_set_budget->Size = System::Drawing::Size(128, 28);
			this->txtbx_set_budget->TabIndex = 8;
			// 
			// picBox
			// 
			this->picBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->picBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picBox->Location = System::Drawing::Point(-1, 4);
			this->picBox->Name = L"picBox";
			this->picBox->Size = System::Drawing::Size(991, 280);
			this->picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBox->TabIndex = 9;
			this->picBox->TabStop = false;
			this->picBox->Click += gcnew System::EventHandler(this, &Form_admin::picBox_Click);
			// 
			// img_timer
			// 
			this->img_timer->Interval = 1000;
			this->img_timer->Tick += gcnew System::EventHandler(this, &Form_admin::img_timer_Tick);
			// 
			// btn_Log_File
			// 
			this->btn_Log_File->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Log_File->Location = System::Drawing::Point(378, 566);
			this->btn_Log_File->Name = L"btn_Log_File";
			this->btn_Log_File->Size = System::Drawing::Size(75, 33);
			this->btn_Log_File->TabIndex = 10;
			this->btn_Log_File->Text = L"Log File";
			this->btn_Log_File->UseVisualStyleBackColor = true;
			this->btn_Log_File->Click += gcnew System::EventHandler(this, &Form_admin::btn_Log_File_Click);
			// 
			// Form_admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(991, 681);
			this->Controls->Add(this->btn_Log_File);
			this->Controls->Add(this->picBox);
			this->Controls->Add(this->txtbx_set_budget);
			this->Controls->Add(this->btn_set_budget);
			this->Controls->Add(this->btn_Volunteer_data);
			this->Controls->Add(this->datagridview_admin);
			this->Controls->Add(this->btn_Financial_Database);
			this->Controls->Add(this->btn_Resources);
			this->Controls->Add(this->btn_Finalized_Events);
			this->Controls->Add(this->btn_Event_Requests);
			this->Controls->Add(this->btn_LogOut);
			this->DoubleBuffered = true;
			this->Name = L"Form_admin";
			this->Text = L"Form_admin";
			this->Load += gcnew System::EventHandler(this, &Form_admin::Form_admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->datagridview_admin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

      private: Void getImageId(){
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 img_count=0;
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						img_count++;
					 }
					myReader->Close();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				


				 img_id=new int[img_count];
				
				
				 try{
					 //conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 int i=0;
					 while(myReader->Read()){
						img_id[i]=myReader->GetInt32("id");
						i++;
					 }
					 
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }

     private: void getImageDatabase(int i){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files where id='"+i+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 //check++;
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 if(myReader->Read()){
						//memPic=gcnew MemoryStream(myReader->GetBytes("fileContent"));
						int size=myReader->GetInt32("fileSize");
						array<Byte> ^Buffer=gcnew array<Byte>(size);
						myReader->GetBytes(4,0,Buffer,0,size);
						//MessageBox::Show(Buffer[5].ToString());
						MemoryStream^ memPic=gcnew MemoryStream(Buffer);
						this->picBox->Image=Image::FromStream(memPic);
						memPic->Close();
					    }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			// MessageBox::Show(this->check.ToString());
       }

	private: System::Void Form_admin_Load(System::Object^  sender, System::EventArgs^  e) {
				 			
			   getImageId();
			 }
	private: System::Void btn_LogOut_Click(System::Object^  sender, System::EventArgs^  e) {
                   System::DateTime^ now=System::DateTime::Now;
			 String^ datetimenow=Convert::ToString(now);

			 try
			 {
				 System::IO::File::SetAttributes("logfile.txt",~FileAttributes::Hidden);
			 }
			 catch(Exception^ ex)
			 {
				 System::IO::StreamWriter^ objwriter1=gcnew System::IO::StreamWriter("logfile.txt");
				 ex->Message;
				 objwriter1->Close();
			 }



			 _chmod( "logfile.txt",_S_IWRITE);


			 System::IO::StreamWriter^ objwriter=gcnew System::IO::StreamWriter("logfile.txt",true);

			 objwriter->WriteLine("Admin has logged out at "+datetimenow+" .");
			 objwriter->Close();
			 if( _chmod( "logfile.txt",_S_IREAD) == -1 )
			 {
				 // Determine cause of failure and report. 

			 }
			 fflush(stderr);
			 System::IO::File::SetAttributes("logfile.txt",FileAttributes::Hidden);                 
				 this->Close();
			 }
private: System::Void btn_Volunteer_data_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->Hide();
			 Form_Assign_Volunteer^ f= gcnew Form_Assign_Volunteer();
			 f->ShowDialog();
			 this->Show();           

		 }
private: System::Void btn_Event_Requests_Click(System::Object^  sender, System::EventArgs^  e) {
		
		  this->Hide();
          Event_Request_admin^ f =gcnew Event_Request_admin();
		  f->ShowDialog();
		  this->Show();

		 }
private: System::Void btn_Finalized_Events_Click(System::Object^  sender, System::EventArgs^  e) {
			
		    String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select id,Name,Date,Time,Duration,venue from database.financerequests where admin_status='"+"YES"+"'; ",conDataBase);
//		   MySqlDataReader^ myReader;

		   try{
		   
			   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
			   sda->SelectCommand = cmdDataBase;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			   BindingSource^ bSource = gcnew BindingSource();

			   bSource->DataSource = dbdataset;
			   datagridview_admin->DataSource=bSource;
			   sda->Update(dbdataset);
		 
		   
		   }catch(Exception^ ex){
		   
		   MessageBox::Show(ex->Message);
		   
		   }
           



		 }
private: System::Void btn_Resources_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select id,Name,resources from database.financerequests where admin_status='"+"YES"+"'; ",conDataBase);
//		   MySqlDataReader^ myReader;

		   try{
		   
			   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
			   sda->SelectCommand = cmdDataBase;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			   BindingSource^ bSource = gcnew BindingSource();

			   bSource->DataSource = dbdataset;
			   datagridview_admin->DataSource=bSource;
			   sda->Update(dbdataset);
		 
		   
		   }catch(Exception^ ex){
		   
		   MessageBox::Show(ex->Message);
		   
		   }
           

		 }
private: System::Void btn_Financial_Database_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select id,Name,cost from database.financerequests where admin_status='"+"YES"+"'; ",conDataBase);
//		   MySqlDataReader^ myReader;

		   try{
		   
			   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
			   sda->SelectCommand = cmdDataBase;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			  
		 
		   
		   }catch(Exception^ ex){
		   
		   MessageBox::Show(ex->Message);
		   
		   }
           

		 }
private: System::Void datagridview_admin_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void btn_set_budget_Click(System::Object^  sender, System::EventArgs^  e) {

             String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update database.total_budget set total_budget = '"+this->txtbx_set_budget->Text+"' ;",conDataBase);
			 MySqlDataReader^	myReader;
			 
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					
				 }MessageBox::Show("The budget has been set successfully!!","Budget for the total project",MessageBoxButtons::OK);
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }		   

		 }
private: System::Void img_timer_Tick(System::Object^  sender, System::EventArgs^  e) {

			    int i=img_id[timer];
				getImageDatabase(i);
				timer=(timer+1)%img_count;
		   
		 }
private: System::Void picBox_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void btn_Log_File_Click(System::Object^  sender, System::EventArgs^  e) {

			 btn_Log_File->Enabled=false;
			 try
			 {
				 System::IO::File::SetAttributes("logfile.txt",~FileAttributes::Hidden);
			 }
			 catch(Exception ^ex)
			 {
				 System::IO::StreamWriter^ objwriter1=gcnew System::IO::StreamWriter("logfile.txt");
				// objwriter1->Write(ex->Message);
				 ex->Message;
				 objwriter1->Close();
			 }
			 _chmod( "logfile.txt",_S_IREAD);
			 System::Diagnostics::Process::Start("logfile.txt");
			 System::IO::File::SetAttributes("logfile.txt",FileAttributes::Hidden);
			 btn_Log_File->Enabled=true;


		 }
};
}
