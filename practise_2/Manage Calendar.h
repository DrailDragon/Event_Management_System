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
	/// Summary for ManageCalendar
	/// </summary>
	public ref class ManageCalendar : public System::Windows::Forms::Form
	{
	public:
		ManageCalendar(void)
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
		~ManageCalendar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  event_add;
	private: System::Windows::Forms::TextBox^  time_add;
	private: System::Windows::Forms::DateTimePicker^  date_add;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  time_del;
	private: System::Windows::Forms::DateTimePicker^  date_del;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->event_add = (gcnew System::Windows::Forms::TextBox());
			this->time_add = (gcnew System::Windows::Forms::TextBox());
			this->date_add = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->time_del = (gcnew System::Windows::Forms::TextBox());
			this->date_del = (gcnew System::Windows::Forms::DateTimePicker());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(426, 346);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->event_add);
			this->tabPage1->Controls->Add(this->time_add);
			this->tabPage1->Controls->Add(this->date_add);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(418, 315);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Event:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Time:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ManageCalendar::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Date:";
			// 
			// event_add
			// 
			this->event_add->Location = System::Drawing::Point(128, 104);
			this->event_add->Multiline = true;
			this->event_add->Name = L"event_add";
			this->event_add->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->event_add->Size = System::Drawing::Size(233, 140);
			this->event_add->TabIndex = 2;
			// 
			// time_add
			// 
			this->time_add->Location = System::Drawing::Point(128, 56);
			this->time_add->Name = L"time_add";
			this->time_add->Size = System::Drawing::Size(233, 26);
			this->time_add->TabIndex = 1;
			this->time_add->Text = L"00:00:00";
			// 
			// date_add
			// 
			this->date_add->CustomFormat = L"yyyy-MM-dd";
			this->date_add->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_add->Location = System::Drawing::Point(128, 13);
			this->date_add->Name = L"date_add";
			this->date_add->Size = System::Drawing::Size(233, 26);
			this->date_add->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->time_del);
			this->tabPage2->Controls->Add(this->date_del);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(418, 315);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Delete";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(78, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 18);
			this->label5->TabIndex = 4;
			this->label5->Tag = L"";
			this->label5->Text = L"Time:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(271, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ManageCalendar::button2_Click);
			// 
			// time_del
			// 
			this->time_del->Location = System::Drawing::Point(154, 151);
			this->time_del->Name = L"time_del";
			this->time_del->Size = System::Drawing::Size(192, 26);
			this->time_del->TabIndex = 1;
			this->time_del->Text = L"hh:mm:ss";
			// 
			// date_del
			// 
			this->date_del->CustomFormat = L"yyyy-MM-dd";
			this->date_del->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_del->Location = System::Drawing::Point(146, 75);
			this->date_del->Name = L"date_del";
			this->date_del->Size = System::Drawing::Size(200, 26);
			this->date_del->TabIndex = 0;
			// 
			// ManageCalendar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 346);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ManageCalendar";
			this->Text = L"ManageCalendar";
			this->Load += gcnew System::EventHandler(this, &ManageCalendar::ManageCalendar_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Insert into project.calendar (date,event,time) values ('"+this->date_add->Text+"','"+this->event_add->Text+"','"+this->time_add->Text+"');",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
				 myReader->Close();
				}
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Delete from project.calendar where date='"+this->date_del->Text+"' and time='"+this->time_del->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
				 myReader->Close();
				}
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void ManageCalendar_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
