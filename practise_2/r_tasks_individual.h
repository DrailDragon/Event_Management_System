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
	/// Summary for r_tasks_individual
	/// </summary>
	public ref class r_tasks_individual : public System::Windows::Forms::Form
	{
	public:
		r_tasks_individual(void)
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
		~r_tasks_individual()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  pieces;


	private: System::Windows::Forms::TextBox^  item;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Add;

	private: System::Windows::Forms::ComboBox^  volunteer;
	private: System::Windows::Forms::DateTimePicker^  deadline;

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
			this->volunteer = (gcnew System::Windows::Forms::ComboBox());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->deadline = (gcnew System::Windows::Forms::DateTimePicker());
			this->pieces = (gcnew System::Windows::Forms::TextBox());
			this->item = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->volunteer);
			this->groupBox1->Controls->Add(this->Add);
			this->groupBox1->Controls->Add(this->deadline);
			this->groupBox1->Controls->Add(this->pieces);
			this->groupBox1->Controls->Add(this->item);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(72, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(333, 259);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// volunteer
			// 
			this->volunteer->FormattingEnabled = true;
			this->volunteer->Location = System::Drawing::Point(102, 19);
			this->volunteer->Name = L"volunteer";
			this->volunteer->Size = System::Drawing::Size(219, 21);
			this->volunteer->TabIndex = 9;
			//this->volunteer->SelectedIndexChanged += gcnew System::EventHandler(this, &r_tasks_individual::volunteer_SelectedIndexChanged);
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(246, 207);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 1;
			this->Add->Text = L"Add";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &r_tasks_individual::Add_Click);
			// 
			// deadline
			// 
			this->deadline->CustomFormat = L"yyyy-MM-dd";
			this->deadline->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->deadline->Location = System::Drawing::Point(102, 156);
			this->deadline->Name = L"deadline";
			this->deadline->Size = System::Drawing::Size(219, 20);
			this->deadline->TabIndex = 8;
			// 
			// pieces
			// 
			this->pieces->Location = System::Drawing::Point(102, 112);
			this->pieces->Name = L"pieces";
			this->pieces->Size = System::Drawing::Size(219, 20);
			this->pieces->TabIndex = 7;
			// 
			// item
			// 
			this->item->Location = System::Drawing::Point(102, 64);
			this->item->Name = L"item";
			this->item->Size = System::Drawing::Size(219, 20);
			this->item->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Deadline:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"No of pieces";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name of the item:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Volunteer:";
			// 
			// r_tasks_individual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(417, 344);
			this->Controls->Add(this->groupBox1);
			this->Name = L"r_tasks_individual";
			this->Text = L"r_tasks_individual";
			this->Load += gcnew System::EventHandler(this, &r_tasks_individual::r_tasks_individual_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: void fillComboBox(void) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.volunteers where section='resource';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 this->volunteer->Items->Add(myReader->GetString("name"));
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 int i=Convert::ToInt32(this->pieces->Text);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Insert into project.r_tasks (volunteer,name,no_items,deadline,status) values ('"+this->volunteer->Text+"','"+this->item->Text+"','"+i+"','"+this->deadline->Text+"','no');",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 //this->volunteer->Items->Add(myReader->GetString("name"));
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void r_tasks_individual_Load(System::Object^  sender, System::EventArgs^  e) {
			 fillComboBox();
		 }
};
}
