#pragma once
#include"stdAfx.h"
#include"string"



namespace practise_2 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
    using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Register;
	private: System::Windows::Forms::TextBox^  txtbx_Last_Name;

	private: System::Windows::Forms::TextBox^  txtbx_First_Name;

	protected: 

	protected: 



	private: System::Windows::Forms::Label^  lbl_Username_frm2;
	private: System::Windows::Forms::Label^  label2lbl_Password_frm;
	private: System::Windows::Forms::GroupBox^  grpbx_frm2;
	private: System::Windows::Forms::Button^  btn_Exit;
	private: System::Windows::Forms::ToolTip^  tltip_Register_frm2;
	private: System::Windows::Forms::ToolTip^  tltip2_Exit_frm2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtbx_Password_frm2;

	private: System::Windows::Forms::TextBox^  txtbx_Username_frm2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtbx_Email_Address;
	private: System::Windows::Forms::PictureBox^  pictureBox1;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->btn_Register = (gcnew System::Windows::Forms::Button());
			this->txtbx_Last_Name = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_First_Name = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Username_frm2 = (gcnew System::Windows::Forms::Label());
			this->label2lbl_Password_frm = (gcnew System::Windows::Forms::Label());
			this->grpbx_frm2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtbx_Password_frm2 = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_Username_frm2 = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_Email_Address = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tltip_Register_frm2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tltip2_Exit_frm2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grpbx_frm2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Register
			// 
			this->btn_Register->Location = System::Drawing::Point(269, 286);
			this->btn_Register->Name = L"btn_Register";
			this->btn_Register->Size = System::Drawing::Size(87, 37);
			this->btn_Register->TabIndex = 0;
			this->btn_Register->Text = L"Register";
			this->tltip_Register_frm2->SetToolTip(this->btn_Register, L"Please press this button to register as avolunteer for .");
			this->btn_Register->UseVisualStyleBackColor = true;
			this->btn_Register->Click += gcnew System::EventHandler(this, &Form2::btn_Register_Click);
			// 
			// txtbx_Last_Name
			// 
			this->txtbx_Last_Name->Location = System::Drawing::Point(111, 85);
			this->txtbx_Last_Name->Multiline = true;
			this->txtbx_Last_Name->Name = L"txtbx_Last_Name";
			this->txtbx_Last_Name->Size = System::Drawing::Size(288, 28);
			this->txtbx_Last_Name->TabIndex = 1;
			// 
			// txtbx_First_Name
			// 
			this->txtbx_First_Name->Location = System::Drawing::Point(111, 32);
			this->txtbx_First_Name->Multiline = true;
			this->txtbx_First_Name->Name = L"txtbx_First_Name";
			this->txtbx_First_Name->Size = System::Drawing::Size(288, 28);
			this->txtbx_First_Name->TabIndex = 2;
			// 
			// lbl_Username_frm2
			// 
			this->lbl_Username_frm2->AutoSize = true;
			this->lbl_Username_frm2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Username_frm2->Location = System::Drawing::Point(24, 183);
			this->lbl_Username_frm2->Name = L"lbl_Username_frm2";
			this->lbl_Username_frm2->Size = System::Drawing::Size(71, 16);
			this->lbl_Username_frm2->TabIndex = 3;
			this->lbl_Username_frm2->Text = L"Username";
			// 
			// label2lbl_Password_frm
			// 
			this->label2lbl_Password_frm->AutoSize = true;
			this->label2lbl_Password_frm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2lbl_Password_frm->Location = System::Drawing::Point(24, 88);
			this->label2lbl_Password_frm->Name = L"label2lbl_Password_frm";
			this->label2lbl_Password_frm->Size = System::Drawing::Size(73, 16);
			this->label2lbl_Password_frm->TabIndex = 4;
			this->label2lbl_Password_frm->Text = L"Last Name";
			// 
			// grpbx_frm2
			// 
			this->grpbx_frm2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->grpbx_frm2->Controls->Add(this->btn_Exit);
			this->grpbx_frm2->Controls->Add(this->label3);
			this->grpbx_frm2->Controls->Add(this->txtbx_Password_frm2);
			this->grpbx_frm2->Controls->Add(this->txtbx_Username_frm2);
			this->grpbx_frm2->Controls->Add(this->txtbx_Email_Address);
			this->grpbx_frm2->Controls->Add(this->txtbx_Last_Name);
			this->grpbx_frm2->Controls->Add(this->label2);
			this->grpbx_frm2->Controls->Add(this->label1);
			this->grpbx_frm2->Controls->Add(this->txtbx_First_Name);
			this->grpbx_frm2->Controls->Add(this->label2lbl_Password_frm);
			this->grpbx_frm2->Controls->Add(this->btn_Register);
			this->grpbx_frm2->Controls->Add(this->lbl_Username_frm2);
			this->grpbx_frm2->Location = System::Drawing::Point(252, 243);
			this->grpbx_frm2->Name = L"grpbx_frm2";
			this->grpbx_frm2->Size = System::Drawing::Size(466, 355);
			this->grpbx_frm2->TabIndex = 5;
			this->grpbx_frm2->TabStop = false;
			this->grpbx_frm2->Text = L"Enter Your Details here";
			// 
			// btn_Exit
			// 
			this->btn_Exit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_Exit->Location = System::Drawing::Point(134, 286);
			this->btn_Exit->Name = L"btn_Exit";
			this->btn_Exit->Size = System::Drawing::Size(87, 37);
			this->btn_Exit->TabIndex = 6;
			this->btn_Exit->Text = L"Exit";
			this->tltip2_Exit_frm2->SetToolTip(this->btn_Exit, L"Please press this to exit the applicarion.");
			this->btn_Exit->UseVisualStyleBackColor = true;
			this->btn_Exit->Click += gcnew System::EventHandler(this, &Form2::btn_Exit_Click);
			this->btn_Exit->MouseHover += gcnew System::EventHandler(this, &Form2::btn_Exit_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Email Address";
			// 
			// txtbx_Password_frm2
			// 
			this->txtbx_Password_frm2->Location = System::Drawing::Point(111, 232);
			this->txtbx_Password_frm2->Multiline = true;
			this->txtbx_Password_frm2->Name = L"txtbx_Password_frm2";
			this->txtbx_Password_frm2->PasswordChar = '*';
			this->txtbx_Password_frm2->Size = System::Drawing::Size(288, 28);
			this->txtbx_Password_frm2->TabIndex = 6;
			// 
			// txtbx_Username_frm2
			// 
			this->txtbx_Username_frm2->Location = System::Drawing::Point(111, 183);
			this->txtbx_Username_frm2->Multiline = true;
			this->txtbx_Username_frm2->Name = L"txtbx_Username_frm2";
			this->txtbx_Username_frm2->Size = System::Drawing::Size(288, 28);
			this->txtbx_Username_frm2->TabIndex = 5;
			// 
			// txtbx_Email_Address
			// 
			this->txtbx_Email_Address->Location = System::Drawing::Point(111, 135);
			this->txtbx_Email_Address->Multiline = true;
			this->txtbx_Email_Address->Name = L"txtbx_Email_Address";
			this->txtbx_Email_Address->Size = System::Drawing::Size(288, 28);
			this->txtbx_Email_Address->TabIndex = 9;
			this->txtbx_Email_Address->TextChanged += gcnew System::EventHandler(this, &Form2::txtbx_Email_Address_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Password";
			// 
			// tltip_Register_frm2
			// 
			this->tltip_Register_frm2->IsBalloon = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(922, 237);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(922, 630);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->grpbx_frm2);
			this->Name = L"Form2";
			this->Text = L"Event Management";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->grpbx_frm2->ResumeLayout(false);
			this->grpbx_frm2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

   private : void MarshalString ( String ^ s, string& os ) {

            using namespace Runtime::InteropServices;
            const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();         
            os = chars;
            Marshal::FreeHGlobal(IntPtr((void*)chars));
       }

private: System::Void btn_Register_Click(System::Object^  sender, System::EventArgs^  e) {

            
			   
		   if(txtbx_Username_frm2->Text!=" " && txtbx_Password_frm2->Text!=" " && txtbx_First_Name->Text!=" " && txtbx_Last_Name->Text!=" " && txtbx_Email_Address->Text!=" ") 
		   {   
			    
			  String^ str="^[A-Z0-9._%+-]+@[A-Z0-9.-]+.[A-Z]{2,6}$";
			   if ( Regex::IsMatch( this->txtbx_Email_Address->Text  , str ,RegexOptions::IgnoreCase ) )
			   {
			        String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		      MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.login where Username='"+this->txtbx_Username_frm2->Text+"'  ; ",conDataBase);
		      MySqlDataReader^ myReader;

		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		  
            if(myReader->Read())
		        {			  
				  MessageBox::Show("This username is already choosen by some one. So, Please change the username.");
		        }
			 else
			   {
 				
			String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into database.login (Username,Password,First_Name,Last_Name,Email_Address) values('"+this->txtbx_Username_frm2->Text+"','"+this->txtbx_Password_frm2->Text+"' , '"+this->txtbx_First_Name->Text+"' , '"+this->txtbx_Last_Name->Text+"' , '"+this->txtbx_Email_Address->Text+"') ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   
		     MessageBox::Show("Congratulations!! You are succesfully registered as a volunteer for the event.");
		   
		   
		    while(myReader->Read())
		      {

		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }

			   }

		   }catch(Exception^ ex){
		   
		           MessageBox::Show(ex->Message);
		   
		         }	
			   
			   }
					 
				 else
                     MessageBox::Show("Wrong domain name");

			   	   
		   }
		   else
		   {
		     MessageBox::Show("Please enter all the details to Sign Up.");
		   }

		 }
private: System::Void btn_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void btn_Exit_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 //Work to do here

		 }

private: System::Void txtbx_Email_Address_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
