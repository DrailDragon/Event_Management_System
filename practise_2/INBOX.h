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
	/// Summary for INBOX
	/// </summary>
	public ref class INBOX : public System::Windows::Forms::Form
	{
	public:
		INBOX(void)
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
		~INBOX()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  msg_list;
	protected: 

	protected: 

	protected: 

	protected: 

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
			this->msg_list = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// msg_list
			// 
			this->msg_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->msg_list->Location = System::Drawing::Point(1, 2);
			this->msg_list->Name = L"msg_list";
			this->msg_list->Size = System::Drawing::Size(401, 343);
			this->msg_list->TabIndex = 0;
			this->msg_list->UseCompatibleStateImageBehavior = false;
			this->msg_list->View = System::Windows::Forms::View::List;
			// 
			// INBOX
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 347);
			this->Controls->Add(this->msg_list);
			this->Name = L"INBOX";
			this->Text = L"INBOX";
			this->Load += gcnew System::EventHandler(this, &INBOX::INBOX_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void INBOX_Load(System::Object^  sender, System::EventArgs^  e) {
				  String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from database.message where recipient1=\"Resource_Manager\" or recipient2= \"Resource_Manager\" or recipient3=\"Resource_Manager\";",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 msg_list->Items->Add("Message Id: " + "   "+myReader->GetString("id"));	
					 msg_list->Items->Add("Sender:     " + "      "+myReader->GetString("sender"));
					 msg_list->Items->Add("Message:    " + "    "+myReader->GetString("message"));
					 msg_list->Items->Add("\n");
				}
			 
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 }
	};
}
