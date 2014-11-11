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
	/// Summary for f_Search_Cheque
	/// </summary>
	public ref class f_Search_Cheque : public System::Windows::Forms::Form
	{
	public:
		f_Search_Cheque(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Cheque_fillcombo();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~f_Search_Cheque()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  f_cheque_Search_btn;
	private: System::Windows::Forms::TextBox^  chequesearch_txt;

	private: System::Windows::Forms::ComboBox^  ChequeSearch_comboBox;
	private: System::Windows::Forms::RichTextBox^  ChequeSearch_richTextBox;



	private: System::Windows::Forms::Button^  clear_btn;
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
			this->f_cheque_Search_btn = (gcnew System::Windows::Forms::Button());
			this->chequesearch_txt = (gcnew System::Windows::Forms::TextBox());
			this->ChequeSearch_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ChequeSearch_richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// f_cheque_Search_btn
			// 
			this->f_cheque_Search_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_cheque_Search_btn->Location = System::Drawing::Point(462, 35);
			this->f_cheque_Search_btn->Name = L"f_cheque_Search_btn";
			this->f_cheque_Search_btn->Size = System::Drawing::Size(75, 23);
			this->f_cheque_Search_btn->TabIndex = 0;
			this->f_cheque_Search_btn->Text = L"Search";
			this->f_cheque_Search_btn->UseVisualStyleBackColor = true;
			this->f_cheque_Search_btn->Click += gcnew System::EventHandler(this, &f_Search_Cheque::button1_Click);
			// 
			// chequesearch_txt
			// 
			this->chequesearch_txt->Location = System::Drawing::Point(120, 35);
			this->chequesearch_txt->Name = L"chequesearch_txt";
			this->chequesearch_txt->Size = System::Drawing::Size(129, 20);
			this->chequesearch_txt->TabIndex = 1;
			// 
			// ChequeSearch_comboBox
			// 
			this->ChequeSearch_comboBox->FormattingEnabled = true;
			this->ChequeSearch_comboBox->Location = System::Drawing::Point(285, 34);
			this->ChequeSearch_comboBox->Name = L"ChequeSearch_comboBox";
			this->ChequeSearch_comboBox->Size = System::Drawing::Size(121, 21);
			this->ChequeSearch_comboBox->TabIndex = 2;
			// 
			// ChequeSearch_richTextBox
			// 
			this->ChequeSearch_richTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChequeSearch_richTextBox->Location = System::Drawing::Point(27, 71);
			this->ChequeSearch_richTextBox->Name = L"ChequeSearch_richTextBox";
			this->ChequeSearch_richTextBox->Size = System::Drawing::Size(541, 235);
			this->ChequeSearch_richTextBox->TabIndex = 3;
			this->ChequeSearch_richTextBox->Text = L"";
			// 
			// clear_btn
			// 
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->clear_btn->Location = System::Drawing::Point(27, 35);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(75, 23);
			this->clear_btn->TabIndex = 4;
			this->clear_btn->Text = L"Cleartext";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Click += gcnew System::EventHandler(this, &f_Search_Cheque::clear_btn_Click);
			// 
			// f_Search_Cheque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 335);
			this->Controls->Add(this->clear_btn);
			this->Controls->Add(this->ChequeSearch_richTextBox);
			this->Controls->Add(this->ChequeSearch_comboBox);
			this->Controls->Add(this->chequesearch_txt);
			this->Controls->Add(this->f_cheque_Search_btn);
			this->Name = L"f_Search_Cheque";
			this->Text = L"f_Search_Cheque";
			this->Load += gcnew System::EventHandler(this, &f_Search_Cheque::f_Search_Cheque_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				   String^ searchf =  "%"+this->chequesearch_txt->Text+"%";  
		   if(this->ChequeSearch_comboBox->Text!="All"){
            String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.f_task_approval  where `"+this->ChequeSearch_comboBox->Text+"` like '"+searchf+"'; ",conDataBase);
		   MySqlDataReader^ myReader;
		   try{
			   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   while(myReader->Read()){
			   
			   this->ChequeSearch_richTextBox->Text=(myReader->GetInt32(0)+"  "+myReader->GetInt32(1)+" "+myReader->GetString(2)+" "+myReader->GetString(3)+" "+myReader->GetString(6));
		   }
		  conDataBase->Close();
			  /* MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
			   sda->SelectCommand = cmdDataBase;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			   BindingSource^ bSource = gcnew BindingSource();

			   bSource->DataSource = dbdataset;
			   datagridview_Search->DataSource=bSource;
			   sda->Update(dbdataset);
		 */
		   
		   }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		   
		   }
		   }else if(ChequeSearch_comboBox->Text=="All"){
			     String^ constring1 = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase1=gcnew MySqlConnection(constring1);
		   MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("select * from database.f_task_approval  where chequeid like '"+searchf+"'|| amount like '"+searchf+"' || dateofsubmission like '"+searchf+"' || bank like '"+searchf+"'|| task_name like '"+searchf+"'   ; ",conDataBase1);
		   MySqlDataReader^ myReader1;
		   try{
			   conDataBase1->Open();
		   myReader1=cmdDataBase1->ExecuteReader();
		   while(myReader1->Read()){
			   
			   this->ChequeSearch_richTextBox->Text=(myReader1->GetInt32(0)+"  "+myReader1->GetInt32(1)+" "+myReader1->GetString(2)+" "+myReader1->GetString(3)+" "+myReader1->GetString(6));
		   }
		   conDataBase1->Close();
			 
		   
		   }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		   
		   }
		   }
		 
			 }
	private: System::Void clear_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				  this->ChequeSearch_richTextBox->Clear();
			 }
			 void Cheque_fillcombo(){
	 ChequeSearch_comboBox->Items->Add("chequeid");
	 ChequeSearch_comboBox->Items->Add("task_name");
	 ChequeSearch_comboBox->Items->Add("amount");
	 ChequeSearch_comboBox->Items->Add("dateofsubmission");
	 ChequeSearch_comboBox->Items->Add("bank");
	 ChequeSearch_comboBox->Items->Add("All");

		}
private: System::Void f_Search_Cheque_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
