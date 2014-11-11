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
	/// Summary for assign_task_to_individual
	/// </summary>
	public ref class assign_task_to_individual : public System::Windows::Forms::Form
	{
	public:
		assign_task_to_individual(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			f_Ind_name_comboBox_fill();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~assign_task_to_individual()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  f_Assign_task_ind_groupBox;
	private: System::Windows::Forms::Button^  f_Ind__task_clr_btn;

	private: System::Windows::Forms::DateTimePicker^  f_Ind_task_dateTimePicker;

	private: System::Windows::Forms::TextBox^  f_Ind_amt_txt;
	private: System::Windows::Forms::Label^  f_Ind_task_name_lbl;
	private: System::Windows::Forms::Label^  f_task_IndName_lbl;
	private: System::Windows::Forms::Label^  f_Ind_deadline_lbl;
	private: System::Windows::Forms::TextBox^  f_Ind_taskName_txt;
	private: System::Windows::Forms::Label^  f_Ind_amount_lbl;
	private: System::Windows::Forms::Button^  f_Ind_task_Assign_btn;


	private: System::Windows::Forms::Button^  f_Ind_task_Cancel_btn;
	private: System::Windows::Forms::ComboBox^  f_Ind_name_comboBox;


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
			this->f_Assign_task_ind_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->f_Ind_name_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->f_Ind__task_clr_btn = (gcnew System::Windows::Forms::Button());
			this->f_Ind_task_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_Ind_amt_txt = (gcnew System::Windows::Forms::TextBox());
			this->f_Ind_task_name_lbl = (gcnew System::Windows::Forms::Label());
			this->f_task_IndName_lbl = (gcnew System::Windows::Forms::Label());
			this->f_Ind_deadline_lbl = (gcnew System::Windows::Forms::Label());
			this->f_Ind_taskName_txt = (gcnew System::Windows::Forms::TextBox());
			this->f_Ind_amount_lbl = (gcnew System::Windows::Forms::Label());
			this->f_Ind_task_Assign_btn = (gcnew System::Windows::Forms::Button());
			this->f_Ind_task_Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->f_Assign_task_ind_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// f_Assign_task_ind_groupBox
			// 
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_name_comboBox);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind__task_clr_btn);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_task_dateTimePicker);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_amt_txt);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_task_name_lbl);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_task_IndName_lbl);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_deadline_lbl);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_taskName_txt);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_amount_lbl);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_task_Assign_btn);
			this->f_Assign_task_ind_groupBox->Controls->Add(this->f_Ind_task_Cancel_btn);
			this->f_Assign_task_ind_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Assign_task_ind_groupBox->Location = System::Drawing::Point(0, 0);
			this->f_Assign_task_ind_groupBox->Name = L"f_Assign_task_ind_groupBox";
			this->f_Assign_task_ind_groupBox->Size = System::Drawing::Size(647, 341);
			this->f_Assign_task_ind_groupBox->TabIndex = 0;
			this->f_Assign_task_ind_groupBox->TabStop = false;
			this->f_Assign_task_ind_groupBox->Text = L"Enter the task details";
			// 
			// f_Ind_name_comboBox
			// 
			this->f_Ind_name_comboBox->FormattingEnabled = true;
			this->f_Ind_name_comboBox->Location = System::Drawing::Point(185, 130);
			this->f_Ind_name_comboBox->MaxDropDownItems = 40;
			this->f_Ind_name_comboBox->Name = L"f_Ind_name_comboBox";
			this->f_Ind_name_comboBox->Size = System::Drawing::Size(153, 33);
			this->f_Ind_name_comboBox->TabIndex = 26;
			// 
			// f_Ind__task_clr_btn
			// 
			this->f_Ind__task_clr_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->f_Ind__task_clr_btn->AutoSize = true;
			this->f_Ind__task_clr_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind__task_clr_btn->ForeColor = System::Drawing::Color::Red;
			this->f_Ind__task_clr_btn->Location = System::Drawing::Point(492, 21);
			this->f_Ind__task_clr_btn->Name = L"f_Ind__task_clr_btn";
			this->f_Ind__task_clr_btn->Size = System::Drawing::Size(95, 35);
			this->f_Ind__task_clr_btn->TabIndex = 25;
			this->f_Ind__task_clr_btn->Text = L"Clear";
			this->f_Ind__task_clr_btn->UseVisualStyleBackColor = true;
			this->f_Ind__task_clr_btn->Click += gcnew System::EventHandler(this, &assign_task_to_individual::f_Ind__task_clr_btn_Click);
			// 
			// f_Ind_task_dateTimePicker
			// 
			this->f_Ind_task_dateTimePicker->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->f_Ind_task_dateTimePicker->CustomFormat = L"yyyy-MM-dd hh:mm:ss";
			this->f_Ind_task_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind_task_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->f_Ind_task_dateTimePicker->Location = System::Drawing::Point(387, 201);
			this->f_Ind_task_dateTimePicker->Name = L"f_Ind_task_dateTimePicker";
			this->f_Ind_task_dateTimePicker->Size = System::Drawing::Size(223, 31);
			this->f_Ind_task_dateTimePicker->TabIndex = 24;
			// 
			// f_Ind_amt_txt
			// 
			this->f_Ind_amt_txt->Location = System::Drawing::Point(151, 216);
			this->f_Ind_amt_txt->Multiline = true;
			this->f_Ind_amt_txt->Name = L"f_Ind_amt_txt";
			this->f_Ind_amt_txt->Size = System::Drawing::Size(155, 35);
			this->f_Ind_amt_txt->TabIndex = 22;
			// 
			// f_Ind_task_name_lbl
			// 
			this->f_Ind_task_name_lbl->AutoSize = true;
			this->f_Ind_task_name_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind_task_name_lbl->Location = System::Drawing::Point(68, 74);
			this->f_Ind_task_name_lbl->Name = L"f_Ind_task_name_lbl";
			this->f_Ind_task_name_lbl->Size = System::Drawing::Size(93, 20);
			this->f_Ind_task_name_lbl->TabIndex = 20;
			this->f_Ind_task_name_lbl->Text = L"TaskName";
			// 
			// f_task_IndName_lbl
			// 
			this->f_task_IndName_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->f_task_IndName_lbl->AutoSize = true;
			this->f_task_IndName_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_task_IndName_lbl->Location = System::Drawing::Point(30, 137);
			this->f_task_IndName_lbl->Name = L"f_task_IndName_lbl";
			this->f_task_IndName_lbl->Size = System::Drawing::Size(131, 20);
			this->f_task_IndName_lbl->TabIndex = 19;
			this->f_task_IndName_lbl->Text = L"IndividualName";
			// 
			// f_Ind_deadline_lbl
			// 
			this->f_Ind_deadline_lbl->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->f_Ind_deadline_lbl->AutoSize = true;
			this->f_Ind_deadline_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind_deadline_lbl->Location = System::Drawing::Point(383, 160);
			this->f_Ind_deadline_lbl->Name = L"f_Ind_deadline_lbl";
			this->f_Ind_deadline_lbl->Size = System::Drawing::Size(80, 20);
			this->f_Ind_deadline_lbl->TabIndex = 18;
			this->f_Ind_deadline_lbl->Text = L"Deadline";
			// 
			// f_Ind_taskName_txt
			// 
			this->f_Ind_taskName_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_Ind_taskName_txt->Location = System::Drawing::Point(167, 74);
			this->f_Ind_taskName_txt->Multiline = true;
			this->f_Ind_taskName_txt->Name = L"f_Ind_taskName_txt";
			this->f_Ind_taskName_txt->Size = System::Drawing::Size(443, 34);
			this->f_Ind_taskName_txt->TabIndex = 17;
			// 
			// f_Ind_amount_lbl
			// 
			this->f_Ind_amount_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->f_Ind_amount_lbl->AutoSize = true;
			this->f_Ind_amount_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind_amount_lbl->Location = System::Drawing::Point(68, 231);
			this->f_Ind_amount_lbl->Name = L"f_Ind_amount_lbl";
			this->f_Ind_amount_lbl->Size = System::Drawing::Size(69, 20);
			this->f_Ind_amount_lbl->TabIndex = 16;
			this->f_Ind_amount_lbl->Text = L"amount";
			this->f_Ind_amount_lbl->Click += gcnew System::EventHandler(this, &assign_task_to_individual::f_grp_amount_lbl_Click);
			// 
			// f_Ind_task_Assign_btn
			// 
			this->f_Ind_task_Assign_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->f_Ind_task_Assign_btn->AutoSize = true;
			this->f_Ind_task_Assign_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind_task_Assign_btn->ForeColor = System::Drawing::Color::Lime;
			this->f_Ind_task_Assign_btn->Location = System::Drawing::Point(479, 284);
			this->f_Ind_task_Assign_btn->Name = L"f_Ind_task_Assign_btn";
			this->f_Ind_task_Assign_btn->Size = System::Drawing::Size(93, 35);
			this->f_Ind_task_Assign_btn->TabIndex = 15;
			this->f_Ind_task_Assign_btn->Text = L"Assign";
			this->f_Ind_task_Assign_btn->UseVisualStyleBackColor = true;
			this->f_Ind_task_Assign_btn->Click += gcnew System::EventHandler(this, &assign_task_to_individual::f_Ind_task_Assign_btn_Click);
			// 
			// f_Ind_task_Cancel_btn
			// 
			this->f_Ind_task_Cancel_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->f_Ind_task_Cancel_btn->AutoSize = true;
			this->f_Ind_task_Cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_Ind_task_Cancel_btn->ForeColor = System::Drawing::Color::Red;
			this->f_Ind_task_Cancel_btn->Location = System::Drawing::Point(113, 284);
			this->f_Ind_task_Cancel_btn->Name = L"f_Ind_task_Cancel_btn";
			this->f_Ind_task_Cancel_btn->Size = System::Drawing::Size(95, 35);
			this->f_Ind_task_Cancel_btn->TabIndex = 14;
			this->f_Ind_task_Cancel_btn->Text = L"Cancel";
			this->f_Ind_task_Cancel_btn->UseVisualStyleBackColor = true;
			this->f_Ind_task_Cancel_btn->Click += gcnew System::EventHandler(this, &assign_task_to_individual::f_Ind_task_Cancel_btn_Click);
			// 
			// assign_task_to_individual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 342);
			this->Controls->Add(this->f_Assign_task_ind_groupBox);
			this->Name = L"assign_task_to_individual";
			this->Text = L"assign_task_to_individual";
			this->Load += gcnew System::EventHandler(this, &assign_task_to_individual::assign_task_to_individual_Load);
			this->f_Assign_task_ind_groupBox->ResumeLayout(false);
			this->f_Assign_task_ind_groupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void f_grp_amount_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void f_Ind_task_Assign_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*insert the task_details in f_ind_tasks table */
			   String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	 MySqlCommand ^cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`f_ind_tasks`(`task_name`,`ind_name`,`amount`,`deadline`)VALUES('"+this->f_Ind_taskName_txt->Text+"','"+this->f_Ind_name_comboBox->Text+"','"+this->f_Ind_amt_txt->Text+"','"+this->f_Ind_task_dateTimePicker->Text+"');", conDataBase ); 
	 MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader= cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
		}
MessageBox::Show("processing");
conDataBase->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}
     /*update task_given column in f_volunteers table*/
												/*Get the no. of tasks assigned till now to the individual volunteer from f_volunteers table and save it in no_ind_tasks integer variable*/
                             int no_ind_tasks;
											String^ constring1 = L"datasource=localhost;port=3307;username=root;password=root"; 
                               MySqlConnection^ conDataBase1 = gcnew MySqlConnection( constring1 ); 

	            MySqlCommand ^cmdDataBase1 = gcnew MySqlCommand("select tasks_given from database.f_volunteers where name='"+this->f_Ind_name_comboBox->Text+"' ;", conDataBase1 ); 
	            MySqlDataReader ^myReader1; 
               try{
                 conDataBase1->Open(); 
                    myReader1 = cmdDataBase1->ExecuteReader(); 
                 while (myReader1->Read()) {
					 no_ind_tasks=myReader1->GetInt32("tasks_given");
		                }
               MessageBox::Show("No. of tasks given till now was"+ "  "+no_ind_tasks);
			   no_ind_tasks++;
                conDataBase1->Close(); 
                  }catch(Exception^ ex)
                               {
	                 MessageBox::Show(ex->Message);
		                           }
				           /*Increment no. of tasks given to the individual volunteer updating the task_given column in f_volunteers table*/
  String^ constring2 = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase2 = gcnew MySqlConnection( constring2 ); 
	bool check_success=true;
	 MySqlCommand ^cmdDataBase2 = gcnew MySqlCommand("update database.f_volunteers set tasks_given='"+no_ind_tasks+"' where name='"+this->f_Ind_name_comboBox->Text+"';", conDataBase2 ); 
	 MySqlDataReader ^myReader2; 
try{
conDataBase2->Open(); 
myReader2 = cmdDataBase2->ExecuteReader(); 
while (myReader2->Read()) {
	
		}
conDataBase2->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}
if(check_success==true){
MessageBox::Show("Task Assigned successfully");
this->Close();}
		 }
private: System::Void f_Ind_task_Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 this->f_Ind_taskName_txt->Text="";
			 this->f_Ind_amt_txt->Text="";
			 this->f_Ind_name_comboBox->Text="";
			 MessageBox::Show("Canceled assigning task");
		 
		 }
private: System::Void f_Ind__task_clr_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 this->f_Ind_taskName_txt->Text="";
			 this->f_Ind_amt_txt->Text="";
			 this->f_Ind_name_comboBox->Text="";
			
		 }
		 /*f_Ind_name_comboBox_fill() function populates f_Ind_name_comboBox to provide user to select name of the individual volunteer retrieving from the table database.f_volunteers*/
 private: System::Void f_Ind_name_comboBox_fill()
				  {
					  	   String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	 MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select name from `database`.`f_volunteers` ;", conDataBase ); 
	 MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader= cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
	this->f_Ind_name_comboBox->Items->Add(myReader->GetString("name"));
		}

conDataBase->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}

				  }
private: System::Void assign_task_to_individual_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
