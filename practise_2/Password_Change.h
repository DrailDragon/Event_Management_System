#pragma once
#include"stdAfx.h"
//#include"Form1.h"
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Password_Change
	/// </summary>
	public ref class Password_Change : public System::Windows::Forms::Form
	{
	public:
		Password_Change(void)
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
		~Password_Change()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lbl_Email_Address;
	protected: 

	private: System::Windows::Forms::Label^  lbl_New_Password;
	private: System::Windows::Forms::Label^  lbl_Username;
	private: System::Windows::Forms::TextBox^  txtbx_New_Password;

	private: System::Windows::Forms::TextBox^  txtbx_Email_Address;

	private: System::Windows::Forms::TextBox^  txtbx_Username;
	private: System::Windows::Forms::Button^  btn_Reset;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Password_Change::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Reset = (gcnew System::Windows::Forms::Button());
			this->txtbx_New_Password = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_Email_Address = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_Username = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Email_Address = (gcnew System::Windows::Forms::Label());
			this->lbl_New_Password = (gcnew System::Windows::Forms::Label());
			this->lbl_Username = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->groupBox1->Controls->Add(this->btn_Reset);
			this->groupBox1->Controls->Add(this->txtbx_New_Password);
			this->groupBox1->Controls->Add(this->txtbx_Email_Address);
			this->groupBox1->Controls->Add(this->txtbx_Username);
			this->groupBox1->Controls->Add(this->lbl_Email_Address);
			this->groupBox1->Controls->Add(this->lbl_New_Password);
			this->groupBox1->Controls->Add(this->lbl_Username);
			this->groupBox1->Location = System::Drawing::Point(258, 178);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(441, 310);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Enter your details here";
			// 
			// btn_Reset
			// 
			this->btn_Reset->Location = System::Drawing::Point(213, 227);
			this->btn_Reset->Name = L"btn_Reset";
			this->btn_Reset->Size = System::Drawing::Size(79, 31);
			this->btn_Reset->TabIndex = 6;
			this->btn_Reset->Text = L"Reset";
			this->btn_Reset->UseVisualStyleBackColor = true;
			this->btn_Reset->Click += gcnew System::EventHandler(this, &Password_Change::btn_Reset_Click);
			// 
			// txtbx_New_Password
			// 
			this->txtbx_New_Password->Location = System::Drawing::Point(154, 167);
			this->txtbx_New_Password->Name = L"txtbx_New_Password";
			this->txtbx_New_Password->Size = System::Drawing::Size(192, 20);
			this->txtbx_New_Password->TabIndex = 5;
			// 
			// txtbx_Email_Address
			// 
			this->txtbx_Email_Address->Location = System::Drawing::Point(154, 105);
			this->txtbx_Email_Address->Name = L"txtbx_Email_Address";
			this->txtbx_Email_Address->Size = System::Drawing::Size(192, 20);
			this->txtbx_Email_Address->TabIndex = 4;
			// 
			// txtbx_Username
			// 
			this->txtbx_Username->Location = System::Drawing::Point(154, 47);
			this->txtbx_Username->Name = L"txtbx_Username";
			this->txtbx_Username->Size = System::Drawing::Size(192, 20);
			this->txtbx_Username->TabIndex = 3;
			// 
			// lbl_Email_Address
			// 
			this->lbl_Email_Address->AutoSize = true;
			this->lbl_Email_Address->Location = System::Drawing::Point(33, 112);
			this->lbl_Email_Address->Name = L"lbl_Email_Address";
			this->lbl_Email_Address->Size = System::Drawing::Size(73, 13);
			this->lbl_Email_Address->TabIndex = 2;
			this->lbl_Email_Address->Text = L"Email Address";
			// 
			// lbl_New_Password
			// 
			this->lbl_New_Password->AutoSize = true;
			this->lbl_New_Password->Location = System::Drawing::Point(33, 167);
			this->lbl_New_Password->Name = L"lbl_New_Password";
			this->lbl_New_Password->Size = System::Drawing::Size(78, 13);
			this->lbl_New_Password->TabIndex = 1;
			this->lbl_New_Password->Text = L"New Password";
			// 
			// lbl_Username
			// 
			this->lbl_Username->AutoSize = true;
			this->lbl_Username->Location = System::Drawing::Point(33, 47);
			this->lbl_Username->Name = L"lbl_Username";
			this->lbl_Username->Size = System::Drawing::Size(55, 13);
			this->lbl_Username->TabIndex = 0;
			this->lbl_Username->Text = L"Username";
			// 
			// Password_Change
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(876, 511);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Password_Change";
			this->Text = L"Password_Change";
			this->Load += gcnew System::EventHandler(this, &Password_Change::Password_Change_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Password_Change_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_Reset_Click(System::Object^  sender, System::EventArgs^  e) {

				 
		   if(txtbx_Username->Text!="" && txtbx_New_Password->Text!="" && txtbx_Email_Address->Text!="") 
		   {   
			   String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		      MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.login where Username='"+this->txtbx_Username->Text+"'  ; ",conDataBase);
		      MySqlDataReader^ myReader;

		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		  
            if(myReader->Read())
		        {			  

				  if(myReader->GetString("Email_Address") != txtbx_Email_Address->Text)
			      {
			        MessageBox::Show("This email address is not yours!! Please enter it again.");			
			      }
				  else
				  {
				    String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update database.login set Password='"+this->txtbx_New_Password->Text+"' where Username='"+this->txtbx_Username->Text+"' ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   
		     MessageBox::Show("Congratulations!! Your paswword has been succesfully changed.");

		     
		     this->Close();
		   
		    while(myReader->Read())
		      {

		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
				  
				  }

		        }
			
			 else 
			   {
 				 MessageBox::Show("This username is invalid.You donot have an account at all. Please Sign Up");		
			   }

		   }catch(Exception^ ex){
		   
		           MessageBox::Show(ex->Message);
		   
		         }		
 	   
		   }
		   else
		   {
		     MessageBox::Show("Please enter all the details to reset the password.");
		   }



			 }
};
}
