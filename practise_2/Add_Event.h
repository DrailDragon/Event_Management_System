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
	/// <summary>
	/// Summary for Add_Event
	/// </summary>
	public ref class Add_Event : public System::Windows::Forms::Form
	{
	public:
		Add_Event(void)
		{
			InitializeComponent();
			ListFill();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add_Event()
		{
			if (components)
			{
				delete components;
			}
		}
    
		private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Tit_txt;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::TextBox^  duration;









	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::DateTimePicker^  date;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  description;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  time;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  resources;

	private: System::Windows::Forms::Label^  label9;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_Event::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Tit_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->duration = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->resources = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Title";
			this->label1->Click += gcnew System::EventHandler(this, &Add_Event::label1_Click);
			// 
			// Tit_txt
			// 
			this->Tit_txt->Location = System::Drawing::Point(171, 25);
			this->Tit_txt->Name = L"Tit_txt";
			this->Tit_txt->Size = System::Drawing::Size(149, 20);
			this->Tit_txt->TabIndex = 1;
			this->Tit_txt->TextChanged += gcnew System::EventHandler(this, &Add_Event::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Venue";
			this->label2->Click += gcnew System::EventHandler(this, &Add_Event::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Duration";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Date";
			this->label5->Click += gcnew System::EventHandler(this, &Add_Event::label5_Click);
			// 
			// duration
			// 
			this->duration->Location = System::Drawing::Point(171, 121);
			this->duration->Name = L"duration";
			this->duration->Size = System::Drawing::Size(75, 20);
			this->duration->TabIndex = 7;
			this->duration->TextChanged += gcnew System::EventHandler(this, &Add_Event::duration_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(463, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 44);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Add_Event::button1_Click);
			// 
			// date
			// 
			this->date->CustomFormat = L"yyyy/MM/dd";
			this->date->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date->Location = System::Drawing::Point(171, 57);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(149, 20);
			this->date->TabIndex = 15;
			this->date->Value = System::DateTime(2014, 3, 11, 0, 0, 0, 0);
			this->date->ValueChanged += gcnew System::EventHandler(this, &Add_Event::dateTimePicker1_ValueChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(171, 153);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(96, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Add_Event::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(252, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"mins";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Description";
			// 
			// description
			// 
			this->description->Location = System::Drawing::Point(174, 180);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(275, 66);
			this->description->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 23);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Time";
			// 
			// time
			// 
			this->time->CustomFormat = L"hh:mm:ss";
			this->time->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->time->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->time->Location = System::Drawing::Point(171, 91);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(149, 20);
			this->time->TabIndex = 22;
			this->time->Value = System::DateTime(2014, 3, 11, 0, 0, 0, 0);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(380, 153);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(88, 21);
			this->comboBox2->TabIndex = 23;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(273, 153);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(101, 21);
			this->comboBox3->TabIndex = 24;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Add_Event::comboBox3_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 291);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Resources";
			// 
			// resources
			// 
			this->resources->Location = System::Drawing::Point(171, 283);
			this->resources->Multiline = true;
			this->resources->Name = L"resources";
			this->resources->Size = System::Drawing::Size(275, 60);
			this->resources->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(171, 350);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(275, 41);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Resources should be added in this format only.  Item1,quantity,Item2,quantity etc" 
				L" ";
			// 
			// Add_Event
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(600, 437);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->resources);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->time);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->description);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->date);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->duration);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Tit_txt);
			this->Controls->Add(this->label1);
			this->Name = L"Add_Event";
			this->Text = L"Add_Event";
			this->Load += gcnew System::EventHandler(this, &Add_Event::Add_Event_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private : void ListFill(void){
					   
		   	 String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.venue_list ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
                 String^ temp_str = myReader->GetString("Name");
				
				  comboBox1->Items->Add(temp_str);
		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
				   
					   
		 }
				  private : void ListFill2(void){
					   
		   	 String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.venue_list ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
                 String^ temp_str = myReader->GetString("Name");
				
				  comboBox3->Items->Add(temp_str);
				 comboBox3->Items->Remove(comboBox1->Text);
		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
				   
					   
		 }

							private : void ListFill3(void){
					   
		   	 String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.venue_list ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
                 String^ temp_str = myReader->GetString("Name");
				
				  comboBox2->Items->Add(temp_str);
				  comboBox2->Items->Remove(comboBox1->Text);
				  comboBox2->Items->Remove(comboBox3->Text);
		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
				   
					   
		 }


	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Add_Event_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ condatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmddatabase=gcnew MySqlCommand("insert into database1.table2 (Title,Date,Time,Duration,Venue1,Venue2,Venue3,Description,Resources) values('"+this->Tit_txt->Text+"','"+this->date->Text+"','"+this->time->Text+"','"+this->duration->Text+"','"+this->comboBox1->Text+"','"+this->comboBox3->Text+"','"+this->comboBox2->Text+"','"+this->description->Text+"','"+this->resources->Text+"');" ,condatabase);
				 MySqlDataReader^ myReader;
			 try{
				 condatabase->Open();
				 myReader=cmddatabase->ExecuteReader();
				 while(myReader->Read()){
				 }
				 MessageBox::Show("Your data has been saved successfully.");

			 }catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }

		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Eve_no_TextChanged(System::Object^  sender, System::EventArgs^  e) {	 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void duration_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 ListFill2();

		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 ListFill3();
		 }
};
}

