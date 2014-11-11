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
	/// Summary for Form_Task_Individual_Resource
	/// </summary>
	public ref class Form_Task_Individual_Resource : public System::Windows::Forms::Form
	{
	public:
		Form_Task_Individual_Resource(void)
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
		~Form_Task_Individual_Resource()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  id;
	private: System::Windows::Forms::ColumnHeader^  volunteer;
	private: System::Windows::Forms::ColumnHeader^  name;
	private: System::Windows::Forms::ColumnHeader^  no_of_items;
	private: System::Windows::Forms::ColumnHeader^  deadline;
	private: System::Windows::Forms::ColumnHeader^  status;
	private: System::Windows::Forms::ColumnHeader^  task_name;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->id = (gcnew System::Windows::Forms::ColumnHeader());
			this->volunteer = (gcnew System::Windows::Forms::ColumnHeader());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->no_of_items = (gcnew System::Windows::Forms::ColumnHeader());
			this->deadline = (gcnew System::Windows::Forms::ColumnHeader());
			this->status = (gcnew System::Windows::Forms::ColumnHeader());
			this->task_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {this->id, this->volunteer, 
				this->name, this->no_of_items, this->deadline, this->status, this->task_name});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(736, 518);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// id
			// 
			this->id->Text = L"id";
			// 
			// volunteer
			// 
			this->volunteer->Text = L"volunteer";
			this->volunteer->Width = 93;
			// 
			// name
			// 
			this->name->Text = L"name";
			this->name->Width = 107;
			// 
			// no_of_items
			// 
			this->no_of_items->Text = L"no_of_items";
			this->no_of_items->Width = 87;
			// 
			// deadline
			// 
			this->deadline->Text = L"deadline";
			this->deadline->Width = 89;
			// 
			// status
			// 
			this->status->Text = L"status";
			this->status->Width = 108;
			// 
			// task_name
			// 
			this->task_name->Text = L"task_name";
			this->task_name->Width = 186;
			// 
			// Form_Task_Individual_Resource
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 518);
			this->Controls->Add(this->listView1);
			this->Name = L"Form_Task_Individual_Resource";
			this->Text = L"Form_Task_Individual_Resource";
			this->Load += gcnew System::EventHandler(this, &Form_Task_Individual_Resource::Form_Task_Individual_Resource_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Task_Individual_Resource_Load(System::Object^  sender, System::EventArgs^  e) {

				  String^ constring=L"datasource=127.0.0.1;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from project.r_tasks_i;",conDataBase);
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
					 itm->SubItems->Add(myReader->GetString(2));
					 itm->SubItems->Add(myReader->GetString(3));
					  itm->SubItems->Add(myReader->GetString(4));
					   itm->SubItems->Add(myReader->GetString(5));
					    itm->SubItems->Add(myReader->GetString(6));
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

			 }
};
}
