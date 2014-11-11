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
	/// Summary for resources
	/// </summary>
	public ref class resources : public System::Windows::Forms::Form
	{
	public:
		resources(void)
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
		~resources()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  price;
	private: System::Windows::Forms::TextBox^  price_txt;
	protected: 


	private: System::Windows::Forms::TextBox^  pieces_txt;

	private: System::Windows::Forms::TextBox^  name_txt;

	private: System::Windows::Forms::Label^  pieces;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Button^  button1;

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
			this->price = (gcnew System::Windows::Forms::Label());
			this->price_txt = (gcnew System::Windows::Forms::TextBox());
			this->pieces_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->pieces = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->price);
			this->groupBox1->Controls->Add(this->price_txt);
			this->groupBox1->Controls->Add(this->pieces_txt);
			this->groupBox1->Controls->Add(this->name_txt);
			this->groupBox1->Controls->Add(this->pieces);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(63, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 270);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add resource";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::MediumBlue;
			this->price->Location = System::Drawing::Point(6, 163);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(99, 16);
			this->price->TabIndex = 6;
			this->price->Text = L"Price per piece";
			// 
			// price_txt
			// 
			this->price_txt->Location = System::Drawing::Point(140, 163);
			this->price_txt->Name = L"price_txt";
			this->price_txt->Size = System::Drawing::Size(184, 20);
			this->price_txt->TabIndex = 5;
			// 
			// pieces_txt
			// 
			this->pieces_txt->Location = System::Drawing::Point(140, 111);
			this->pieces_txt->Name = L"pieces_txt";
			this->pieces_txt->Size = System::Drawing::Size(184, 20);
			this->pieces_txt->TabIndex = 4;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(140, 60);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(184, 20);
			this->name_txt->TabIndex = 3;
			// 
			// pieces
			// 
			this->pieces->AutoSize = true;
			this->pieces->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pieces->ForeColor = System::Drawing::Color::MediumBlue;
			this->pieces->Location = System::Drawing::Point(11, 109);
			this->pieces->Name = L"pieces";
			this->pieces->Size = System::Drawing::Size(90, 16);
			this->pieces->TabIndex = 2;
			this->pieces->Text = L"No. of pieces:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::MediumBlue;
			this->name->Location = System::Drawing::Point(11, 58);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(45, 16);
			this->name->TabIndex = 1;
			this->name->Text = L"Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(212, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &resources::button1_Click);
			// 
			// resources
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 349);
			this->Controls->Add(this->groupBox1);
			this->Name = L"resources";
			this->Text = L"resources";
			this->Load += gcnew System::EventHandler(this, &resources::resources_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void resources_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost; port=3307; Username=root; password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Insert into database.items (name,tot_no_of_pieces,pieces_available,price) values ('"+this->name_txt->Text+"','"+this->pieces_txt->Text+"','"+this->pieces_txt->Text+"','"+this->price_txt->Text+"');",conDatabase);
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
					MessageBox::Show("Resource already exists");
				}
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
	};
}
