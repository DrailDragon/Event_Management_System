#pragma once
#include "stdafx.h"
#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Upload_File
	/// </summary>
	public ref class Upload_File : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Upload_File(String^ user)
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
		~Upload_File()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  file_name;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  description;
	private: System::Windows::Forms::TextBox^  name;


	private: System::Windows::Forms::Label^  name_txt;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->file_name = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->description);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->name_txt);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->file_name);
			this->groupBox1->Location = System::Drawing::Point(51, 60);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(481, 327);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"choose the file";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Description:";
			// 
			// description
			// 
			this->description->Location = System::Drawing::Point(135, 98);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(300, 95);
			this->description->TabIndex = 6;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(135, 32);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(300, 20);
			this->name->TabIndex = 5;
			// 
			// name_txt
			// 
			this->name_txt->AutoSize = true;
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name_txt->Location = System::Drawing::Point(39, 32);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(55, 23);
			this->name_txt->TabIndex = 4;
			this->name_txt->Text = L"Name:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(19, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Select file";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Upload_File::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(350, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Upload";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Upload_File::button1_Click);
			// 
			// file_name
			// 
			this->file_name->AutoSize = true;
			this->file_name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->file_name->ForeColor = System::Drawing::Color::Navy;
			this->file_name->Location = System::Drawing::Point(150, 213);
			this->file_name->Name = L"file_name";
			this->file_name->Size = System::Drawing::Size(121, 21);
			this->file_name->TabIndex = 0;
			this->file_name->Text = L"Choose the file";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Upload_File::openFileDialog1_FileOk);
			// 
			// Upload_File
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 410);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Upload_File";
			this->Text = L"Upload_File";
			this->Load += gcnew System::EventHandler(this, &Upload_File::Upload_File_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
	
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog^ openFileDialog1= gcnew OpenFileDialog();
				 openFileDialog1->ShowDialog();
				 file_name->Text=openFileDialog1->FileName;
			 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
//---------------------------------Make modifications to insert the file into the database------------------------------------------
			 
			// String^ fileType=this->file_name->Text->FileType;
			 String^ filePath=this->file_name->Text;//get the file path
			 String^ extension=Path::GetExtension(filePath);
			 if((extension==".jpg")||(extension==".jpeg")||(extension==".bmp")||(extension==".gif")){
			 FileStream^ fs= gcnew FileStream(this->file_name->Text,FileMode::Open,FileAccess::Read);//Read the file into stream for accessiing its contents
			 int size=Convert::ToInt32(fs->Length);//Get the size of the file
			 array<Byte> ^b=gcnew array<Byte>(size);
			 fs->Read(b,0,size);
			 fs->Close();
			 MessageBox::Show(b[5].ToString());
//--------------------------------Database connection and adding data to the database------------------------------------------------
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Insert into database.files (name,description,fileSize,filePath,fileContent,fileType,uploader) values ('"+this->name->Text+"','"+this->description->Text+"','"+size+"','"+filePath+"',@image,'"+extension+"','"+username+"');",conDatabase);
			 cmdDatabase->Parameters->AddWithValue("@image",b);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 
						///*OpenFileDialog ^openFile=gcnew OpenFileDialog();
						//openFile->ShowDialog();*/
						//FileStream^ fs= gcnew FileStream("data.bin",FileMode::Create);//Read the file into stream for accessiing its contents
						////fs->Write(Buffer,0,size);
						//BinaryWriter ^fw=gcnew BinaryWriter(fs);
						//try{
						//for(int i=0;i<size;i++){
						//	fw->Write(b[i]);
						//}
						//}
						//catch(Exception^ ex){
						//	MessageBox::Show(ex->Message);
						//}
						//
					 ////count++;
				 }
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
			 else
				 MessageBox::Show("Not an Image File!!...Try again");
		 }
		 
private: System::Void Upload_File_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
