#pragma once
#include "stdAfx.h"
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	//using namespace System::IO;
	//using namespace System::DateTime;
	//now = System::DateTime::Now;
	/// <summary>
	/// Summary for Message_Form
	/// </summary>
	public ref class Message_Form : public System::Windows::Forms::Form
	{
	public:
		Message_Form(void)
		{
			InitializeComponent();
			ListFill();
			//this->timer1->Start();
			//this->timer2->Start();
			//
			//TODO: Add the constructor code here
			//
		}
	//private:static int count=15;
	//private:static int count2=15;
	private: System::Windows::Forms::ListBox^  listBox1;
	public: 
	//private: System::Windows::Forms::Timer^  timer1;
	//private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	
	//private: System::Windows::Forms::Timer^  currenttime_timer;
	public: String^ Name1;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Message_Form()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(464, 12);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(278, 356);
			this->listBox5->TabIndex = 0;
			// 
			// listBox6
			// 
			this->listBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(595, 12);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(147, 356);
			this->listBox6->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"To";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Message_Form::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(90, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(340, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(230, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(90, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Message";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 99);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(307, 135);
			this->textBox2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(123, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 37);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Message cannot exceed 500 character variables";
			// 
			// Message_Form
			// 
			this->ClientSize = System::Drawing::Size(754, 388);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Name = L"Message_Form";
			this->Load += gcnew System::EventHandler(this, &Message_Form::Message_Form_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private : void ListFill(void){
				
				//	MessageBox::Show(now->ToString());	   
		   	 String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.login ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
				  listBox5->Items->Add(myReader->GetString("Username"));
				  listBox6->Items->Add(myReader->GetString("Position"));
				  
		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
}
	private: System::Void Message_Form_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	   private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					System::DateTime^ now = System::DateTime::Now;
					String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into database.message (sender,message,date,recipient1,recipient2,recipient3) values('"+Name1+"','"+this->textBox2->Text+"','"+now+"','"+this->textBox1->Text+"','"+this->textBox4->Text+"','"+this->textBox3->Text+"')",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
				 
				  
		      }
		   		  MessageBox::Show("Sent Successfully!"); 
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }


				}

	private: System::Void Message_Form_Load_1(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
