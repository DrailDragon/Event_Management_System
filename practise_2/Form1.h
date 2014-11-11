#pragma once
#include"stdAfx.h"
#include"Form2.h"
#include"Form_admin1.h"
#include"Form_Event_Manager.h"
#include"Form_Resource_Manager.h"
#include"Form_Financial_Manager.h"
#include"Password_Change.h"
#include"Form_Search.h"
#include"Volunteer_default.h"
#include"Resource_V.h"
#include"Finance_V.h"
#include"Event_V.h"

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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			txtbx_Password->PasswordChar='*';
			txtbx_Username->MaxLength=15;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	String^ username;
	private: System::Windows::Forms::Button^  btn_Login;
	protected: 
	private: System::Windows::Forms::TextBox^  txtbx_Password;
	private: System::Windows::Forms::TextBox^  txtbx_Username;
	private: System::Windows::Forms::Label^  lbl_Username;
	private: System::Windows::Forms::Label^  lbl_Password;
	private: System::Windows::Forms::ToolTip^  tltip_Sign_Up;

	private: System::Windows::Forms::Button^  btn_Sign_Up;
	private: System::Windows::Forms::GroupBox^  grpbx_frm1;
	private: System::Windows::Forms::ToolTip^  tltip_Login;
	private: System::Windows::Forms::Label^  lbl_Sign_Up;
	private: System::Windows::Forms::Button^  btn_Click_Here;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_View_Events;
	private: System::Windows::Forms::TextBox^  txtbx_Search;











	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btn_Login = (gcnew System::Windows::Forms::Button());
			this->txtbx_Password = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_Username = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Username = (gcnew System::Windows::Forms::Label());
			this->lbl_Password = (gcnew System::Windows::Forms::Label());
			this->tltip_Sign_Up = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btn_Sign_Up = (gcnew System::Windows::Forms::Button());
			this->grpbx_frm1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Click_Here = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tltip_Login = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->lbl_Sign_Up = (gcnew System::Windows::Forms::Label());
			this->btn_View_Events = (gcnew System::Windows::Forms::Button());
			this->txtbx_Search = (gcnew System::Windows::Forms::TextBox());
			this->grpbx_frm1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Login
			// 
			this->btn_Login->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Login->Location = System::Drawing::Point(270, 106);
			this->btn_Login->Name = L"btn_Login";
			this->btn_Login->Size = System::Drawing::Size(83, 34);
			this->btn_Login->TabIndex = 2;
			this->btn_Login->Text = L"Login";
			this->tltip_Login->SetToolTip(this->btn_Login, L"Press this button to login into software.");
			this->btn_Login->UseVisualStyleBackColor = true;
			this->btn_Login->Click += gcnew System::EventHandler(this, &Form1::btn_Login_Click);
			// 
			// txtbx_Password
			// 
			this->txtbx_Password->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtbx_Password->Location = System::Drawing::Point(163, 61);
			this->txtbx_Password->Name = L"txtbx_Password";
			this->txtbx_Password->PasswordChar = '*';
			this->txtbx_Password->Size = System::Drawing::Size(190, 24);
			this->txtbx_Password->TabIndex = 1;
			// 
			// txtbx_Username
			// 
			this->txtbx_Username->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtbx_Username->Location = System::Drawing::Point(163, 17);
			this->txtbx_Username->Name = L"txtbx_Username";
			this->txtbx_Username->Size = System::Drawing::Size(190, 24);
			this->txtbx_Username->TabIndex = 0;
			// 
			// lbl_Username
			// 
			this->lbl_Username->AutoSize = true;
			this->lbl_Username->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Username->Location = System::Drawing::Point(67, 17);
			this->lbl_Username->Name = L"lbl_Username";
			this->lbl_Username->Size = System::Drawing::Size(61, 17);
			this->lbl_Username->TabIndex = 7;
			this->lbl_Username->Text = L"Username";
			// 
			// lbl_Password
			// 
			this->lbl_Password->AutoSize = true;
			this->lbl_Password->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Password->Location = System::Drawing::Point(67, 67);
			this->lbl_Password->Name = L"lbl_Password";
			this->lbl_Password->Size = System::Drawing::Size(58, 17);
			this->lbl_Password->TabIndex = 8;
			this->lbl_Password->Text = L"Password";
			// 
			// tltip_Sign_Up
			// 
			this->tltip_Sign_Up->IsBalloon = true;
			// 
			// btn_Sign_Up
			// 
			this->btn_Sign_Up->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_Sign_Up->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Sign_Up->Location = System::Drawing::Point(797, 72);
			this->btn_Sign_Up->Name = L"btn_Sign_Up";
			this->btn_Sign_Up->Size = System::Drawing::Size(114, 35);
			this->btn_Sign_Up->TabIndex = 4;
			this->btn_Sign_Up->Text = L"Sign Up";
			this->tltip_Sign_Up->SetToolTip(this->btn_Sign_Up, L"Please press this button to Sign Up!!");
			this->btn_Sign_Up->UseVisualStyleBackColor = false;
			this->btn_Sign_Up->Click += gcnew System::EventHandler(this, &Form1::btn_Sign_Up_Click);
			// 
			// grpbx_frm1
			// 
			this->grpbx_frm1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->grpbx_frm1->Controls->Add(this->btn_Click_Here);
			this->grpbx_frm1->Controls->Add(this->label1);
			this->grpbx_frm1->Controls->Add(this->txtbx_Password);
			this->grpbx_frm1->Controls->Add(this->btn_Login);
			this->grpbx_frm1->Controls->Add(this->lbl_Password);
			this->grpbx_frm1->Controls->Add(this->txtbx_Username);
			this->grpbx_frm1->Controls->Add(this->lbl_Username);
			this->grpbx_frm1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->grpbx_frm1->Location = System::Drawing::Point(557, 280);
			this->grpbx_frm1->Name = L"grpbx_frm1";
			this->grpbx_frm1->Size = System::Drawing::Size(378, 198);
			this->grpbx_frm1->TabIndex = 6;
			this->grpbx_frm1->TabStop = false;
			// 
			// btn_Click_Here
			// 
			this->btn_Click_Here->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Click_Here->Location = System::Drawing::Point(270, 161);
			this->btn_Click_Here->Name = L"btn_Click_Here";
			this->btn_Click_Here->Size = System::Drawing::Size(83, 22);
			this->btn_Click_Here->TabIndex = 3;
			this->btn_Click_Here->Text = L"Click Here";
			this->btn_Click_Here->UseVisualStyleBackColor = true;
			this->btn_Click_Here->Click += gcnew System::EventHandler(this, &Form1::btn_Click_Here_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Forgot Password \?\?";
			// 
			// tltip_Login
			// 
			this->tltip_Login->IsBalloon = true;
			// 
			// lbl_Sign_Up
			// 
			this->lbl_Sign_Up->AutoSize = true;
			this->lbl_Sign_Up->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lbl_Sign_Up->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Sign_Up->ForeColor = System::Drawing::Color::White;
			this->lbl_Sign_Up->Location = System::Drawing::Point(674, 31);
			this->lbl_Sign_Up->Name = L"lbl_Sign_Up";
			this->lbl_Sign_Up->Size = System::Drawing::Size(237, 20);
			this->lbl_Sign_Up->TabIndex = 7;
			this->lbl_Sign_Up->Text = L"Not Registered\?\?\? Sign up here";
			// 
			// btn_View_Events
			// 
			this->btn_View_Events->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_View_Events->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_View_Events.Image")));
			this->btn_View_Events->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btn_View_Events->Location = System::Drawing::Point(185, 455);
			this->btn_View_Events->Name = L"btn_View_Events";
			this->btn_View_Events->Size = System::Drawing::Size(147, 33);
			this->btn_View_Events->TabIndex = 6;
			this->btn_View_Events->Text = L"Search by Event";
			this->btn_View_Events->UseVisualStyleBackColor = true;
			this->btn_View_Events->Click += gcnew System::EventHandler(this, &Form1::btn_View_Events_Click_1);
			// 
			// txtbx_Search
			// 
			this->txtbx_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtbx_Search->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtbx_Search->Location = System::Drawing::Point(3, 410);
			this->txtbx_Search->Name = L"txtbx_Search";
			this->txtbx_Search->Size = System::Drawing::Size(329, 25);
			this->txtbx_Search->TabIndex = 5;
			// 
			// Form1
			// 
			this->AcceptButton = this->btn_Login;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(947, 583);
			this->Controls->Add(this->txtbx_Search);
			this->Controls->Add(this->btn_View_Events);
			this->Controls->Add(this->lbl_Sign_Up);
			this->Controls->Add(this->grpbx_frm1);
			this->Controls->Add(this->btn_Sign_Up);
			this->Name = L"Form1";
			this->Text = L"Event Management";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpbx_frm1->ResumeLayout(false);
			this->grpbx_frm1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btn_Login_Click(System::Object^  sender, System::EventArgs^  e) {

           String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.login where Username='"+this->txtbx_Username->Text+"'and Password='"+this->txtbx_Password->Text+"' ; ",conDataBase);
		   MySqlDataReader^ myReader;

		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   int count=0;
		   String^ pos;
		   if(myReader->Read())
		   {
		    count = 1;
			pos=myReader->GetString("Position");
			username=myReader->GetString("Username");
		   }

		   if(count==1)
		   {  
			   
		        MessageBox::Show("Username and password is correct");
				this->Hide();

			   if(pos=="admin")
			   {
			     Form_admin^ f3 = gcnew Form_admin();
			     f3->ShowDialog();
			   
			   }
			   else if(pos=="Event_Manager")
			   {
			     Form_Event_Manager^ f3 = gcnew Form_Event_Manager(username);
			     f3->ShowDialog();
			   
			   }
			   else if(pos=="Resource_Manager")
			   {
				   //MessageBox::Show(username);
			     Form_Resource_Manager^ f3 = gcnew Form_Resource_Manager(username);
			     f3->ShowDialog();
			   
			   }
			   else if(pos=="Finance_Manager")
			   {
			     Form_Financial_Manager^ f3 = gcnew Form_Financial_Manager(username);
			     f3->ShowDialog();
			   
			   }
			   else if(pos=="events")
			   {
			     Event_V^ f3 = gcnew Event_V(username);
			     f3->ShowDialog();
			   
			   }			 
			   else if(pos=="resource")
			   {
					Resource_V^ r=gcnew Resource_V(username);
					r->ShowDialog();   
			   }
			   else if(pos=="finance")
			   {
				   Finance_V^ r=gcnew Finance_V(username);
					r->ShowDialog();
			   }
			   else
			   {
				   Volunteer_default^ v=gcnew Volunteer_default(username);
				   v->ShowDialog();
			   }
			 
			 this->Show();
		   }	  
		   else
		     {
			    MessageBox::Show("Incorrect Username and password. Are you a new person??  Please sign up below.");
				
		     }
		   }catch(Exception^ ex){
		   
		   MessageBox::Show(ex->Message);
		   
		   }
		 
	 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void btn_Sign_Up_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Hide();			
			 Form2^ f2 = gcnew Form2();
			 f2->ShowDialog();

			 this->Close();
		 }

private: System::Void btn_Click_Here_Click(System::Object^  sender, System::EventArgs^  e) {
           
			 this->Hide();
			 Password_Change^ f3=gcnew Password_Change();
			 f3->ShowDialog();
			 
			 this->Show();
			 txtbx_Username->Text="";
			 txtbx_Password->Text="";


		 }

private: System::Void btn_View_Events_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
           Form_Search^ f3 = gcnew Form_Search(this->txtbx_Search->Text);
		   f3->ShowDialog();
		   txtbx_Search->Text="";
		   this->Show(); 
		 }

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

