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
	/// Summary for venue
	/// </summary>
	public ref class venue : public System::Windows::Forms::Form
	{
	public:
		venue(void)
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
		~venue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  name_txt;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->name_txt);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(83, 65);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(270, 123);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &venue::groupBox1_Enter);
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(77, 27);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(171, 20);
			this->name_txt->TabIndex = 2;
			this->name_txt->TextChanged += gcnew System::EventHandler(this, &venue::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &venue::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// venue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 262);
			this->Controls->Add(this->groupBox1);
			this->Name = L"venue";
			this->Text = L"venue";
			this->Load += gcnew System::EventHandler(this, &venue::venue_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost; port=3307; Username=root; password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Insert into database.venue (name) values ('"+this->name_txt->Text+"');",conDatabase);
			 MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Select * from database.items where name='"+this->name_txt->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				conDatabase->Open();
				myReader=cmdDatabase2->ExecuteReader();
				// Check if the resource already exists
				int count=0;
				while(myReader->Read()){
					count++;
				}
				conDatabase->Close();
				// when count==0 then no resource of the same name exists then add the resource
				if(count==0)
				{
					conDatabase->Open();
					myReader=cmdDatabase1->ExecuteReader();
					while(myReader->Read()){
						MessageBox::Show("Successfully Added");
					}
				}
				else
				{
					MessageBox::Show("Venue already exists");
				}
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void venue_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
