#pragma once
#include"Upload_File.h"
#include"getFiles.h"

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Event_V
	/// </summary>
	public ref class Event_V : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Event_V(String^ user)
		{
			username=user;
			InitializeComponent();
			Fillcombo ();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Event_V()
		{
			if (components)
			{
				delete components;
			}
		}

		protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Label^  volunteer_name;

	private: System::Windows::Forms::Button^  button2;



	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Event_V::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->volunteer_name = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(32, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Deadline";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Task Status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Task Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(313, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Tasks Assigned To You";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(316, 81);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 23);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Event_V::comboBox1_SelectedIndexChanged);
			// 
			// volunteer_name
			// 
			this->volunteer_name->AutoSize = true;
			this->volunteer_name->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->volunteer_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->volunteer_name->Location = System::Drawing::Point(32, 25);
			this->volunteer_name->Name = L"volunteer_name";
			this->volunteer_name->Size = System::Drawing::Size(156, 16);
			this->volunteer_name->TabIndex = 8;
			this->volunteer_name->Text = L"Hello Volunteer";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button2->Location = System::Drawing::Point(118, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 35);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Upload File";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Event_V::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkViolet;
			this->button3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0), true));
			this->button3->Location = System::Drawing::Point(330, 294);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 35);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Download File";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Event_V::button3_Click);
			// 
			// Event_V
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(800, 379);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->volunteer_name);
			this->Name = L"Event_V";
			this->Text = L"Event_V";
			this->Load += gcnew System::EventHandler(this, &Event_V::Event_V_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private : void Fillcombo (void) {

					String^ vol_name = username;
				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.e_ind_tasks where ind_name= '"+vol_name+"';",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 while(myReader->Read())	{
						 String^ task_Name;
						 task_Name = myReader->GetString("task_name");
						 comboBox1->Items->Add(task_Name);
					 
					 }
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }

			 }



private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 String^ combo_val = comboBox1->Text;
				 label2->Text = combo_val;

				 String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from project.e_ind_tasks where task_name = '"+combo_val+"';",conDataBase);
				 MySqlDataReader^ myReader;
					
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase -> ExecuteReader();
					 if(myReader->Read())	{
						 String^ temp;
						 temp = myReader->GetString("status");
						 label3->Text = temp;
						 temp = myReader->GetString("deadline");
						 label8->Text = temp;
						
					 
					 }
				 }
				 catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void Event_V_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
  Upload_File^ f=gcnew Upload_File(username);
			 f->ShowDialog(); 

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


			  getFiles^ f=gcnew getFiles();
			 f->ShowDialog();
		 }
};
}
