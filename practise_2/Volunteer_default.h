#pragma once
#include"Resource_V.h"
#include"Finance_V.h"
#include"Event_V.h"
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Volunteer_default
	/// </summary>
	public ref class Volunteer_default : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Volunteer_default(String^ user)
		{
			username=user;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Volunteer_default()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

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

		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Volunteer_default::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(175, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You will soon be assigned to a section";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(315, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"WELCOME !!!!\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(276, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Please log in later";
			// 
			// Volunteer_default
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 444);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Volunteer_default";
			this->Text = L"Volunteer_default";
			this->Load += gcnew System::EventHandler(this, &Volunteer_default::Volunteer_default_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		   String^ section;
		   String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from project.volunteers where name='"+username+"'; ",conDataBase);
		   MySqlDataReader^ myReader;
		   int count=0;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   while(myReader->Read()){
				count++;
				}
		   }
		   catch(Exception^ ex){
				MessageBox::Show(ex->Message);
		   }
		   myReader->Close();
		   if(count>0){
			try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   while(myReader->Read()){
				section=myReader->GetString("Section");
				}
		   }
		   catch(Exception^ ex){
				MessageBox::Show(ex->Message);
		   }
		   }
		   else
			   MessageBox::Show("You are not yet assigned a section");
		   if(section=="resource"){
				Resource_V^ r=gcnew Resource_V(username);
				r->ShowDialog();
		   }
		   else if(section=="finance")
		   {
			   Finance_V^ r=gcnew Finance_V(username);
			   r->ShowDialog();
		   }
		   else
		   {
			   Event_V^ r=gcnew Event_V(username);
			   r->ShowDialog();
		   }
	 }
private: System::Void Volunteer_default_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
