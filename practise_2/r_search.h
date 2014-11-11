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
	/// Summary for r_search
	/// </summary>
	public ref class r_search : public System::Windows::Forms::Form
	{
	public:
		r_search(void)
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
		~r_search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  name_txt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  search_btn;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::TextBox^  name2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  query;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dgv;






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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->name2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->query = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgv))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(613, 393);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->search_btn);
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Controls->Add(this->name_txt);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(605, 362);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Resources";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// search_btn
			// 
			this->search_btn->Location = System::Drawing::Point(485, 39);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(75, 32);
			this->search_btn->TabIndex = 3;
			this->search_btn->Text = L"Search";
			this->search_btn->UseVisualStyleBackColor = true;
			this->search_btn->Click += gcnew System::EventHandler(this, &r_search::search_btn_Click);
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(3, 104);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(594, 213);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 179;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Total no of pieces";
			this->columnHeader2->Width = 148;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Pieces Available";
			this->columnHeader3->Width = 132;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Price per piece";
			this->columnHeader4->Width = 127;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(205, 39);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(274, 26);
			this->name_txt->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name of the Resource:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listView2);
			this->tabPage2->Controls->Add(this->name);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(605, 362);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Events";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader5, this->columnHeader6, 
				this->columnHeader7, this->columnHeader8, this->columnHeader9});
			this->listView2->Location = System::Drawing::Point(3, 96);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(596, 221);
			this->listView2->TabIndex = 3;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"id";
			this->columnHeader5->Width = 53;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Name";
			this->columnHeader6->Width = 191;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Date";
			this->columnHeader7->Width = 126;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Duration";
			this->columnHeader8->Width = 77;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Venue";
			this->columnHeader9->Width = 146;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(121, 34);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(247, 26);
			this->name->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Event Name";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(421, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &r_search::button1_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->listView3);
			this->tabPage3->Controls->Add(this->name2);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(605, 362);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Volunteers";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(419, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 26);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &r_search::button2_Click);
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader10, this->columnHeader11, 
				this->columnHeader12, this->columnHeader13, this->columnHeader14});
			this->listView3->Location = System::Drawing::Point(8, 85);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(589, 232);
			this->listView3->TabIndex = 2;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"id";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Username";
			this->columnHeader11->Width = 182;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Section";
			this->columnHeader12->Width = 117;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Tasks completed";
			this->columnHeader13->Width = 118;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Tasks Given";
			this->columnHeader14->Width = 106;
			// 
			// name2
			// 
			this->name2->Location = System::Drawing::Point(129, 29);
			this->name2->Name = L"name2";
			this->name2->Size = System::Drawing::Size(266, 26);
			this->name2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Name";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->query);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->dgv);
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(605, 362);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Venues";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Name:";
			// 
			// query
			// 
			this->query->Location = System::Drawing::Point(105, 25);
			this->query->Name = L"query";
			this->query->Size = System::Drawing::Size(266, 26);
			this->query->TabIndex = 4;
			this->query->Text = L"Venue name:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(477, 40);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 28);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &r_search::button3_Click);
			// 
			// dgv
			// 
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(10, 131);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(589, 223);
			this->dgv->TabIndex = 0;
			// 
			// r_search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 393);
			this->Controls->Add(this->tabControl1);
			this->Name = L"r_search";
			this->Text = L"r_search";
			this->Load += gcnew System::EventHandler(this, &r_search::r_search_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgv))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ search=this->name->Text;
			String^ searchf =  "%"+search+"%";   
            String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		    MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from database.finalized_events  where Event_Name like '"+searchf+"'; ",conDataBase);
			MySqlDataReader^	myReader;
			 listView1->Items->Clear();
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 //showing the items
					 ListViewItem ^ itm = listView2->Items->Add(myReader->GetString(0));
					 itm->SubItems->Add(myReader->GetString(1));
					 itm->SubItems->Add(myReader->GetString(2));
					 itm->SubItems->Add(myReader->GetString(3));
					 itm->SubItems->Add(myReader->GetString(4));
					 itm->SubItems->Add(myReader->GetString(6));
                     
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }	
		}
private: System::Void search_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ search=this->name_txt->Text;
			String^ searchf =  "%"+search+"%";   
            String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		    MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from project.items where name like '"+searchf+"'; ",conDataBase);
			MySqlDataReader^ myReader;
			 listView1->Items->Clear();
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 //showing the items
					 ListViewItem ^ itm = listView1->Items->Add(myReader->GetString(1));
					 itm->SubItems->Add(myReader->GetString(2));
					 itm->SubItems->Add(myReader->GetString(3));
					 itm->SubItems->Add(myReader->GetString(4));
					 //itm->SubItems->Add(myReader->GetString(5));
					 //itm->SubItems->Add(myReader->GetString(6));
                     
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ search=this->name2->Text;
			String^ searchf =  "%"+search+"%";   
            String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
		    MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from project.volunteers where name like '"+searchf+"'; ",conDataBase);
			MySqlDataReader^ myReader;
			 listView1->Items->Clear();
			 try
			 {	
				
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 //showing the items
					 ListViewItem ^ itm = listView3->Items->Add(myReader->GetString(0));
					 itm->SubItems->Add(myReader->GetString(1));
					 itm->SubItems->Add(myReader->GetString(2));
					 itm->SubItems->Add(myReader->GetString(3));
					 itm->SubItems->Add(myReader->GetString(4));
					 //itm->SubItems->Add(myReader->GetString(6));
                     
				 }
			 }
			 catch(Exception^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			
						 String^search=this->query->Text;
						  String^ searchf =  "%"+search+"%";   
							String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
						   MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						   MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from project.venue where name like '"+searchf+"'; ",conDataBase);

						   try{
		   
							   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
							   sda->SelectCommand = cmdDataBase;
							   DataTable^ dbdataset = gcnew DataTable();
							   sda->Fill(dbdataset);
							   BindingSource^ bSource = gcnew BindingSource();

							   bSource->DataSource = dbdataset;
							   dgv->DataSource=bSource;
							   sda->Update(dbdataset);
		 
		   
						   }catch(Exception^ ex){
		   
							MessageBox::Show(ex->Message);
		   
						   }
				 
		 }
private: System::Void r_search_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
