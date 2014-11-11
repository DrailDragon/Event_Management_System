#pragma once
#include"stdAfx.h"
#include"resources.h"
#include"venues_nw.h"
#include"Upload_File.h"
#include"r_tasks_individual.h"
#include"addGroups.h"
#include"r_tasks_individual1.h"
#include"getFiles.h"
#include"r_performance.h"
#include<vector>
#include"Password_Change.h"
#include"update_resource.h"
#include"update_venue.h"
#include"r_search.h"
#include"Manage_calendar.h"
#include"INBOX.h"
#include"Message_Form.h"
#include"Form_Volunteers.h"
#include"Form_Task_Individual_Resource.h"
#include"Form_Group_Resources.h"
namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace MySql::Data::MySqlClient;
	
	/// <summary>
	/// Summary for Form_Resource_Manager
	/// </summary>
	public ref class Form_Resource_Manager : public System::Windows::Forms::Form
	{
	public:
		String^ Username;
		Form_Resource_Manager(String^ username)
		{
			InitializeComponent();
			updateGroupBox();
			this->dataGrid1->Hide();
			this->close->Hide();
			this->dateTimePicker1->Hide();
			this->img_timer->Start();
			calendar();
			Username=username;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Resource_Manager()
		{
			if (components)
			{
				delete components;
			}
		}
		private:static int timer=0;
		String^ venue;
		int*id;//Array of the ids
		int track;//Keeps a track of the current position in the array
		int*img_id;//Keeps a track of the image ids
		int*task_id;//array for task ids
		int task_count;//tot no of tasks for approval
		int task_ptr;//current task in display
		int img_count;
		int check;
		int del_r,del_v,del_g;
		int count1;
		protected: 



























//	std::vector<Int32> id;









	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  count;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::GroupBox^  req1;
	private: System::Windows::Forms::RadioButton^  second;
	private: System::Windows::Forms::RadioButton^  third;
	private: System::Windows::Forms::RadioButton^  first;
	private: System::Windows::Forms::Label^  duration_txt;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  time_txt;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  reject;
	private: System::Windows::Forms::Button^  grant;
	private: System::Windows::Forms::TextBox^  resource_txt;
	private: System::Windows::Forms::Label^  resources1;
	private: System::Windows::Forms::Label^  name_txt;
	private: System::Windows::Forms::Label^  date_txt;
	private: System::Windows::Forms::Label^  date;
	private: System::Windows::Forms::Label^  venue1;
	private: System::Windows::Forms::Label^  name;

	private: System::Windows::Forms::Button^  next;

	private: System::Windows::Forms::Button^  button12;


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolStripMenuItem^  searchToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^  changePasswordToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  knowAboutUsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;

private: System::Windows::Forms::DataGridView^  dataGrid1;
private: System::Windows::Forms::Button^  close;
private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;

private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::DataGridView^  dataGrid2;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
private: System::Windows::Forms::Splitter^  splitter1;
private: System::Windows::Forms::PictureBox^  picBox;








private: System::Windows::Forms::ToolStripMenuItem^  uToolStripMenuItem;
private: System::Windows::Forms::Label^  username_txt;



private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::ToolStripMenuItem^  uploadAFileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  veiwAllUploadsToolStripMenuItem;
private: System::Windows::Forms::Timer^  img_timer;
private: System::Windows::Forms::ToolStripMenuItem^  tasksToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  assignToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toAnIndividualToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toAGroupToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  viewTasksToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  messagesToolStripMenuItem;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  type_txt;

private: System::Windows::Forms::TextBox^  item_txt;
private: System::Windows::Forms::TextBox^  r_txt;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Button^  task_grant;

private: System::Windows::Forms::TextBox^  task_txt;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Button^  task_next;
private: System::Windows::Forms::Button^  task_prev;
private: System::Windows::Forms::Button^  task_delete;



private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  price_txt;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::ComboBox^  del_txt;
private: System::Windows::Forms::Button^  del_btn;
private: System::Windows::Forms::Button^  del_close;
private: System::Windows::Forms::ToolStripMenuItem^  composeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  inboxToolStripMenuItem;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::ToolStripMenuItem^  individualToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  groupToolStripMenuItem;
private: System::ComponentModel::IContainer^  components;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Resource_Manager::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->count = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->req1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGrid1 = (gcnew System::Windows::Forms::DataGridView());
			this->second = (gcnew System::Windows::Forms::RadioButton());
			this->third = (gcnew System::Windows::Forms::RadioButton());
			this->first = (gcnew System::Windows::Forms::RadioButton());
			this->duration_txt = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->time_txt = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->reject = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->grant = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->resource_txt = (gcnew System::Windows::Forms::TextBox());
			this->resources1 = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::Label());
			this->date_txt = (gcnew System::Windows::Forms::Label());
			this->date = (gcnew System::Windows::Forms::Label());
			this->venue1 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->next = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changePasswordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->knowAboutUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->uToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadAFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->veiwAllUploadsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tasksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->assignToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toAnIndividualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toAGroupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewTasksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->individualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->messagesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->composeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inboxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->dataGrid2 = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->picBox = (gcnew System::Windows::Forms::PictureBox());
			this->username_txt = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->img_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->price_txt = (gcnew System::Windows::Forms::TextBox());
			this->task_delete = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->type_txt = (gcnew System::Windows::Forms::TextBox());
			this->item_txt = (gcnew System::Windows::Forms::TextBox());
			this->r_txt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->task_grant = (gcnew System::Windows::Forms::Button());
			this->task_txt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->task_next = (gcnew System::Windows::Forms::Button());
			this->task_prev = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->del_txt = (gcnew System::Windows::Forms::ComboBox());
			this->del_btn = (gcnew System::Windows::Forms::Button());
			this->del_close = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->req1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Indigo;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Location = System::Drawing::Point(931, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 53);
			this->button3->TabIndex = 7;
			this->button3->Text = L"view resource list";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button3_Click);
			// 
			// count
			// 
			this->count->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->count->AutoSize = true;
			this->count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->count->ForeColor = System::Drawing::Color::Blue;
			this->count->Location = System::Drawing::Point(795, 221);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(53, 16);
			this->count->TabIndex = 22;
			this->count->Text = L"number";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(763, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"pending requests";
			// 
			// req1
			// 
			this->req1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->req1->AutoSize = true;
			this->req1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->req1->Controls->Add(this->dataGrid1);
			this->req1->Controls->Add(this->second);
			this->req1->Controls->Add(this->third);
			this->req1->Controls->Add(this->first);
			this->req1->Controls->Add(this->duration_txt);
			this->req1->Controls->Add(this->label4);
			this->req1->Controls->Add(this->time_txt);
			this->req1->Controls->Add(this->label3);
			this->req1->Controls->Add(this->reject);
			this->req1->Controls->Add(this->dateTimePicker1);
			this->req1->Controls->Add(this->grant);
			this->req1->Controls->Add(this->close);
			this->req1->Controls->Add(this->resource_txt);
			this->req1->Controls->Add(this->resources1);
			this->req1->Controls->Add(this->name_txt);
			this->req1->Controls->Add(this->date_txt);
			this->req1->Controls->Add(this->date);
			this->req1->Controls->Add(this->venue1);
			this->req1->Controls->Add(this->name);
			this->req1->Location = System::Drawing::Point(357, 282);
			this->req1->Name = L"req1";
			this->req1->Size = System::Drawing::Size(545, 394);
			this->req1->TabIndex = 16;
			this->req1->TabStop = false;
			this->req1->Text = L"Request";
			this->req1->Enter += gcnew System::EventHandler(this, &Form_Resource_Manager::req1_Enter);
			// 
			// dataGrid1
			// 
			this->dataGrid1->AllowUserToOrderColumns = true;
			this->dataGrid1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGrid1->BackgroundColor = System::Drawing::Color::White;
			this->dataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGrid1->Location = System::Drawing::Point(245, 66);
			this->dataGrid1->Name = L"dataGrid1";
			this->dataGrid1->Size = System::Drawing::Size(294, 171);
			this->dataGrid1->TabIndex = 28;
			this->dataGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_Resource_Manager::dataGridView1_CellContentClick);
			// 
			// second
			// 
			this->second->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->second->AutoSize = true;
			this->second->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->second->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->second->Location = System::Drawing::Point(89, 156);
			this->second->Name = L"second";
			this->second->Size = System::Drawing::Size(140, 22);
			this->second->TabIndex = 33;
			this->second->TabStop = true;
			this->second->Text = L"second preference";
			this->second->UseVisualStyleBackColor = true;
			this->second->CheckedChanged += gcnew System::EventHandler(this, &Form_Resource_Manager::second_CheckedChanged);
			// 
			// third
			// 
			this->third->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->third->AutoSize = true;
			this->third->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->third->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->third->Location = System::Drawing::Point(89, 182);
			this->third->Name = L"third";
			this->third->Size = System::Drawing::Size(128, 22);
			this->third->TabIndex = 32;
			this->third->TabStop = true;
			this->third->Text = L"third preference";
			this->third->UseVisualStyleBackColor = true;
			this->third->CheckedChanged += gcnew System::EventHandler(this, &Form_Resource_Manager::third_CheckedChanged);
			// 
			// first
			// 
			this->first->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->first->AutoSize = true;
			this->first->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->first->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->first->Location = System::Drawing::Point(89, 130);
			this->first->Name = L"first";
			this->first->Size = System::Drawing::Size(126, 22);
			this->first->TabIndex = 31;
			this->first->TabStop = true;
			this->first->Text = L"first preference";
			this->first->UseVisualStyleBackColor = true;
			this->first->CheckedChanged += gcnew System::EventHandler(this, &Form_Resource_Manager::radioButton1_CheckedChanged);
			// 
			// duration_txt
			// 
			this->duration_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->duration_txt->AutoSize = true;
			this->duration_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->duration_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->duration_txt->Location = System::Drawing::Point(103, 44);
			this->duration_txt->Name = L"duration_txt";
			this->duration_txt->Size = System::Drawing::Size(37, 18);
			this->duration_txt->TabIndex = 30;
			this->duration_txt->Text = L"Time";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(36, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 18);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Duration:";
			// 
			// time_txt
			// 
			this->time_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->time_txt->AutoSize = true;
			this->time_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->time_txt->Location = System::Drawing::Point(103, 16);
			this->time_txt->Name = L"time_txt";
			this->time_txt->Size = System::Drawing::Size(36, 18);
			this->time_txt->TabIndex = 28;
			this->time_txt->Text = L"Date";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(36, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Time:";
			// 
			// reject
			// 
			this->reject->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reject->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->reject->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->reject->ForeColor = System::Drawing::Color::White;
			this->reject->Location = System::Drawing::Point(38, 335);
			this->reject->Name = L"reject";
			this->reject->Size = System::Drawing::Size(80, 33);
			this->reject->TabIndex = 17;
			this->reject->Text = L"Reject";
			this->reject->UseVisualStyleBackColor = false;
			this->reject->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::reject1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(245, 40);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(239, 20);
			this->dateTimePicker1->TabIndex = 30;
			this->dateTimePicker1->Value = System::DateTime(2014, 3, 4, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form_Resource_Manager::dateTimePicker1_ValueChanged);
			// 
			// grant
			// 
			this->grant->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->grant->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->grant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->grant->ForeColor = System::Drawing::Color::White;
			this->grant->Location = System::Drawing::Point(371, 334);
			this->grant->Name = L"grant";
			this->grant->Size = System::Drawing::Size(162, 33);
			this->grant->TabIndex = 18;
			this->grant->Text = L"Grant permission";
			this->grant->UseVisualStyleBackColor = false;
			this->grant->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::grant1_Click);
			// 
			// close
			// 
			this->close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->close->BackColor = System::Drawing::Color::White;
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->close->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->close->Location = System::Drawing::Point(496, 40);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(49, 20);
			this->close->TabIndex = 29;
			this->close->Text = L"close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button7_Click);
			// 
			// resource_txt
			// 
			this->resource_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->resource_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->resource_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resource_txt->Location = System::Drawing::Point(110, 242);
			this->resource_txt->Multiline = true;
			this->resource_txt->Name = L"resource_txt";
			this->resource_txt->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->resource_txt->Size = System::Drawing::Size(423, 78);
			this->resource_txt->TabIndex = 26;
			// 
			// resources1
			// 
			this->resources1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->resources1->AutoSize = true;
			this->resources1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->resources1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resources1->Location = System::Drawing::Point(20, 265);
			this->resources1->Name = L"resources1";
			this->resources1->Size = System::Drawing::Size(73, 18);
			this->resources1->TabIndex = 25;
			this->resources1->Text = L"Resources:";
			// 
			// name_txt
			// 
			this->name_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->name_txt->AutoSize = true;
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name_txt->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->name_txt->Location = System::Drawing::Point(86, 95);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(78, 18);
			this->name_txt->TabIndex = 22;
			this->name_txt->Text = L"Event Name";
			// 
			// date_txt
			// 
			this->date_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->date_txt->AutoSize = true;
			this->date_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->date_txt->ForeColor = System::Drawing::Color::Purple;
			this->date_txt->Location = System::Drawing::Point(420, 16);
			this->date_txt->Name = L"date_txt";
			this->date_txt->Size = System::Drawing::Size(37, 16);
			this->date_txt->TabIndex = 21;
			this->date_txt->Text = L"Date";
			// 
			// date
			// 
			this->date->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->date->AutoSize = true;
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->date->ForeColor = System::Drawing::Color::Purple;
			this->date->Location = System::Drawing::Point(374, 16);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(40, 16);
			this->date->TabIndex = 20;
			this->date->Text = L"Date:";
			// 
			// venue1
			// 
			this->venue1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->venue1->AutoSize = true;
			this->venue1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->venue1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->venue1->Location = System::Drawing::Point(38, 132);
			this->venue1->Name = L"venue1";
			this->venue1->Size = System::Drawing::Size(48, 18);
			this->venue1->TabIndex = 19;
			this->venue1->Text = L"Venue:";
			this->venue1->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::v1_Click);
			// 
			// name
			// 
			this->name->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->name->Location = System::Drawing::Point(35, 95);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(41, 18);
			this->name->TabIndex = 18;
			this->name->Text = L"Name";
			// 
			// next
			// 
			this->next->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->next->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->next->ForeColor = System::Drawing::Color::White;
			this->next->Location = System::Drawing::Point(808, 686);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(94, 33);
			this->next->TabIndex = 19;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::next_Click);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(357, 692);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(128, 33);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Previous";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button12_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Indigo;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(931, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 44);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Add resources";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Indigo;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Location = System::Drawing::Point(931, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 44);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Add venue";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button2_Click);
			// 
			// searchToolStripMenuItem
			// 
			this->searchToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
			this->searchToolStripMenuItem->Size = System::Drawing::Size(73, 27);
			this->searchToolStripMenuItem->Text = L"Search";
			this->searchToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::searchToolStripMenuItem_Click);
			// 
			// changePasswordToolStripMenuItem
			// 
			this->changePasswordToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changePasswordToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->changePasswordToolStripMenuItem->Name = L"changePasswordToolStripMenuItem";
			this->changePasswordToolStripMenuItem->Size = System::Drawing::Size(143, 27);
			this->changePasswordToolStripMenuItem->Text = L"Change Password";
			this->changePasswordToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::changePasswordToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->knowAboutUsToolStripMenuItem});
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(56, 27);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::helpToolStripMenuItem_Click);
			// 
			// knowAboutUsToolStripMenuItem
			// 
			this->knowAboutUsToolStripMenuItem->Name = L"knowAboutUsToolStripMenuItem";
			this->knowAboutUsToolStripMenuItem->Size = System::Drawing::Size(183, 28);
			this->knowAboutUsToolStripMenuItem->Text = L"Know about us";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->toolStripMenuItem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(85, 27);
			this->toolStripMenuItem1->Text = L"Contacts";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::toolStripMenuItem1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::AliceBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->searchToolStripMenuItem, 
				this->changePasswordToolStripMenuItem, this->uToolStripMenuItem, this->toolStripMenuItem1, this->tasksToolStripMenuItem, this->messagesToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1123, 31);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// uToolStripMenuItem
			// 
			this->uToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->uploadAFileToolStripMenuItem, 
				this->veiwAllUploadsToolStripMenuItem});
			this->uToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->uToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->uToolStripMenuItem->Name = L"uToolStripMenuItem";
			this->uToolStripMenuItem->Size = System::Drawing::Size(108, 27);
			this->uToolStripMenuItem->Text = L"Upload files";
			this->uToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::uToolStripMenuItem_Click);
			// 
			// uploadAFileToolStripMenuItem
			// 
			this->uploadAFileToolStripMenuItem->Name = L"uploadAFileToolStripMenuItem";
			this->uploadAFileToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->uploadAFileToolStripMenuItem->Text = L"Upload a file";
			this->uploadAFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::uploadAFileToolStripMenuItem_Click);
			// 
			// veiwAllUploadsToolStripMenuItem
			// 
			this->veiwAllUploadsToolStripMenuItem->Name = L"veiwAllUploadsToolStripMenuItem";
			this->veiwAllUploadsToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->veiwAllUploadsToolStripMenuItem->Text = L"veiw all uploads";
			this->veiwAllUploadsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::veiwAllUploadsToolStripMenuItem_Click);
			// 
			// tasksToolStripMenuItem
			// 
			this->tasksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->assignToolStripMenuItem, 
				this->viewTasksToolStripMenuItem});
			this->tasksToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tasksToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tasksToolStripMenuItem->Name = L"tasksToolStripMenuItem";
			this->tasksToolStripMenuItem->Size = System::Drawing::Size(64, 27);
			this->tasksToolStripMenuItem->Text = L"Tasks";
			this->tasksToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::tasksToolStripMenuItem_Click);
			// 
			// assignToolStripMenuItem
			// 
			this->assignToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toAnIndividualToolStripMenuItem, 
				this->toAGroupToolStripMenuItem});
			this->assignToolStripMenuItem->Name = L"assignToolStripMenuItem";
			this->assignToolStripMenuItem->Size = System::Drawing::Size(155, 28);
			this->assignToolStripMenuItem->Text = L"Assign";
			// 
			// toAnIndividualToolStripMenuItem
			// 
			this->toAnIndividualToolStripMenuItem->Name = L"toAnIndividualToolStripMenuItem";
			this->toAnIndividualToolStripMenuItem->Size = System::Drawing::Size(191, 28);
			this->toAnIndividualToolStripMenuItem->Text = L"to an individual";
			this->toAnIndividualToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::toAnIndividualToolStripMenuItem_Click);
			// 
			// toAGroupToolStripMenuItem
			// 
			this->toAGroupToolStripMenuItem->Name = L"toAGroupToolStripMenuItem";
			this->toAGroupToolStripMenuItem->Size = System::Drawing::Size(191, 28);
			this->toAGroupToolStripMenuItem->Text = L"to a group";
			this->toAGroupToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::toAGroupToolStripMenuItem_Click);
			// 
			// viewTasksToolStripMenuItem
			// 
			this->viewTasksToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->individualToolStripMenuItem, 
				this->groupToolStripMenuItem});
			this->viewTasksToolStripMenuItem->Name = L"viewTasksToolStripMenuItem";
			this->viewTasksToolStripMenuItem->Size = System::Drawing::Size(155, 28);
			this->viewTasksToolStripMenuItem->Text = L"view tasks";
			this->viewTasksToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::viewTasksToolStripMenuItem_Click);
			// 
			// individualToolStripMenuItem
			// 
			this->individualToolStripMenuItem->Name = L"individualToolStripMenuItem";
			this->individualToolStripMenuItem->Size = System::Drawing::Size(154, 28);
			this->individualToolStripMenuItem->Text = L"Individual";
			this->individualToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::individualToolStripMenuItem_Click);
			// 
			// groupToolStripMenuItem
			// 
			this->groupToolStripMenuItem->Name = L"groupToolStripMenuItem";
			this->groupToolStripMenuItem->Size = System::Drawing::Size(154, 28);
			this->groupToolStripMenuItem->Text = L"Group";
			this->groupToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::groupToolStripMenuItem_Click);
			// 
			// messagesToolStripMenuItem
			// 
			this->messagesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->composeToolStripMenuItem, 
				this->inboxToolStripMenuItem});
			this->messagesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->messagesToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->messagesToolStripMenuItem->Name = L"messagesToolStripMenuItem";
			this->messagesToolStripMenuItem->Size = System::Drawing::Size(90, 27);
			this->messagesToolStripMenuItem->Text = L"Messages";
			// 
			// composeToolStripMenuItem
			// 
			this->composeToolStripMenuItem->Name = L"composeToolStripMenuItem";
			this->composeToolStripMenuItem->Size = System::Drawing::Size(141, 28);
			this->composeToolStripMenuItem->Text = L"Compose";
			this->composeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::composeToolStripMenuItem_Click);
			// 
			// inboxToolStripMenuItem
			// 
			this->inboxToolStripMenuItem->Name = L"inboxToolStripMenuItem";
			this->inboxToolStripMenuItem->Size = System::Drawing::Size(141, 28);
			this->inboxToolStripMenuItem->Text = L"Inbox";
			this->inboxToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::inboxToolStripMenuItem_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::Indigo;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Location = System::Drawing::Point(931, 354);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 44);
			this->button4->TabIndex = 25;
			this->button4->Text = L"venue schedule";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::Indigo;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Location = System::Drawing::Point(931, 395);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 44);
			this->button5->TabIndex = 26;
			this->button5->Text = L"update resources";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button5_Click_1);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(548, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 28);
			this->label2->TabIndex = 31;
			this->label2->Text = L"REQUESTS";
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::Indigo;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button7->Location = System::Drawing::Point(931, 484);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(165, 44);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Volunteers";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Indigo;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button8->Location = System::Drawing::Point(931, 434);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(165, 52);
			this->button8->TabIndex = 33;
			this->button8->Text = L"update venue";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::Indigo;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button9->Location = System::Drawing::Point(931, 526);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 44);
			this->button9->TabIndex = 34;
			this->button9->Text = L"Add group";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button9_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::Indigo;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button11->Location = System::Drawing::Point(931, 565);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(165, 44);
			this->button11->TabIndex = 36;
			this->button11->Text = L"view groups";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button11_Click);
			// 
			// dataGrid2
			// 
			this->dataGrid2->AllowUserToOrderColumns = true;
			this->dataGrid2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGrid2->BackgroundColor = System::Drawing::Color::White;
			this->dataGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid2->Location = System::Drawing::Point(903, 57);
			this->dataGrid2->Name = L"dataGrid2";
			this->dataGrid2->Size = System::Drawing::Size(208, 135);
			this->dataGrid2->TabIndex = 37;
			this->dataGrid2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_Resource_Manager::dataGrid2_CellContentClick);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(903, 31);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(208, 20);
			this->dateTimePicker2->TabIndex = 38;
			this->dateTimePicker2->Value = System::DateTime(2014, 3, 4, 12, 47, 48, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &Form_Resource_Manager::dateTimePicker2_ValueChanged);
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->splitter1->Location = System::Drawing::Point(0, 31);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(269, 710);
			this->splitter1->TabIndex = 39;
			this->splitter1->TabStop = false;
			this->splitter1->SplitterMoved += gcnew System::Windows::Forms::SplitterEventHandler(this, &Form_Resource_Manager::splitter1_SplitterMoved);
			// 
			// picBox
			// 
			this->picBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->picBox->Location = System::Drawing::Point(267, 31);
			this->picBox->Name = L"picBox";
			this->picBox->Size = System::Drawing::Size(635, 161);
			this->picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBox->TabIndex = 40;
			this->picBox->TabStop = false;
			this->picBox->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::picBox_Click);
			// 
			// username_txt
			// 
			this->username_txt->AutoSize = true;
			this->username_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->username_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_txt->ForeColor = System::Drawing::Color::White;
			this->username_txt->Location = System::Drawing::Point(156, 41);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(88, 20);
			this->username_txt->TabIndex = 45;
			this->username_txt->Text = L"username";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(33, 96);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(173, 47);
			this->button6->TabIndex = 48;
			this->button6->Text = L"Track Performance";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button6_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// img_timer
			// 
			this->img_timer->Interval = 5000;
			this->img_timer->Tick += gcnew System::EventHandler(this, &Form_Resource_Manager::img_timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(72, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 20);
			this->label1->TabIndex = 49;
			this->label1->Text = L"TASKS";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->price_txt);
			this->groupBox1->Controls->Add(this->task_delete);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->type_txt);
			this->groupBox1->Controls->Add(this->item_txt);
			this->groupBox1->Controls->Add(this->r_txt);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->task_grant);
			this->groupBox1->Controls->Add(this->task_txt);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(12, 190);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 447);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"tasks";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 319);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 15);
			this->label10->TabIndex = 55;
			this->label10->Text = L"Price per item:";
			// 
			// price_txt
			// 
			this->price_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->price_txt->Location = System::Drawing::Point(89, 311);
			this->price_txt->Name = L"price_txt";
			this->price_txt->Size = System::Drawing::Size(148, 23);
			this->price_txt->TabIndex = 54;
			// 
			// task_delete
			// 
			this->task_delete->Location = System::Drawing::Point(9, 405);
			this->task_delete->Name = L"task_delete";
			this->task_delete->Size = System::Drawing::Size(75, 23);
			this->task_delete->TabIndex = 53;
			this->task_delete->Text = L"Delete";
			this->task_delete->UseVisualStyleBackColor = true;
			this->task_delete->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::task_delete_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 15);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Type:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 251);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"No. of Items:";
			// 
			// type_txt
			// 
			this->type_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->type_txt->Location = System::Drawing::Point(89, 84);
			this->type_txt->Name = L"type_txt";
			this->type_txt->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->type_txt->Size = System::Drawing::Size(148, 23);
			this->type_txt->TabIndex = 6;
			// 
			// item_txt
			// 
			this->item_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->item_txt->Location = System::Drawing::Point(89, 243);
			this->item_txt->Name = L"item_txt";
			this->item_txt->Size = System::Drawing::Size(148, 23);
			this->item_txt->TabIndex = 5;
			// 
			// r_txt
			// 
			this->r_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r_txt->Location = System::Drawing::Point(89, 170);
			this->r_txt->Name = L"r_txt";
			this->r_txt->Size = System::Drawing::Size(148, 23);
			this->r_txt->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 15);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Resource Name:";
			// 
			// task_grant
			// 
			this->task_grant->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->task_grant->Location = System::Drawing::Point(148, 405);
			this->task_grant->Name = L"task_grant";
			this->task_grant->Size = System::Drawing::Size(75, 23);
			this->task_grant->TabIndex = 2;
			this->task_grant->Text = L"Grant";
			this->task_grant->UseVisualStyleBackColor = true;
			this->task_grant->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::task_grant_Click);
			// 
			// task_txt
			// 
			this->task_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->task_txt->Location = System::Drawing::Point(89, 23);
			this->task_txt->Name = L"task_txt";
			this->task_txt->Size = System::Drawing::Size(148, 23);
			this->task_txt->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Task Name:";
			// 
			// task_next
			// 
			this->task_next->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->task_next->Location = System::Drawing::Point(180, 664);
			this->task_next->Name = L"task_next";
			this->task_next->Size = System::Drawing::Size(75, 23);
			this->task_next->TabIndex = 51;
			this->task_next->Text = L"Next";
			this->task_next->UseVisualStyleBackColor = true;
			this->task_next->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::task_next_Click);
			// 
			// task_prev
			// 
			this->task_prev->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->task_prev->Location = System::Drawing::Point(12, 664);
			this->task_prev->Name = L"task_prev";
			this->task_prev->Size = System::Drawing::Size(75, 23);
			this->task_prev->TabIndex = 52;
			this->task_prev->Text = L"Previous";
			this->task_prev->UseVisualStyleBackColor = true;
			this->task_prev->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::task_prev_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::Color::Indigo;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button10->Location = System::Drawing::Point(931, 686);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(165, 44);
			this->button10->TabIndex = 53;
			this->button10->Text = L"Delete Groups";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button10_Click);
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::Indigo;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button13->Location = System::Drawing::Point(931, 646);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(165, 44);
			this->button13->TabIndex = 54;
			this->button13->Text = L"Delete Venue";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::Indigo;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button14->Location = System::Drawing::Point(931, 605);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(165, 44);
			this->button14->TabIndex = 55;
			this->button14->Text = L"Delete resources";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button14_Click);
			// 
			// del_txt
			// 
			this->del_txt->FormattingEnabled = true;
			this->del_txt->Location = System::Drawing::Point(664, 638);
			this->del_txt->Name = L"del_txt";
			this->del_txt->Size = System::Drawing::Size(211, 21);
			this->del_txt->TabIndex = 56;
			// 
			// del_btn
			// 
			this->del_btn->Location = System::Drawing::Point(808, 674);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(75, 23);
			this->del_btn->TabIndex = 57;
			this->del_btn->Text = L"Delete";
			this->del_btn->UseVisualStyleBackColor = true;
			this->del_btn->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::del_btn_Click);
			// 
			// del_close
			// 
			this->del_close->Location = System::Drawing::Point(664, 676);
			this->del_close->Name = L"del_close";
			this->del_close->Size = System::Drawing::Size(75, 23);
			this->del_close->TabIndex = 58;
			this->del_close->Text = L"Close";
			this->del_close->UseVisualStyleBackColor = true;
			this->del_close->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::del_close_Click);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button15->Location = System::Drawing::Point(903, 198);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(208, 23);
			this->button15->TabIndex = 59;
			this->button15->Text = L"Manage Calendar";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form_Resource_Manager::button15_Click);
			// 
			// Form_Resource_Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1123, 741);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->del_close);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->del_txt);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->task_prev);
			this->Controls->Add(this->task_next);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->picBox);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dataGrid2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->next);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->req1);
			this->Controls->Add(this->count);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->ForeColor = System::Drawing::Color::Purple;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form_Resource_Manager";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form_Resource_Manager::Form_Resource_Manager_Load);
			this->req1->ResumeLayout(false);
			this->req1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGrid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Form_Resource_Manager_Load(System::Object^  sender, System::EventArgs^  e) {
				 getImageId();
				 UpdateTask();
				 del_r=0;
				 del_v=0;
				 del_g=0;
				 this->del_txt->Hide();
				 this->del_btn->Hide();
				 this->del_close->Hide();
				 //this->picBox->Image=Image::FromStream(memPic);
				 this->username_txt->Text=this->Username;
				 calendar();
			 }
	
	
private: System::Void searchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			r_search^ r=gcnew r_search();
			r->ShowDialog();
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void viewProfileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			venues_nw^ v2=gcnew venues_nw();
			v2->ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 resources^ r2=gcnew resources;
			 r2->ShowDialog();
		 }

//update the group box with the values from the database
private: void updateGroupBox(void){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from project.request where status='no';",conDataBase);
			 MySqlDataReader^ myReader;
			 track=0;
			 try{
				 count1=0;
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read()){
					 count1++;
				 }
				 myReader->Close();
				 if(count1>0){
						 id=new int[count1];
						 this->count->Text=count1.ToString();
						 myReader=cmdDataBase->ExecuteReader();
						 int indx=0;
						 while(myReader->Read()){
								
								 int k=myReader->GetInt16("id");
								 id[indx++]=k;
							 }
						 fillData(0);
						 track++;
				 }
				 
				 conDataBase->Close();
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
//Fill the data in the labels and textboxes of the groupbox
private: void fillData(int indx){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 int i=id[indx];
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.request where id='"+i+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 this->date_txt->Text=myReader->GetString("date");
					 this->time_txt->Text=myReader->GetString("time");
					 this->name_txt->Text=myReader->GetString("name");
					 this->first->Text=myReader->GetString("venue1");
					 this->second->Text=myReader->GetString("venue2");
					 this->third->Text=myReader->GetString("venue3");
					 this->resource_txt->Text=myReader->GetString("resources");
					 this->duration_txt->Text=myReader->GetInt32("duration").ToString();
					 //conDatabase->Close();
				 }

			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void v1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void reject1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(count1>0){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 int i=id[track];
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("delete from project.request where id='"+i+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 
				 };
				 updateGroupBox();
				 
					// MessageBox::Show("Request successfully deleted");
				 
				 conDatabase->Close();
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
		 }
private: String^ getDate(String^ s){
			String^ d;
			String^ delim=" ";//The delimiter/separator here is ,( and ) only
			 array<Char>^ delimiter=delim->ToCharArray();//The input to the split function must be a character array
			 array<String^>^ dates;
			 dates=s->Split(delimiter);
			 d=dates[0];
			 return d;
		 }
private: System::Void grant1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(count1>0){
			 String^ line=this->resource_txt->Text;//Contains the string of resources
			 int c=0;
			 for(int i=0;i<line->Length;i++){
				if(line[i]==',')// counting the number of commas to determine the size of the array "words"
					c++;
			 }
			 int cost=0;
			 String^ delim=",()";//The delimiter/separator here is ,( and ) only
			 array<Char>^ delimiter=delim->ToCharArray();//The input to the split function must be a character array
			 array<String^>^ words;//The substrings separated by commas as extracted into an array of pointers to strings and words serve as that array
			 words=line->Split(delimiter);//Using the Split fuction in the extraction of the substrings for resources
			 for(int i=0;i<c;){
				 String^ resource=words[i];//Always the resources are at the even position
				 i++;
				 String^ piece=words[i];//The no of pieces is at the odd positions
				 int noOfPieces=Int32::Parse(piece);//to convert the no of pieces from string to int
				 i++;
//--------------- Get the total price of the  items after the permission is granted to be forwarded to the finance manager--------------------
				 //
				 //Connecting to the database
				 //
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.items where name='"+resource+"';",conDatabase);
//				 int cst;
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						int cst=myReader->GetInt32("price");
						cost=cost+cst*noOfPieces;
					//his->cst_txt->Text=cst.ToString();
						
					 }
					 myReader->Close();
					 //ssageBox::Show(cst.ToString());
					 
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
//-----------------Enter the data into the database for further permission----------------------------------------------------------------------
			 
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 String^ Dt=getDate(this->date_txt->Text);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Insert into project.financerequests (name,time,venue,resources,cost,duration,status) values ('"+this->name_txt->Text+"','"+this->time_txt->Text+"','"+venue+"','"+this->resource_txt->Text+"','"+cost+"','"+this->duration_txt->Text+"','no');",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						MessageBox::Show("Permission granted");
					 }
					 myReader->Close();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 //myReader->Close();
				 int num=id[--track];
				 MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("update project.request set status='yes' where id='"+num+"';",conDatabase);
				 try{
					 int cnt=0;
					 myReader=cmdDatabase2->ExecuteReader();
					 do{
						 cnt=cnt+1;
						 MessageBox::Show("Done!!!");
						 updateGroupBox();//After granting permission update the page
					 }while(myReader->Read());
					 myReader->Close();
				 }
				 
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
			 }
		 }
		 //
		 //Store the ids of the images from the database in the array for future reference in the slide show
		 //
private: Void getImageId(){
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 img_count=0;
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						img_count++;
					 }
					 myReader->Close();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 img_id=new int[img_count];
				 try{
					 //conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 int i=0;
					 while(myReader->Read()){
						img_id[i]=myReader->GetInt32("id");
						i++;
					 }
					 myReader->Close();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void next_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(count1>0){
				 if(track<(count1-1)){
				  track++;
			 fillData(track);
				 }
			 }
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				venue=this->first->Text;
		 }
private: System::Void button12_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(count1>0){
			 if(track>0)
			 {
				 	 track--;
				 fillData(track);
			
			 }
			 else{
				MessageBox::Show("No Previous request!!! Try Next....");
			 }
			 }
		 }
private: System::Void second_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 venue=this->second->Text;
		 }
private: System::Void third_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 venue=this->third->Text;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->dataGrid1->Hide();
			 this->close->Hide();
			 this->dateTimePicker1->Hide();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->dataGrid1->Show();
			 this->close->Show();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select name,tot_no_of_pieces,pieces_available,price from project.items;",conDatabase);
			// MySqlDataReader^ myReader;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid1->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->dataGrid1->Show();
			 this->close->Show();
			 this->dateTimePicker1->Show();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.venue where date='"+this->dateTimePicker1->Text+"';",conDatabase);
			// MySqlDataReader^ myReader;
			 //this->trial->Text=this->dateTimePicker1->Text;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid1->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
		//
		 //when value of the date time picker is changed the change should get reflected in the data grid 
		 //
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->dataGrid1->Show();
			 this->close->Show();
			 this->dateTimePicker1->Show();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.venue where date='"+this->dateTimePicker1->Text+"';",conDatabase);
			// MySqlDataReader^ myReader;
			// this->trial->Text=this->dateTimePicker1->Text;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid1->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }

private:Void calendar(void){
		//	MessageBox::Show("Hii");
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select time,event from project.calendar where date='"+this->dateTimePicker2->Text+"';",conDatabase);
			 //MySqlDataReader^ myReader;
			 //this->trial->Text=this->dateTimePicker1->Text;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid2->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
			// MessageBox::Show("bye");
		}
private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 calendar();
		 }
private: System::Void dataGrid2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void splitter1_SplitterMoved(System::Object^  sender, System::Windows::Forms::SplitterEventArgs^  e) {
		 }
		//
		 //function to add files to the database 
		 //
private: System::Void uToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void uploadAFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  Upload_File^ up=gcnew Upload_File(Username);
			  up->ShowDialog();
		 }
		 //
		 //This function revives the data from a database and finally stores it in a memoryStream 
		 //
 private: void getImageDatabase(int i){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.files where id='"+i+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 //check++;
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 if(myReader->Read()){
						//memPic=gcnew MemoryStream(myReader->GetBytes("fileContent"));
						int size=myReader->GetInt32("fileSize");
						array<Byte> ^Buffer=gcnew array<Byte>(size);
						myReader->GetBytes(4,0,Buffer,0,size);
						//MessageBox::Show(Buffer[5].ToString());
						MemoryStream ^memPic=gcnew MemoryStream(Buffer);
						this->picBox->Image=Image::FromStream(memPic);
						memPic->Close();
					    }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			// MessageBox::Show(this->check.ToString());
}
private: System::Void picBox_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 r_performance^ r =gcnew r_performance(Username);
			 r->ShowDialog();

		 }
private: System::Void img_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
				int i=img_id[timer];
				getImageDatabase(i);
				timer=(timer+1)%img_count;
			 
		 }
private: System::Void req1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toAnIndividualToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 r_tasks_individual^ ti=gcnew r_tasks_individual();
			 ti->ShowDialog();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show(Username);
			 addGroups^ grp=gcnew addGroups(Username);
			 grp->ShowDialog();
		 }
private: System::Void tasksToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toAGroupToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 r_tasks_individual1^ f=gcnew r_tasks_individual1();
			 f->ShowDialog();
		 }
private: System::Void veiwAllUploadsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 getFiles^ f=gcnew getFiles();
			 f->ShowDialog();
		 }

private: System::Void changePasswordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Password_Change^ p=gcnew Password_Change();
			 p->ShowDialog();
		 }


//--------------------------------------------------Tasks Approval--------------------------------------------------------------------------

private: void getTaskId(){
			 task_ptr=0;
			 task_count=0;
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Select * from project.task_approval where status='no';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 //check++;
				 conDatabase->Open();
				 myReader=cmdDatabase1->ExecuteReader();
				 while(myReader->Read()){
						task_count++;
				 }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 task_id=new int[task_count];
			 if(task_count>0){
			 try{
				 int i=0;
				 myReader=cmdDatabase1->ExecuteReader();
				 while(myReader->Read()){
					 task_id[i]=myReader->GetInt32("id");
					 i++;
				 }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 }
		 }
private: void fillApproval(int i){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.task_approval where id='"+i+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 this->task_txt->Text=myReader->GetString("task_name");
					 this->r_txt->Text=myReader->GetString("name");
					 this->item_txt->Text=myReader->GetInt32("no_of_pieces").ToString();
					 this->price_txt->Text=myReader->GetInt32("price").ToString();
					 this->type_txt->Text=myReader->GetString("type");
				 }
				 myReader->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		}
private: void UpdateTask(void){
			getTaskId();
			fillApproval(task_id[0]);
		 }
private: System::Void task_next_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(task_count>0){
			 if(task_ptr<task_count-1){
				 task_ptr++;
				fillApproval(task_id[task_ptr]);
			 }
			 else{
				MessageBox::Show("NO more requests");
			 }
			 }
		 }
private: System::Void task_prev_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(task_count>0){
			 if(task_ptr>0){
				task_ptr--;
				fillApproval(task_id[task_ptr]);
			 }
			 else{
				MessageBox::Show("No Previous Requests!!!");
			 }
			 }
		 }
private: System::Void task_grant_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(task_count>0){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Update project.task_approval set status='yes' where id='"+task_id[task_ptr]+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 int count=0;
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 count++;
				 }
				 if(count>0)
					 MessageBox::Show("Approved!!!");
				 myReader->Close();
			}
				catch(Exception^ ex){
					MessageBox::Show(ex->Message);
			 }
			int match,c;
			int num;
			String^ str=this->r_txt->Text;
			MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Select * from project.items where name='"+str+"';",conDatabase);
			try{
				c=0;
				myReader=cmdDatabase1->ExecuteReader();
				if(myReader->Read()){
					MessageBox::Show("I am here1");
					c++;
				}
				myReader->Close();
			}
			catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			}
			myReader->Close();
			match =0;
			if(c>0){
				
				//MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Select * from project.items where name='"+str+"';",conDatabase);
				try{
					myReader=cmdDatabase1->ExecuteReader();
					while(myReader->Read()){
						int i= Convert::ToInt32(this->price_txt->Text);
						int s=myReader->GetInt32("price");
						MessageBox::Show(i.ToString());
						MessageBox::Show(s.ToString());
						if(i==s){
							MessageBox::Show("I am here2");
							match++;
							num=myReader->GetInt32("tot_no_of_pieces");
						}
						else{
							MessageBox::Show("I am here3");
							match=0;
						}
					}
					myReader->Close();
				}
				catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				}
			}
			
			int cost=Convert::ToInt32(this->price_txt->Text);
			int p=Convert::ToInt32(this->item_txt->Text);
			MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Insert into project.items (name,tot_no_of_pieces,pieces_available,price) values ('"+this->r_txt->Text+"','"+p+"','"+p+"','"+this->price_txt->Text+"');",conDatabase);
			int pm=num+p;
			MySqlCommand^ cmdDatabase3=gcnew MySqlCommand("Update project.items set tot_no_of_pieces='"+pm+"' where name='"+this->r_txt->Text+"';",conDatabase);
			MessageBox::Show(match.ToString());
				if(match>0)
				{

					try{
					myReader=cmdDatabase3->ExecuteReader();
					MessageBox::Show("I am here4");
					while(myReader->Read()){

					}
					myReader->Close();
					}
					catch(Exception^ ex){
						MessageBox::Show(ex->Message);
					}
				}
				else
				{
					try{
					myReader=cmdDatabase2->ExecuteReader();
					MessageBox::Show("I am here5");
						while(myReader->Read()){
						}
						myReader->Close();
					}
					catch(Exception^ ex){
						MessageBox::Show(ex->Message);
					}
				}
				if(this->type_txt->Text=="group")
				    updateGrp();
				else
					updateIndi();
				UpdateTask();
				
			}
			}
		 //
		//Function to update the profile of the volunteers and groups
		//
private: void updateIndi(void){
				String ^v;
				String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.r_tasks_i where task_name='"+this->task_txt->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						v=myReader->GetString("volunteer");
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				  //update the task status
				 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Update project.r_tasks_i set status='yes' where task_name='"+this->task_txt->Text+"';",conDatabase);
				 try{
					 myReader=cmdDatabase1->ExecuteReader();
					 while(myReader->Read()){
						//v=myReader->GetString("volunteer");
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				  int vd;
				 MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Select * from project.volunteers where name='"+v+"';",conDatabase);
				 try{
					 myReader=cmdDatabase2->ExecuteReader();
					 while(myReader->Read()){
						vd=myReader->GetInt32("tasks_completed");
						vd=vd+1;
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				  MySqlCommand^ cmdDatabase3=gcnew MySqlCommand("Update project.volunteers set tasks_completed='"+vd+"' where name='"+v+"';",conDatabase);
				  try{
					 myReader=cmdDatabase3->ExecuteReader();
					 while(myReader->Read()){
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
		 }
private: void updateGrp(void){
			     int i1=0,i2=0,i3=0,i4=0,i5=0;
				 String^ g;
				 int v_count=0;
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.r_tasks_grp where task_name='"+this->task_txt->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						i1++;
						g=myReader->GetString("grpname");
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				  //
				 //Update the r_tasks_grp
				 //
				 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("Update project.r_tasks_grp set status='yes' where task_name='"+this->task_txt->Text+"';",conDatabase);
				 try{
					 myReader=cmdDatabase1->ExecuteReader();
					 while(myReader->Read()){
						i2++;
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				//
				//Update the groups for the no of tasks_completed
				//
				int g_tasks_cmpltd;
				 MySqlCommand^ cmdDatabase2=gcnew MySqlCommand("Select * from project.groups where name='"+g+"';",conDatabase);
				 try{
					 myReader=cmdDatabase2->ExecuteReader();
					 while(myReader->Read()){
						 i2++;
						g_tasks_cmpltd=myReader->GetInt32("tasks_completed");
						g_tasks_cmpltd++;
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
					
				  MySqlCommand^ cmdDatabase3=gcnew MySqlCommand("Update project.groups set tasks_completed='"+g_tasks_cmpltd+"' where name='"+g+"';",conDatabase);
				 try{
					 myReader=cmdDatabase3->ExecuteReader();
					 while(myReader->Read()){
						i3++;
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				//
				//getting the volunteers in the group
				//
				MySqlCommand^ cmdDatabase4=gcnew MySqlCommand("Select * from project.group_members where name='"+g+"';",conDatabase);
				 try{
					 //conDatabase->Open();
					 myReader=cmdDatabase4->ExecuteReader();
					 while(myReader->Read()){
						v_count++;
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				array<String^>^ v=gcnew array<String^>(v_count);
				try{
					int i=0;
					 //conDatabase->Open();
					 myReader=cmdDatabase4->ExecuteReader();
					 while(myReader->Read()){
						v[i]=myReader->GetString("volunteer");
						i++;
					 }
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
				//
				//updating the volunteers
				//
				  for(int i=0;i<v_count;i++){
					  int v_tasks_compltd;
					  MySqlCommand^ cmdDatabase5=gcnew MySqlCommand("Select * from project.volunteers where name='"+v[i]+"';",conDatabase);
					 try{
						 myReader=cmdDatabase5->ExecuteReader();
						 while(myReader->Read()){
							v_tasks_compltd=myReader->GetInt32("tasks_completed");
							v_tasks_compltd++;
						 }
						 myReader->Close();
					  }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					  }
					  MySqlCommand^ cmdDatabase6=gcnew MySqlCommand("Update project.volunteers set tasks_completed='"+v_tasks_compltd+"' where name='"+v[i]+"';",conDatabase);
						try{
						 myReader=cmdDatabase6->ExecuteReader();
						 while(myReader->Read()){
							//v_tasks_compltd=myReader->GetInt32("tasks_completed");
							//v_tasks_cmpltd++;
						 }
						 myReader->Close();
					  }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					  }
				  }
		 }
private: System::Void task_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(task_count>0){
			     String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("delete from project.task_approval where task_name='"+this->task_txt->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 int i1=0;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						i1++;
						//g=myReader->GetString("grpname");
					 }
					 if(i1>0)
						 MessageBox::Show("Deleted!!");
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			 }
		 }
//-------------------------------------------------------------------Deleting--------------------------------------------------------------------
		 private : void r_delete(void){
				 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("delete from project.items where name='"+this->del_txt->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 int i1=0;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						i1++;
						//g=myReader->GetString("grpname");
					 }
					 if(i1>0)
						 MessageBox::Show("Deleted!!");
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			}
		private: void v_delete(void){
				String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("delete from project.venue where name='"+this->del_txt->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 int i1=0;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						i1++;
						//g=myReader->GetString("grpname");
					 }
					 if(i1>0)
						 MessageBox::Show("Deleted!!");
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			}
		private: void g_delete(void){
					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
				 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("delete from project.groups where name='"+this->del_txt->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 int i1=0;
				 try{
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 while(myReader->Read()){
						///i1++;
						//g=myReader->GetString("grpname");
					 }
					 if(i1>0)
						MessageBox::Show("Deleted!!");
					 myReader->Close();
				 }
				  catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			}
		private: void rFillCombo(void){
					this->del_txt->Items->Clear();
					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.items;",conDatabase);
					 MySqlDataReader^ myReader;
					 int i1=0;
					 try{
						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 while(myReader->Read()){
							this->del_txt->Items->Add(myReader->GetString("name"));
							
						 }
						 //if(i1>0)
							// MessageBox::Show("Deleted!!");
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
				 }
		private: void vFillCombo(void){
					 this->del_txt->Items->Clear();
					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.venue;",conDatabase);
					 MySqlDataReader^ myReader;
					 int i1=0;
					 try{
						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 while(myReader->Read()){
							this->del_txt->Items->Add(myReader->GetString("name"));
							
						 }
						 //if(i1>0)
							// MessageBox::Show("Deleted!!");
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
				 }
		private: void gFillCombo(void){
					this->del_txt->Items->Clear();
					 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
					 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.groups;",conDatabase);
					 MySqlDataReader^ myReader;
					 int i1=0;
					 try{
						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 while(myReader->Read()){
							this->del_txt->Items->Add(myReader->GetString("name"));
							
						 }
						 //if(i1>0)
							// MessageBox::Show("Deleted!!");
						 myReader->Close();
					 }
					  catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
				 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->del_txt->Show();
			 this->del_btn->Show();
			 this->del_close->Show();
			 del_r++;
			 rFillCombo();

		 }

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->del_txt->Show();
			 this->del_btn->Show();
			 this->del_close->Show();
			 del_v++;
			 vFillCombo();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->del_txt->Show();
			 this->del_btn->Show();
			 this->del_close->Show();
			 del_g++;
			 gFillCombo();
		 }

private: System::Void del_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(del_r>0){
				 r_delete();
				 rFillCombo();
			 }
			 else if(del_v>0){
				 v_delete();
				 vFillCombo();
			 }
			 else{
				 g_delete();
				 gFillCombo();
			 }
		 }
private: System::Void del_close_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->del_txt->Hide();
			 this->del_close->Hide();
			 this->del_btn->Hide();
		 }
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 update_resource^ r=gcnew update_resource();
			 r->ShowDialog();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 update_venue^ v=gcnew update_venue();
			 v->ShowDialog();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->dataGrid1->Show();
			 this->close->Show();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.groups;",conDatabase);
			// MySqlDataReader^ myReader;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid1->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->dataGrid1->Show();
			 this->close->Show();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^conDatabase=gcnew MySqlConnection(constring);
		     MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.volunteers;",conDatabase);
			// MySqlDataReader^ myReader;
			 try{
				 MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
				 sda->SelectCommand=cmdDatabase;
				 DataTable^ dbdataset=gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bsource=gcnew BindingSource();
				 bsource->DataSource=dbdataset;
				 dataGrid1->DataSource=bsource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 Manage_calendar^ m=gcnew Manage_calendar();
			 m->ShowDialog();
		 }
private: System::Void composeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Message_Form^ c=gcnew Message_Form();
			 c->ShowDialog();
		 }
private: System::Void inboxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 INBOX^ i=gcnew INBOX();
			 i->ShowDialog();
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form_Volunteers^ v=gcnew Form_Volunteers();
			 v->ShowDialog();
		 }
private: System::Void viewTasksToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void individualToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form_Task_Individual_Resource^ r1=gcnew Form_Task_Individual_Resource();
			r1->ShowDialog();
		 }
private: System::Void groupToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Form_Group_Resources^ r2=gcnew Form_Group_Resources();
			r2->ShowDialog();


		 }
};
}
