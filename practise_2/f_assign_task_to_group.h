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
	/// Summary for f_assign_task_to_group
	/// </summary>
	public ref class f_assign_task_to_group : public System::Windows::Forms::Form
	{
	public:
		
		f_assign_task_to_group()
		{
			InitializeComponent();
	       f_grp_name_comboBox_fill();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~f_assign_task_to_group()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  f_grp_task_Cancel_btn;
	private: System::Windows::Forms::Button^  f_grp_task_Assign_btn;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  f_grp_amount_lbl;

	private: System::Windows::Forms::TextBox^  f_grp_taskName_txt;
	private: System::Windows::Forms::Label^  f_deadline_lbl;




	private: System::Windows::Forms::Label^  f_task_GroupName_lbl;



	private: System::Windows::Forms::Label^  f_grp_task_name_lbl;

	private: System::Windows::Forms::Label^  DetailsTass_lbl;


	private: System::Windows::Forms::TextBox^  f_grp_amt_txt;


	private: System::Windows::Forms::DateTimePicker^  f_grp_task_dateTimePicker;
	private: System::Windows::Forms::Button^  f_grp__task_clr_btn;
	private: System::Windows::Forms::ComboBox^  f_grp_name_comboBox;





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
			this->f_grp_task_Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->f_grp_task_Assign_btn = (gcnew System::Windows::Forms::Button());
			this->f_grp_amount_lbl = (gcnew System::Windows::Forms::Label());
			this->f_grp_taskName_txt = (gcnew System::Windows::Forms::TextBox());
			this->f_deadline_lbl = (gcnew System::Windows::Forms::Label());
			this->f_task_GroupName_lbl = (gcnew System::Windows::Forms::Label());
			this->f_grp_task_name_lbl = (gcnew System::Windows::Forms::Label());
			this->DetailsTass_lbl = (gcnew System::Windows::Forms::Label());
			this->f_grp_amt_txt = (gcnew System::Windows::Forms::TextBox());
			this->f_grp_task_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_grp__task_clr_btn = (gcnew System::Windows::Forms::Button());
			this->f_grp_name_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// f_grp_task_Cancel_btn
			// 
			this->f_grp_task_Cancel_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->f_grp_task_Cancel_btn->AutoSize = true;
			this->f_grp_task_Cancel_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_grp_task_Cancel_btn->ForeColor = System::Drawing::Color::Red;
			this->f_grp_task_Cancel_btn->Location = System::Drawing::Point(89, 286);
			this->f_grp_task_Cancel_btn->Name = L"f_grp_task_Cancel_btn";
			this->f_grp_task_Cancel_btn->Size = System::Drawing::Size(95, 35);
			this->f_grp_task_Cancel_btn->TabIndex = 0;
			this->f_grp_task_Cancel_btn->Text = L"Cancel";
			this->f_grp_task_Cancel_btn->UseVisualStyleBackColor = true;
			this->f_grp_task_Cancel_btn->Click += gcnew System::EventHandler(this, &f_assign_task_to_group::f_grp_task_Cancel_btn_Click);
			// 
			// f_grp_task_Assign_btn
			// 
			this->f_grp_task_Assign_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->f_grp_task_Assign_btn->AutoSize = true;
			this->f_grp_task_Assign_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_grp_task_Assign_btn->ForeColor = System::Drawing::Color::Lime;
			this->f_grp_task_Assign_btn->Location = System::Drawing::Point(455, 286);
			this->f_grp_task_Assign_btn->Name = L"f_grp_task_Assign_btn";
			this->f_grp_task_Assign_btn->Size = System::Drawing::Size(93, 35);
			this->f_grp_task_Assign_btn->TabIndex = 1;
			this->f_grp_task_Assign_btn->Text = L"Assign";
			this->f_grp_task_Assign_btn->UseVisualStyleBackColor = true;
			this->f_grp_task_Assign_btn->Click += gcnew System::EventHandler(this, &f_assign_task_to_group::button2_Click);
			// 
			// f_grp_amount_lbl
			// 
			this->f_grp_amount_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->f_grp_amount_lbl->AutoSize = true;
			this->f_grp_amount_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_grp_amount_lbl->Location = System::Drawing::Point(44, 233);
			this->f_grp_amount_lbl->Name = L"f_grp_amount_lbl";
			this->f_grp_amount_lbl->Size = System::Drawing::Size(69, 20);
			this->f_grp_amount_lbl->TabIndex = 2;
			this->f_grp_amount_lbl->Text = L"amount";
			// 
			// f_grp_taskName_txt
			// 
			this->f_grp_taskName_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->f_grp_taskName_txt->Location = System::Drawing::Point(143, 76);
			this->f_grp_taskName_txt->Multiline = true;
			this->f_grp_taskName_txt->Name = L"f_grp_taskName_txt";
			this->f_grp_taskName_txt->Size = System::Drawing::Size(443, 34);
			this->f_grp_taskName_txt->TabIndex = 3;
			// 
			// f_deadline_lbl
			// 
			this->f_deadline_lbl->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->f_deadline_lbl->AutoSize = true;
			this->f_deadline_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_deadline_lbl->Location = System::Drawing::Point(359, 162);
			this->f_deadline_lbl->Name = L"f_deadline_lbl";
			this->f_deadline_lbl->Size = System::Drawing::Size(80, 20);
			this->f_deadline_lbl->TabIndex = 4;
			this->f_deadline_lbl->Text = L"Deadline";
			this->f_deadline_lbl->Click += gcnew System::EventHandler(this, &f_assign_task_to_group::label2_Click);
			// 
			// f_task_GroupName_lbl
			// 
			this->f_task_GroupName_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->f_task_GroupName_lbl->AutoSize = true;
			this->f_task_GroupName_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_task_GroupName_lbl->Location = System::Drawing::Point(12, 139);
			this->f_task_GroupName_lbl->Name = L"f_task_GroupName_lbl";
			this->f_task_GroupName_lbl->Size = System::Drawing::Size(110, 20);
			this->f_task_GroupName_lbl->TabIndex = 6;
			this->f_task_GroupName_lbl->Text = L"Group Name";
			// 
			// f_grp_task_name_lbl
			// 
			this->f_grp_task_name_lbl->AutoSize = true;
			this->f_grp_task_name_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_grp_task_name_lbl->Location = System::Drawing::Point(44, 76);
			this->f_grp_task_name_lbl->Name = L"f_grp_task_name_lbl";
			this->f_grp_task_name_lbl->Size = System::Drawing::Size(93, 20);
			this->f_grp_task_name_lbl->TabIndex = 7;
			this->f_grp_task_name_lbl->Text = L"TaskName";
			// 
			// DetailsTass_lbl
			// 
			this->DetailsTass_lbl->AutoSize = true;
			this->DetailsTass_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DetailsTass_lbl->Location = System::Drawing::Point(44, 23);
			this->DetailsTass_lbl->Name = L"DetailsTass_lbl";
			this->DetailsTass_lbl->Size = System::Drawing::Size(198, 18);
			this->DetailsTass_lbl->TabIndex = 8;
			this->DetailsTass_lbl->Text = L"Enter Details Of the Task";
			// 
			// f_grp_amt_txt
			// 
			this->f_grp_amt_txt->Location = System::Drawing::Point(127, 218);
			this->f_grp_amt_txt->Multiline = true;
			this->f_grp_amt_txt->Name = L"f_grp_amt_txt";
			this->f_grp_amt_txt->Size = System::Drawing::Size(155, 35);
			this->f_grp_amt_txt->TabIndex = 10;
			// 
			// f_grp_task_dateTimePicker
			// 
			this->f_grp_task_dateTimePicker->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->f_grp_task_dateTimePicker->CustomFormat = L"yyyy-MM-dd hh:mm:ss";
			this->f_grp_task_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->f_grp_task_dateTimePicker->Location = System::Drawing::Point(363, 218);
			this->f_grp_task_dateTimePicker->Name = L"f_grp_task_dateTimePicker";
			this->f_grp_task_dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->f_grp_task_dateTimePicker->TabIndex = 12;
			// 
			// f_grp__task_clr_btn
			// 
			this->f_grp__task_clr_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->f_grp__task_clr_btn->AutoSize = true;
			this->f_grp__task_clr_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_grp__task_clr_btn->ForeColor = System::Drawing::Color::Red;
			this->f_grp__task_clr_btn->Location = System::Drawing::Point(468, 23);
			this->f_grp__task_clr_btn->Name = L"f_grp__task_clr_btn";
			this->f_grp__task_clr_btn->Size = System::Drawing::Size(95, 35);
			this->f_grp__task_clr_btn->TabIndex = 13;
			this->f_grp__task_clr_btn->Text = L"Clear";
			this->f_grp__task_clr_btn->UseVisualStyleBackColor = true;
			this->f_grp__task_clr_btn->Click += gcnew System::EventHandler(this, &f_assign_task_to_group::f_grp__task_clr_btn_Click);
			// 
			// f_grp_name_comboBox
			// 
			this->f_grp_name_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_grp_name_comboBox->FormattingEnabled = true;
			this->f_grp_name_comboBox->Location = System::Drawing::Point(143, 141);
			this->f_grp_name_comboBox->MaxDropDownItems = 40;
			this->f_grp_name_comboBox->Name = L"f_grp_name_comboBox";
			this->f_grp_name_comboBox->Size = System::Drawing::Size(153, 21);
			this->f_grp_name_comboBox->TabIndex = 14;
			this->f_grp_name_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &f_assign_task_to_group::comboBox1_SelectedIndexChanged);
			// 
			// f_assign_task_to_group
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 362);
			this->Controls->Add(this->f_grp_name_comboBox);
			this->Controls->Add(this->f_grp__task_clr_btn);
			this->Controls->Add(this->f_grp_task_dateTimePicker);
			this->Controls->Add(this->f_grp_amt_txt);
			this->Controls->Add(this->DetailsTass_lbl);
			this->Controls->Add(this->f_grp_task_name_lbl);
			this->Controls->Add(this->f_task_GroupName_lbl);
			this->Controls->Add(this->f_deadline_lbl);
			this->Controls->Add(this->f_grp_taskName_txt);
			this->Controls->Add(this->f_grp_amount_lbl);
			this->Controls->Add(this->f_grp_task_Assign_btn);
			this->Controls->Add(this->f_grp_task_Cancel_btn);
			this->Name = L"f_assign_task_to_group";
			this->Text = L"f_assign_task_to_group";
			this->Load += gcnew System::EventHandler(this, &f_assign_task_to_group::f_assign_task_to_group_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void f_assign_task_to_group_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*add new task_entry in the database.f_group_tasks table which corresponding groups will use for their notification update for their tasks*/
  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	 MySqlCommand ^cmdDataBase = gcnew MySqlCommand("INSERT INTO `database`.`f_group_tasks`(`task_name`,`grpname`,`amount`,`deadline`)VALUES('"+this->f_grp_taskName_txt->Text+"','"+this->f_grp_name_comboBox->Text+"','"+this->f_grp_amt_txt->Text+"','"+this->f_grp_task_dateTimePicker->Text+"');", conDataBase ); 
	 MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
		}
MessageBox::Show("Adding new entry in f_group_tasks table");
conDataBase->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}
/*Update f_group table the column tasks_assigned related to corresponding group increasing by 1*/
			 /*Retrieve the current task_assigned value and save in no_grp_tasks integer variable for further use*/
             String^ constring1 = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase1 = gcnew MySqlConnection( constring1); 
          int no_grp_tasks=0;
	 MySqlCommand ^cmdDataBase1 = gcnew MySqlCommand("select tasks_assigned from `database`.`f_group`where name='"+this->f_grp_name_comboBox->Text+"';", conDataBase1 ); 
	 MySqlDataReader ^myReader1; 
try{
conDataBase1->Open(); 
myReader1 = cmdDataBase1->ExecuteReader(); 
while (myReader1->Read()) {
	no_grp_tasks=myReader1->GetInt32("tasks_assigned");
		}
MessageBox::Show("Currently no. of tasks assigned to this group is "+no_grp_tasks);
no_grp_tasks++;
conDataBase1->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}
            /*Update f_froup table's corresponding column*/
                  String^ constring2 = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase2 = gcnew MySqlConnection( constring2 ); 

	 MySqlCommand ^cmdDataBase2 = gcnew MySqlCommand("update `database`.`f_group` set tasks_assigned='"+no_grp_tasks+"' where name='"+this->f_grp_name_comboBox->Text+"';", conDataBase2 ); 
	 MySqlDataReader ^myReader2; 
try{
conDataBase2->Open(); 
myReader2 = cmdDataBase2->ExecuteReader(); 
while (myReader2->Read()) {
	no_grp_tasks=myReader2->GetInt32("tasks_assigned");
		}
MessageBox::Show("f_group table updated increasing the task_assigned column of the group"+this->f_grp_name_comboBox->Text+" by 1 making it "+no_grp_tasks);
conDataBase2->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}
			/*Retrieve the  id and tasks_given values corresponding to the volunteers of the group */
             int* f_task_assigned=nullptr;//current values of tasks_assigned to the volunteers of this group both grouptasks and individul tasks 
			 int f_vol_count=0;//number of volunteers belonging to the group concerned
			 int* vol_id=nullptr;//id's corresponding to the volunteers
			 String^ constring3=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase3=gcnew MySqlConnection(constring3);
		     MySqlCommand^ cmdDatabase3=gcnew MySqlCommand("Select id,tasks_given from database.f_volunteers where grpname='"+this->f_grp_name_comboBox->Text+"';",conDatabase3);
			 MySqlDataReader^ myReader3;
			 try{
				 
				 conDatabase3->Open();
				 myReader3=cmdDatabase3->ExecuteReader();
				 while(myReader3->Read()){
						f_vol_count++;
				 }
				 myReader3->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 f_task_assigned=new int[f_vol_count];
			 vol_id=new int[f_vol_count];
			 int i=0;
			 try{
				 
				 myReader3=cmdDatabase3->ExecuteReader();
				 while(myReader3->Read()){
					 vol_id[i]=myReader3->GetInt32("id");
					  f_task_assigned[i]=myReader3->GetInt32("tasks_given");
	
					 i++;
				 }
				 myReader3->Close();
				 MessageBox::Show("Retrieved id's,tasks_given values");
				 conDatabase3->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 /*Update the tasks_given values increasing by 1 */
			  bool flag=false;
		for( int j=0;j<i;j++)
			 {
				 f_task_assigned[j]++;
				  flag=false;
				   String^ constring4 = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase4 = gcnew MySqlConnection( constring4 ); 

	 MySqlCommand ^cmdDataBase4 = gcnew MySqlCommand("update `database`.`f_volunteers` set tasks_given='"+f_task_assigned[j]+"' where id='"+vol_id[j]+"';", conDataBase4 ); 
	 MySqlDataReader ^myReader4; 
try{
conDataBase4->Open(); 
myReader4 = cmdDataBase4->ExecuteReader(); 
while (myReader4->Read()) {
	flag=true;
		}

conDataBase4->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}
		
			 }
		if(flag){
			MessageBox::Show("task assigned to the goup successfully");
			this->Close();
		}
		 }
private: System::Void f_grp_task_Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->f_grp_taskName_txt->Text="";
			 this->f_grp_amt_txt->Text="";
			 this->f_grp_name_comboBox->Text="";
			 MessageBox::Show("Canceled assigning task");
		 }
private: System::Void f_grp__task_clr_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->f_grp_taskName_txt->Text="";
			 this->f_grp_amt_txt->Text="";
			 this->f_grp_name_comboBox->Text="";

		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
		 /*f_grp_name_comboBox_fill() function populates the f_grp_name_comboBox to provide user to select the groupname to which task is to be assigned from dropdownlist
		 retrieving from database.f_group table column 'name'*/
 private: System::Void f_grp_name_comboBox_fill()
		  {
			     String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	 MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select name from `database`.`f_group` ;", conDataBase ); 
	 MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader= cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
	this->f_grp_name_comboBox->Items->Add(myReader->GetString("name"));
		}

conDataBase->Close(); 
}catch(Exception^ ex)
{
	MessageBox::Show(ex->Message);
		}

		  }
};
}
