#pragma once
#include"stdafx.h"
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form_Volunteers
	/// </summary>
	public ref class Form_Volunteers : public System::Windows::Forms::Form
	{
	public:
		Form_Volunteers(void)
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
		~Form_Volunteers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  id;
	private: System::Windows::Forms::ColumnHeader^  Username;
	private: System::Windows::Forms::ColumnHeader^  Position;
	private: System::Windows::Forms::ColumnHeader^  Email_Address;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->id = (gcnew System::Windows::Forms::ColumnHeader());
			this->Username = (gcnew System::Windows::Forms::ColumnHeader());
			this->Position = (gcnew System::Windows::Forms::ColumnHeader());
			this->Email_Address = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->id, this->Username, 
				this->Position, this->Email_Address});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(622, 441);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// id
			// 
			this->id->Text = L"id";
			// 
			// Username
			// 
			this->Username->Text = L"Username";
			this->Username->Width = 107;
			// 
			// Position
			// 
			this->Position->Text = L"Position";
			this->Position->Width = 170;
			// 
			// Email_Address
			// 
			this->Email_Address->Text = L"Email_Address";
			this->Email_Address->Width = 277;
			// 
			// Form_Volunteers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 441);
			this->Controls->Add(this->listView1);
			this->Name = L"Form_Volunteers";
			this->Text = L"Form_Volunteers";
			this->Load += gcnew System::EventHandler(this, &Form_Volunteers::Form_Volunteers_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
   
    private : void ListFill(){
		
		     String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.login;",conDataBase);
			 MySqlDataReader^	myReader;
			 listView1->Items->Clear();
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 //showing the items
					 ListViewItem ^ itm = listView1->Items->Add(myReader->GetString(0));
					 itm->SubItems->Add(myReader->GetString(1));
					 itm->SubItems->Add(myReader->GetString(3));
					 itm->SubItems->Add(myReader->GetString(6));
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			  			 		  			  
		}


	private: System::Void Form_Volunteers_Load(System::Object^  sender, System::EventArgs^  e) {

              ListFill();

			 }
	};
}
