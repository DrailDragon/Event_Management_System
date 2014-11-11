#pragma once
#include<string>

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Form_Search
	/// </summary>
	public ref class Form_Search : public System::Windows::Forms::Form
	{
	public:
		String^ search;
		Form_Search(String^ temp)
		{
			InitializeComponent();
			search=temp;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  datagridview_Search;

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
			this->datagridview_Search = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->datagridview_Search))->BeginInit();
			this->SuspendLayout();
			// 
			// datagridview_Search
			// 
			this->datagridview_Search->AllowUserToAddRows = false;
			this->datagridview_Search->AllowUserToDeleteRows = false;
			this->datagridview_Search->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datagridview_Search->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagridview_Search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->datagridview_Search->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datagridview_Search->Location = System::Drawing::Point(0, 0);
			this->datagridview_Search->Name = L"datagridview_Search";
			this->datagridview_Search->ReadOnly = true;
			this->datagridview_Search->Size = System::Drawing::Size(445, 403);
			this->datagridview_Search->TabIndex = 0;
			this->datagridview_Search->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_Search::dataGridView1_CellContentClick);
			// 
			// Form_Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 403);
			this->Controls->Add(this->datagridview_Search);
			this->Name = L"Form_Search";
			this->Text = L"Form_Search";
			this->Load += gcnew System::EventHandler(this, &Form_Search::Form_Search_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->datagridview_Search))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Search_Load(System::Object^  sender, System::EventArgs^  e) {
          
		   String^ searchf =  "%"+search+"%";   
            String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select Event_Name,Event_Date,Event_Time,Event_Duration from database.finalized_events  where Event_Name like '"+searchf+"'; ",conDataBase);

		   try{
		   
			   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
			   sda->SelectCommand = cmdDataBase;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			   BindingSource^ bSource = gcnew BindingSource();

			   bSource->DataSource = dbdataset;
			   datagridview_Search->DataSource=bSource;
			   sda->Update(dbdataset);
		 
		   
		   }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		   
		   }
		   
		  

	   }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
	};
}
