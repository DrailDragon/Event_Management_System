#pragma once
#include "stdAfx.h"

#include "compose.h"
#include "resoursewise_amountdetails.h"
#include "f_assign_task_to_group.h"
#include "assign_task_to_individual.h"
#include "f_Search_Cheque.h"
#include"Form_Volunteers.h"
#include"Upload_File.h"
#include"getFiles.h"
#include"r_performance.h"

namespace practise_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form_Financial_Manager
	/// </summary>
	public ref class Form_Financial_Manager : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Form_Financial_Manager(String^ user)
		{
			InitializeComponent();
			this->timer1->Start();
			this->timer2->Start();
			username=user;
			/*this->pictureBox1->Image=Image::FromFile("../10.jpg");
			this->pictureBox2->Image=Image::FromFile("../1.jpg");*/
			//financeRequests();
			Welcome_lbl->Text="Mr."+user;
			f_task_approval_request();
			financeRequests();
			//Cheque_fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Financial_Manager()
		{
			if (components)
			{
				delete components;
			}
		}

	private:static int count=15;
	private:static int count2=15;

	protected: 

	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;



































	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::TabControl^  Profile_tabControl;

	private: System::Windows::Forms::TabPage^  Home_tabPage;

	private: System::Windows::Forms::TabPage^  EventCalendar_tabPage;
	private: System::Windows::Forms::TabPage^  ManageFinance_tabPage;


	private: System::Windows::Forms::TabPage^  Contacts_tagPage;
	private: System::Windows::Forms::TabPage^  Events_tabPage;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  currenttime_timer;









private: System::Windows::Forms::Button^  ViewCalendar_button;
private: System::Windows::Forms::TextBox^  eventcal_textBox;



private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

private: System::Windows::Forms::DataGridView^  Events_dataGridView;






private: System::Windows::Forms::Button^  eAccept_btn;




private: System::Windows::Forms::Label^  eTime_lbl;

private: System::Windows::Forms::Label^  FinanceRequests_lbl;
private: System::Windows::Forms::Label^  eDuration_lbl;
private: System::Windows::Forms::Label^  eVenue_lbl;



private: System::Windows::Forms::Label^  edate_lbl;
private: System::Windows::Forms::Label^  eStatus_lbl;



private: System::Windows::Forms::Label^  eCost_lbl;
private: System::Windows::Forms::Button^  eReject_btn;


private: System::Windows::Forms::Label^  ename_lbl;


private: System::Windows::Forms::ListBox^  FinanceRequests_listBox;
private: System::Windows::Forms::TextBox^  eTime_txt;





private: System::Windows::Forms::TextBox^  ename_txt;
private: System::Windows::Forms::TextBox^  eDuration_txt;


private: System::Windows::Forms::TextBox^  eVenue_txt;




private: System::Windows::Forms::TextBox^  eStatus_txt;

private: System::Windows::Forms::TextBox^  eDate_txt;


private: System::Windows::Forms::Label^  Resourses_lbl;
private: System::Windows::Forms::TextBox^  eResourses_txt;
private: System::Windows::Forms::Label^  Welcome_lbl;
private: System::Windows::Forms::Button^  Loadcal_btn;
private: System::Windows::Forms::TextBox^  NewCost_txt;

private: System::Windows::Forms::Label^  NewCost_lbl;
private: System::Windows::Forms::TextBox^  EventCostName_text;
private: System::Windows::Forms::Label^  CostEventName_lbl;
private: System::Windows::Forms::Button^  UpdateCost_btn;
private: System::Windows::Forms::Button^  RefreshTable_btn;
private: System::Windows::Forms::Button^  Cancel_btn;
private: System::Windows::Forms::TextBox^  f_IsGroup_txt;



private: System::Windows::Forms::TextBox^  bank_txt;





private: System::Windows::Forms::Label^  submittedby_lbl;
private: System::Windows::Forms::Label^  amount_lbl;
private: System::Windows::Forms::Label^  date_lbl;
private: System::Windows::Forms::Button^  Submit_btn;






private: System::Windows::Forms::Label^  Chequeid_lbl;
private: System::Windows::Forms::TextBox^  chequeid_txt;



private: System::Windows::Forms::Label^  bank_lbl;
private: System::Windows::Forms::DateTimePicker^  cheque_dateTimePicker;
private: System::Windows::Forms::GroupBox^  Cheque_groupBox;






private: System::Windows::Forms::Button^  chSearch_btn;

private: System::Windows::Forms::TabPage^  Tasks_tabPage;

private: System::Windows::Forms::Button^  f_assign_task_ind_btn;
private: System::Windows::Forms::Button^  Performance_grbtn;


private: System::Windows::Forms::Button^  f_assign_task_grp_btn;

private: System::Windows::Forms::Button^  download_btn;
private: System::Windows::Forms::Button^  upload_btn;






private: System::Windows::Forms::Button^  See_uploads_btn;
private: System::Windows::Forms::ContextMenuStrip^  Performance_contextMenuStrip;
private: System::Windows::Forms::Label^  f_grp_tasknm_lbl;
private: System::Windows::Forms::TextBox^  f_grp_tasknm_txt;
private: System::Windows::Forms::Button^  f_Apr_Clr_btn;

private: System::Windows::Forms::ListBox^  TaskApproval_request_listBox;
private: System::Windows::Forms::Label^  searchExplain_lbl;
private: System::Windows::Forms::MaskedTextBox^  amt_txt;
private: System::Windows::Forms::MaskedTextBox^  eCost_txt;
private: System::Windows::Forms::Button^  btn_contacts;















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
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Financial_Manager::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Profile_tabControl = (gcnew System::Windows::Forms::TabControl());
			this->Home_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->eCost_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Welcome_lbl = (gcnew System::Windows::Forms::Label());
			this->Resourses_lbl = (gcnew System::Windows::Forms::Label());
			this->eResourses_txt = (gcnew System::Windows::Forms::TextBox());
			this->eTime_txt = (gcnew System::Windows::Forms::TextBox());
			this->ename_txt = (gcnew System::Windows::Forms::TextBox());
			this->eDuration_txt = (gcnew System::Windows::Forms::TextBox());
			this->eVenue_txt = (gcnew System::Windows::Forms::TextBox());
			this->eStatus_txt = (gcnew System::Windows::Forms::TextBox());
			this->eDate_txt = (gcnew System::Windows::Forms::TextBox());
			this->eAccept_btn = (gcnew System::Windows::Forms::Button());
			this->eTime_lbl = (gcnew System::Windows::Forms::Label());
			this->FinanceRequests_lbl = (gcnew System::Windows::Forms::Label());
			this->eDuration_lbl = (gcnew System::Windows::Forms::Label());
			this->eVenue_lbl = (gcnew System::Windows::Forms::Label());
			this->edate_lbl = (gcnew System::Windows::Forms::Label());
			this->eStatus_lbl = (gcnew System::Windows::Forms::Label());
			this->eCost_lbl = (gcnew System::Windows::Forms::Label());
			this->eReject_btn = (gcnew System::Windows::Forms::Button());
			this->ename_lbl = (gcnew System::Windows::Forms::Label());
			this->FinanceRequests_listBox = (gcnew System::Windows::Forms::ListBox());
			this->Events_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->RefreshTable_btn = (gcnew System::Windows::Forms::Button());
			this->NewCost_txt = (gcnew System::Windows::Forms::TextBox());
			this->NewCost_lbl = (gcnew System::Windows::Forms::Label());
			this->EventCostName_text = (gcnew System::Windows::Forms::TextBox());
			this->CostEventName_lbl = (gcnew System::Windows::Forms::Label());
			this->UpdateCost_btn = (gcnew System::Windows::Forms::Button());
			this->Loadcal_btn = (gcnew System::Windows::Forms::Button());
			this->Events_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->EventCalendar_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->ViewCalendar_button = (gcnew System::Windows::Forms::Button());
			this->eventcal_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ManageFinance_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->searchExplain_lbl = (gcnew System::Windows::Forms::Label());
			this->f_Apr_Clr_btn = (gcnew System::Windows::Forms::Button());
			this->TaskApproval_request_listBox = (gcnew System::Windows::Forms::ListBox());
			this->chSearch_btn = (gcnew System::Windows::Forms::Button());
			this->Cheque_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->amt_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->f_grp_tasknm_lbl = (gcnew System::Windows::Forms::Label());
			this->f_grp_tasknm_txt = (gcnew System::Windows::Forms::TextBox());
			this->cheque_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->f_IsGroup_txt = (gcnew System::Windows::Forms::TextBox());
			this->bank_lbl = (gcnew System::Windows::Forms::Label());
			this->bank_txt = (gcnew System::Windows::Forms::TextBox());
			this->Cancel_btn = (gcnew System::Windows::Forms::Button());
			this->chequeid_txt = (gcnew System::Windows::Forms::TextBox());
			this->date_lbl = (gcnew System::Windows::Forms::Label());
			this->submittedby_lbl = (gcnew System::Windows::Forms::Label());
			this->Submit_btn = (gcnew System::Windows::Forms::Button());
			this->Chequeid_lbl = (gcnew System::Windows::Forms::Label());
			this->amount_lbl = (gcnew System::Windows::Forms::Label());
			this->Contacts_tagPage = (gcnew System::Windows::Forms::TabPage());
			this->btn_contacts = (gcnew System::Windows::Forms::Button());
			this->Tasks_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->See_uploads_btn = (gcnew System::Windows::Forms::Button());
			this->download_btn = (gcnew System::Windows::Forms::Button());
			this->Performance_grbtn = (gcnew System::Windows::Forms::Button());
			this->upload_btn = (gcnew System::Windows::Forms::Button());
			this->f_assign_task_ind_btn = (gcnew System::Windows::Forms::Button());
			this->f_assign_task_grp_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->currenttime_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Performance_contextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Profile_tabControl->SuspendLayout();
			this->Home_tabPage->SuspendLayout();
			this->Events_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Events_dataGridView))->BeginInit();
			this->EventCalendar_tabPage->SuspendLayout();
			this->ManageFinance_tabPage->SuspendLayout();
			this->Cheque_groupBox->SuspendLayout();
			this->Contacts_tagPage->SuspendLayout();
			this->Tasks_tabPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(24, 629);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(42, 13);
			this->linkLabel1->TabIndex = 14;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"intranet";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form_Financial_Manager::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(88, 629);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(48, 13);
			this->linkLabel2->TabIndex = 15;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Webmail";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form_Financial_Manager::linkLabel2_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(162, 629);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(41, 13);
			this->linkLabel3->TabIndex = 16;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Google";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form_Financial_Manager::linkLabel3_LinkClicked);
			// 
			// timer1
			// 
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form_Financial_Manager::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 5000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form_Financial_Manager::timer2_Tick);
			// 
			// Profile_tabControl
			// 
			this->Profile_tabControl->Controls->Add(this->Home_tabPage);
			this->Profile_tabControl->Controls->Add(this->Events_tabPage);
			this->Profile_tabControl->Controls->Add(this->EventCalendar_tabPage);
			this->Profile_tabControl->Controls->Add(this->ManageFinance_tabPage);
			this->Profile_tabControl->Controls->Add(this->Contacts_tagPage);
			this->Profile_tabControl->Controls->Add(this->Tasks_tabPage);
			this->Profile_tabControl->Cursor = System::Windows::Forms::Cursors::Default;
			this->Profile_tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Profile_tabControl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Profile_tabControl->HotTrack = true;
			this->Profile_tabControl->Location = System::Drawing::Point(0, 0);
			this->Profile_tabControl->Name = L"Profile_tabControl";
			this->Profile_tabControl->SelectedIndex = 0;
			this->Profile_tabControl->ShowToolTips = true;
			this->Profile_tabControl->Size = System::Drawing::Size(1095, 683);
			this->Profile_tabControl->TabIndex = 20;
			this->Profile_tabControl->TabStop = false;
			// 
			// Home_tabPage
			// 
			this->Home_tabPage->AutoScroll = true;
			this->Home_tabPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Home_tabPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Home_tabPage.BackgroundImage")));
			this->Home_tabPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Home_tabPage->Controls->Add(this->eCost_txt);
			this->Home_tabPage->Controls->Add(this->Welcome_lbl);
			this->Home_tabPage->Controls->Add(this->Resourses_lbl);
			this->Home_tabPage->Controls->Add(this->eResourses_txt);
			this->Home_tabPage->Controls->Add(this->eTime_txt);
			this->Home_tabPage->Controls->Add(this->ename_txt);
			this->Home_tabPage->Controls->Add(this->eDuration_txt);
			this->Home_tabPage->Controls->Add(this->eVenue_txt);
			this->Home_tabPage->Controls->Add(this->eStatus_txt);
			this->Home_tabPage->Controls->Add(this->eDate_txt);
			this->Home_tabPage->Controls->Add(this->eAccept_btn);
			this->Home_tabPage->Controls->Add(this->eTime_lbl);
			this->Home_tabPage->Controls->Add(this->FinanceRequests_lbl);
			this->Home_tabPage->Controls->Add(this->eDuration_lbl);
			this->Home_tabPage->Controls->Add(this->eVenue_lbl);
			this->Home_tabPage->Controls->Add(this->edate_lbl);
			this->Home_tabPage->Controls->Add(this->eStatus_lbl);
			this->Home_tabPage->Controls->Add(this->eCost_lbl);
			this->Home_tabPage->Controls->Add(this->eReject_btn);
			this->Home_tabPage->Controls->Add(this->ename_lbl);
			this->Home_tabPage->Controls->Add(this->FinanceRequests_listBox);
			this->Home_tabPage->Location = System::Drawing::Point(4, 32);
			this->Home_tabPage->Name = L"Home_tabPage";
			this->Home_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Home_tabPage->Size = System::Drawing::Size(1087, 647);
			this->Home_tabPage->TabIndex = 0;
			this->Home_tabPage->Text = L"Home";
			// 
			// eCost_txt
			// 
			this->eCost_txt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->eCost_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eCost_txt->Location = System::Drawing::Point(384, 317);
			this->eCost_txt->Name = L"eCost_txt";
			this->eCost_txt->Size = System::Drawing::Size(122, 30);
			this->eCost_txt->TabIndex = 28;
			// 
			// Welcome_lbl
			// 
			this->Welcome_lbl->AutoSize = true;
			this->Welcome_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Welcome_lbl->Location = System::Drawing::Point(39, 18);
			this->Welcome_lbl->Name = L"Welcome_lbl";
			this->Welcome_lbl->Size = System::Drawing::Size(45, 23);
			this->Welcome_lbl->TabIndex = 27;
			this->Welcome_lbl->Text = L"User";
			// 
			// Resourses_lbl
			// 
			this->Resourses_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Resourses_lbl->AutoEllipsis = true;
			this->Resourses_lbl->AutoSize = true;
			this->Resourses_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Resourses_lbl->Location = System::Drawing::Point(19, 370);
			this->Resourses_lbl->Name = L"Resourses_lbl";
			this->Resourses_lbl->Size = System::Drawing::Size(82, 23);
			this->Resourses_lbl->TabIndex = 26;
			this->Resourses_lbl->Text = L"Resourses";
			// 
			// eResourses_txt
			// 
			this->eResourses_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->eResourses_txt->Location = System::Drawing::Point(130, 362);
			this->eResourses_txt->Multiline = true;
			this->eResourses_txt->Name = L"eResourses_txt";
			this->eResourses_txt->Size = System::Drawing::Size(367, 31);
			this->eResourses_txt->TabIndex = 25;
			this->eResourses_txt->TextChanged += gcnew System::EventHandler(this, &Form_Financial_Manager::eResourses_txt_TextChanged);
			// 
			// eTime_txt
			// 
			this->eTime_txt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->eTime_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eTime_txt->Location = System::Drawing::Point(375, 212);
			this->eTime_txt->Name = L"eTime_txt";
			this->eTime_txt->Size = System::Drawing::Size(122, 30);
			this->eTime_txt->TabIndex = 23;
			// 
			// ename_txt
			// 
			this->ename_txt->AcceptsReturn = true;
			this->ename_txt->AcceptsTab = true;
			this->ename_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ename_txt->Location = System::Drawing::Point(119, 105);
			this->ename_txt->Multiline = true;
			this->ename_txt->Name = L"ename_txt";
			this->ename_txt->Size = System::Drawing::Size(164, 31);
			this->ename_txt->TabIndex = 22;
			// 
			// eDuration_txt
			// 
			this->eDuration_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->eDuration_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eDuration_txt->Location = System::Drawing::Point(118, 310);
			this->eDuration_txt->Name = L"eDuration_txt";
			this->eDuration_txt->Size = System::Drawing::Size(139, 30);
			this->eDuration_txt->TabIndex = 21;
			// 
			// eVenue_txt
			// 
			this->eVenue_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->eVenue_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eVenue_txt->Location = System::Drawing::Point(118, 212);
			this->eVenue_txt->Multiline = true;
			this->eVenue_txt->Name = L"eVenue_txt";
			this->eVenue_txt->Size = System::Drawing::Size(151, 31);
			this->eVenue_txt->TabIndex = 20;
			// 
			// eStatus_txt
			// 
			this->eStatus_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->eStatus_txt->Location = System::Drawing::Point(325, 497);
			this->eStatus_txt->Name = L"eStatus_txt";
			this->eStatus_txt->Size = System::Drawing::Size(172, 30);
			this->eStatus_txt->TabIndex = 17;
			this->eStatus_txt->TextChanged += gcnew System::EventHandler(this, &Form_Financial_Manager::eStatus_txt_TextChanged);
			// 
			// eDate_txt
			// 
			this->eDate_txt->AcceptsReturn = true;
			this->eDate_txt->AcceptsTab = true;
			this->eDate_txt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->eDate_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eDate_txt->Location = System::Drawing::Point(127, 426);
			this->eDate_txt->Name = L"eDate_txt";
			this->eDate_txt->Size = System::Drawing::Size(166, 30);
			this->eDate_txt->TabIndex = 16;
			// 
			// eAccept_btn
			// 
			this->eAccept_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->eAccept_btn->AutoSize = true;
			this->eAccept_btn->BackColor = System::Drawing::Color::White;
			this->eAccept_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eAccept_btn->ForeColor = System::Drawing::Color::Black;
			this->eAccept_btn->Location = System::Drawing::Point(293, 566);
			this->eAccept_btn->Name = L"eAccept_btn";
			this->eAccept_btn->Size = System::Drawing::Size(101, 35);
			this->eAccept_btn->TabIndex = 13;
			this->eAccept_btn->Text = L"Accept";
			this->eAccept_btn->UseVisualStyleBackColor = false;
			this->eAccept_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::eAccept_btn_Click);
			// 
			// eTime_lbl
			// 
			this->eTime_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->eTime_lbl->AutoSize = true;
			this->eTime_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eTime_lbl->Location = System::Drawing::Point(302, 220);
			this->eTime_lbl->Name = L"eTime_lbl";
			this->eTime_lbl->Size = System::Drawing::Size(45, 23);
			this->eTime_lbl->TabIndex = 10;
			this->eTime_lbl->Text = L"Time";
			// 
			// FinanceRequests_lbl
			// 
			this->FinanceRequests_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FinanceRequests_lbl->AutoEllipsis = true;
			this->FinanceRequests_lbl->AutoSize = true;
			this->FinanceRequests_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FinanceRequests_lbl->Location = System::Drawing::Point(348, 18);
			this->FinanceRequests_lbl->Name = L"FinanceRequests_lbl";
			this->FinanceRequests_lbl->Size = System::Drawing::Size(308, 23);
			this->FinanceRequests_lbl->TabIndex = 9;
			this->FinanceRequests_lbl->Text = L"FinanceRequests:Select to accept/reject";
			// 
			// eDuration_lbl
			// 
			this->eDuration_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->eDuration_lbl->AutoEllipsis = true;
			this->eDuration_lbl->AutoSize = true;
			this->eDuration_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eDuration_lbl->Location = System::Drawing::Point(28, 317);
			this->eDuration_lbl->Name = L"eDuration_lbl";
			this->eDuration_lbl->Size = System::Drawing::Size(74, 23);
			this->eDuration_lbl->TabIndex = 8;
			this->eDuration_lbl->Text = L"Duration";
			// 
			// eVenue_lbl
			// 
			this->eVenue_lbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->eVenue_lbl->AutoEllipsis = true;
			this->eVenue_lbl->AutoSize = true;
			this->eVenue_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eVenue_lbl->Location = System::Drawing::Point(32, 220);
			this->eVenue_lbl->Name = L"eVenue_lbl";
			this->eVenue_lbl->Size = System::Drawing::Size(52, 23);
			this->eVenue_lbl->TabIndex = 7;
			this->eVenue_lbl->Text = L"Venue";
			// 
			// edate_lbl
			// 
			this->edate_lbl->AutoEllipsis = true;
			this->edate_lbl->AutoSize = true;
			this->edate_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->edate_lbl->Location = System::Drawing::Point(57, 433);
			this->edate_lbl->Name = L"edate_lbl";
			this->edate_lbl->Size = System::Drawing::Size(45, 23);
			this->edate_lbl->TabIndex = 6;
			this->edate_lbl->Text = L"Date";
			// 
			// eStatus_lbl
			// 
			this->eStatus_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->eStatus_lbl->AutoSize = true;
			this->eStatus_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eStatus_lbl->Location = System::Drawing::Point(235, 503);
			this->eStatus_lbl->Name = L"eStatus_lbl";
			this->eStatus_lbl->Size = System::Drawing::Size(58, 23);
			this->eStatus_lbl->TabIndex = 5;
			this->eStatus_lbl->Text = L"Status";
			// 
			// eCost_lbl
			// 
			this->eCost_lbl->AutoEllipsis = true;
			this->eCost_lbl->AutoSize = true;
			this->eCost_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eCost_lbl->Location = System::Drawing::Point(289, 317);
			this->eCost_lbl->Name = L"eCost_lbl";
			this->eCost_lbl->Size = System::Drawing::Size(72, 23);
			this->eCost_lbl->TabIndex = 4;
			this->eCost_lbl->Text = L"Cost(Rs)";
			this->eCost_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// eReject_btn
			// 
			this->eReject_btn->AutoSize = true;
			this->eReject_btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->eReject_btn->ForeColor = System::Drawing::Color::Black;
			this->eReject_btn->Location = System::Drawing::Point(106, 584);
			this->eReject_btn->Name = L"eReject_btn";
			this->eReject_btn->Size = System::Drawing::Size(101, 35);
			this->eReject_btn->TabIndex = 3;
			this->eReject_btn->Text = L"Reject";
			this->eReject_btn->UseVisualStyleBackColor = true;
			this->eReject_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::eReject_btn_Click);
			// 
			// ename_lbl
			// 
			this->ename_lbl->AutoEllipsis = true;
			this->ename_lbl->AutoSize = true;
			this->ename_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ename_lbl->Location = System::Drawing::Point(39, 113);
			this->ename_lbl->Name = L"ename_lbl";
			this->ename_lbl->Size = System::Drawing::Size(45, 23);
			this->ename_lbl->TabIndex = 2;
			this->ename_lbl->Text = L"name";
			// 
			// FinanceRequests_listBox
			// 
			this->FinanceRequests_listBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->FinanceRequests_listBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FinanceRequests_listBox->FormattingEnabled = true;
			this->FinanceRequests_listBox->HorizontalScrollbar = true;
			this->FinanceRequests_listBox->ItemHeight = 23;
			this->FinanceRequests_listBox->Location = System::Drawing::Point(524, 56);
			this->FinanceRequests_listBox->Name = L"FinanceRequests_listBox";
			this->FinanceRequests_listBox->ScrollAlwaysVisible = true;
			this->FinanceRequests_listBox->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->FinanceRequests_listBox->Size = System::Drawing::Size(523, 418);
			this->FinanceRequests_listBox->TabIndex = 0;
			this->FinanceRequests_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_Financial_Manager::FinanceRequests_listBox_SelectedIndexChanged);
			// 
			// Events_tabPage
			// 
			this->Events_tabPage->AutoScroll = true;
			this->Events_tabPage->BackColor = System::Drawing::Color::OrangeRed;
			this->Events_tabPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Events_tabPage.BackgroundImage")));
			this->Events_tabPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Events_tabPage->Controls->Add(this->RefreshTable_btn);
			this->Events_tabPage->Controls->Add(this->NewCost_txt);
			this->Events_tabPage->Controls->Add(this->NewCost_lbl);
			this->Events_tabPage->Controls->Add(this->EventCostName_text);
			this->Events_tabPage->Controls->Add(this->CostEventName_lbl);
			this->Events_tabPage->Controls->Add(this->UpdateCost_btn);
			this->Events_tabPage->Controls->Add(this->Loadcal_btn);
			this->Events_tabPage->Controls->Add(this->Events_dataGridView);
			this->Events_tabPage->Cursor = System::Windows::Forms::Cursors::Default;
			this->Events_tabPage->ForeColor = System::Drawing::Color::Red;
			this->Events_tabPage->Location = System::Drawing::Point(4, 32);
			this->Events_tabPage->Name = L"Events_tabPage";
			this->Events_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Events_tabPage->Size = System::Drawing::Size(1087, 647);
			this->Events_tabPage->TabIndex = 1;
			this->Events_tabPage->Text = L"Events";
			this->Events_tabPage->ToolTipText = L"Events_contextMenuStrip";
			this->Events_tabPage->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::Events_tabPage_Click);
			// 
			// RefreshTable_btn
			// 
			this->RefreshTable_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->RefreshTable_btn->AutoSize = true;
			this->RefreshTable_btn->Location = System::Drawing::Point(568, 418);
			this->RefreshTable_btn->Name = L"RefreshTable_btn";
			this->RefreshTable_btn->Size = System::Drawing::Size(126, 35);
			this->RefreshTable_btn->TabIndex = 9;
			this->RefreshTable_btn->Text = L"Refresh";
			this->RefreshTable_btn->UseVisualStyleBackColor = true;
			this->RefreshTable_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::RefreshTable_btn_Click);
			// 
			// NewCost_txt
			// 
			this->NewCost_txt->Location = System::Drawing::Point(1021, 167);
			this->NewCost_txt->Multiline = true;
			this->NewCost_txt->Name = L"NewCost_txt";
			this->NewCost_txt->Size = System::Drawing::Size(100, 31);
			this->NewCost_txt->TabIndex = 8;
			// 
			// NewCost_lbl
			// 
			this->NewCost_lbl->AutoSize = true;
			this->NewCost_lbl->ForeColor = System::Drawing::Color::White;
			this->NewCost_lbl->Location = System::Drawing::Point(901, 173);
			this->NewCost_lbl->Name = L"NewCost_lbl";
			this->NewCost_lbl->Size = System::Drawing::Size(74, 23);
			this->NewCost_lbl->TabIndex = 7;
			this->NewCost_lbl->Text = L"NewCost";
			// 
			// EventCostName_text
			// 
			this->EventCostName_text->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->EventCostName_text->Location = System::Drawing::Point(1273, 93);
			this->EventCostName_text->Multiline = true;
			this->EventCostName_text->Name = L"EventCostName_text";
			this->EventCostName_text->Size = System::Drawing::Size(170, 33);
			this->EventCostName_text->TabIndex = 6;
			// 
			// CostEventName_lbl
			// 
			this->CostEventName_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CostEventName_lbl->AutoSize = true;
			this->CostEventName_lbl->ForeColor = System::Drawing::Color::White;
			this->CostEventName_lbl->Location = System::Drawing::Point(1297, 44);
			this->CostEventName_lbl->Name = L"CostEventName_lbl";
			this->CostEventName_lbl->Size = System::Drawing::Size(91, 23);
			this->CostEventName_lbl->TabIndex = 5;
			this->CostEventName_lbl->Text = L"EventName";
			// 
			// UpdateCost_btn
			// 
			this->UpdateCost_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->UpdateCost_btn->AutoSize = true;
			this->UpdateCost_btn->Location = System::Drawing::Point(1276, 317);
			this->UpdateCost_btn->Name = L"UpdateCost_btn";
			this->UpdateCost_btn->Size = System::Drawing::Size(101, 35);
			this->UpdateCost_btn->TabIndex = 4;
			this->UpdateCost_btn->Text = L"Update";
			this->UpdateCost_btn->UseVisualStyleBackColor = true;
			this->UpdateCost_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::UpdateCost_btn_Click);
			// 
			// Loadcal_btn
			// 
			this->Loadcal_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Loadcal_btn->AutoSize = true;
			this->Loadcal_btn->Location = System::Drawing::Point(240, 418);
			this->Loadcal_btn->Name = L"Loadcal_btn";
			this->Loadcal_btn->Size = System::Drawing::Size(205, 35);
			this->Loadcal_btn->TabIndex = 3;
			this->Loadcal_btn->Text = L"LoadEventsTable";
			this->Loadcal_btn->UseVisualStyleBackColor = true;
			this->Loadcal_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::Loadcal_btn_Click);
			// 
			// Events_dataGridView
			// 
			this->Events_dataGridView->AllowUserToOrderColumns = true;
			this->Events_dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Events_dataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->Events_dataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Events_dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Events_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Events_dataGridView->GridColor = System::Drawing::SystemColors::ButtonShadow;
			this->Events_dataGridView->Location = System::Drawing::Point(6, 25);
			this->Events_dataGridView->Name = L"Events_dataGridView";
			this->Events_dataGridView->Size = System::Drawing::Size(889, 292);
			this->Events_dataGridView->TabIndex = 0;
			// 
			// EventCalendar_tabPage
			// 
			this->EventCalendar_tabPage->BackColor = System::Drawing::Color::Brown;
			this->EventCalendar_tabPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"EventCalendar_tabPage.BackgroundImage")));
			this->EventCalendar_tabPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->EventCalendar_tabPage->Controls->Add(this->ViewCalendar_button);
			this->EventCalendar_tabPage->Controls->Add(this->eventcal_textBox);
			this->EventCalendar_tabPage->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->EventCalendar_tabPage->Location = System::Drawing::Point(4, 32);
			this->EventCalendar_tabPage->Name = L"EventCalendar_tabPage";
			this->EventCalendar_tabPage->Size = System::Drawing::Size(1087, 647);
			this->EventCalendar_tabPage->TabIndex = 2;
			this->EventCalendar_tabPage->Text = L"EventCalendar";
			// 
			// ViewCalendar_button
			// 
			this->ViewCalendar_button->AutoSize = true;
			this->ViewCalendar_button->ForeColor = System::Drawing::SystemColors::Highlight;
			this->ViewCalendar_button->Location = System::Drawing::Point(3, 3);
			this->ViewCalendar_button->Name = L"ViewCalendar_button";
			this->ViewCalendar_button->Size = System::Drawing::Size(167, 35);
			this->ViewCalendar_button->TabIndex = 0;
			this->ViewCalendar_button->Text = L"ViewCalendar";
			this->ViewCalendar_button->UseVisualStyleBackColor = true;
			this->ViewCalendar_button->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::ViewCalendar_button_Click);
			// 
			// eventcal_textBox
			// 
			this->eventcal_textBox->Location = System::Drawing::Point(172, 3);
			this->eventcal_textBox->Multiline = true;
			this->eventcal_textBox->Name = L"eventcal_textBox";
			this->eventcal_textBox->Size = System::Drawing::Size(695, 250);
			this->eventcal_textBox->TabIndex = 22;
			this->eventcal_textBox->Visible = false;
			// 
			// ManageFinance_tabPage
			// 
			this->ManageFinance_tabPage->AutoScroll = true;
			this->ManageFinance_tabPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ManageFinance_tabPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ManageFinance_tabPage.BackgroundImage")));
			this->ManageFinance_tabPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ManageFinance_tabPage->Controls->Add(this->searchExplain_lbl);
			this->ManageFinance_tabPage->Controls->Add(this->f_Apr_Clr_btn);
			this->ManageFinance_tabPage->Controls->Add(this->TaskApproval_request_listBox);
			this->ManageFinance_tabPage->Controls->Add(this->chSearch_btn);
			this->ManageFinance_tabPage->Controls->Add(this->Cheque_groupBox);
			this->ManageFinance_tabPage->Cursor = System::Windows::Forms::Cursors::Default;
			this->ManageFinance_tabPage->Location = System::Drawing::Point(4, 32);
			this->ManageFinance_tabPage->Name = L"ManageFinance_tabPage";
			this->ManageFinance_tabPage->Size = System::Drawing::Size(1087, 647);
			this->ManageFinance_tabPage->TabIndex = 3;
			this->ManageFinance_tabPage->Text = L"ManageFinance";
			this->ManageFinance_tabPage->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::ManageFinance_tabPage_Click);
			// 
			// searchExplain_lbl
			// 
			this->searchExplain_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->searchExplain_lbl->AutoSize = true;
			this->searchExplain_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchExplain_lbl->Location = System::Drawing::Point(708, 23);
			this->searchExplain_lbl->Name = L"searchExplain_lbl";
			this->searchExplain_lbl->Size = System::Drawing::Size(327, 46);
			this->searchExplain_lbl->TabIndex = 16;
			this->searchExplain_lbl->Text = L"Click Search to search database for cheque\r\n                   submitted by volun" 
				L"teers";
			this->searchExplain_lbl->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::label2_Click);
			// 
			// f_Apr_Clr_btn
			// 
			this->f_Apr_Clr_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->f_Apr_Clr_btn->AutoSize = true;
			this->f_Apr_Clr_btn->ForeColor = System::Drawing::SystemColors::Highlight;
			this->f_Apr_Clr_btn->Location = System::Drawing::Point(929, 538);
			this->f_Apr_Clr_btn->Name = L"f_Apr_Clr_btn";
			this->f_Apr_Clr_btn->Size = System::Drawing::Size(116, 35);
			this->f_Apr_Clr_btn->TabIndex = 15;
			this->f_Apr_Clr_btn->Text = L"ClearList";
			this->f_Apr_Clr_btn->UseVisualStyleBackColor = true;
			this->f_Apr_Clr_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::button4_Click);
			// 
			// TaskApproval_request_listBox
			// 
			this->TaskApproval_request_listBox->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->TaskApproval_request_listBox->FormattingEnabled = true;
			this->TaskApproval_request_listBox->ItemHeight = 23;
			this->TaskApproval_request_listBox->Location = System::Drawing::Point(712, 108);
			this->TaskApproval_request_listBox->Name = L"TaskApproval_request_listBox";
			this->TaskApproval_request_listBox->Size = System::Drawing::Size(364, 257);
			this->TaskApproval_request_listBox->TabIndex = 14;
			this->TaskApproval_request_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_Financial_Manager::TaskApproval_request_listBox_SelectedIndexChanged);
			// 
			// chSearch_btn
			// 
			this->chSearch_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->chSearch_btn->AutoSize = true;
			this->chSearch_btn->ForeColor = System::Drawing::SystemColors::Highlight;
			this->chSearch_btn->Location = System::Drawing::Point(980, 386);
			this->chSearch_btn->Name = L"chSearch_btn";
			this->chSearch_btn->Size = System::Drawing::Size(96, 35);
			this->chSearch_btn->TabIndex = 13;
			this->chSearch_btn->Text = L"Search";
			this->chSearch_btn->UseVisualStyleBackColor = true;
			this->chSearch_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::chSearch_btn_Click);
			// 
			// Cheque_groupBox
			// 
			this->Cheque_groupBox->Controls->Add(this->amt_txt);
			this->Cheque_groupBox->Controls->Add(this->f_grp_tasknm_lbl);
			this->Cheque_groupBox->Controls->Add(this->f_grp_tasknm_txt);
			this->Cheque_groupBox->Controls->Add(this->cheque_dateTimePicker);
			this->Cheque_groupBox->Controls->Add(this->f_IsGroup_txt);
			this->Cheque_groupBox->Controls->Add(this->bank_lbl);
			this->Cheque_groupBox->Controls->Add(this->bank_txt);
			this->Cheque_groupBox->Controls->Add(this->Cancel_btn);
			this->Cheque_groupBox->Controls->Add(this->chequeid_txt);
			this->Cheque_groupBox->Controls->Add(this->date_lbl);
			this->Cheque_groupBox->Controls->Add(this->submittedby_lbl);
			this->Cheque_groupBox->Controls->Add(this->Submit_btn);
			this->Cheque_groupBox->Controls->Add(this->Chequeid_lbl);
			this->Cheque_groupBox->Controls->Add(this->amount_lbl);
			this->Cheque_groupBox->Location = System::Drawing::Point(48, 34);
			this->Cheque_groupBox->Name = L"Cheque_groupBox";
			this->Cheque_groupBox->Size = System::Drawing::Size(624, 371);
			this->Cheque_groupBox->TabIndex = 13;
			this->Cheque_groupBox->TabStop = false;
			this->Cheque_groupBox->Text = L"EnterChequeDetails";
			// 
			// amt_txt
			// 
			this->amt_txt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->amt_txt->Location = System::Drawing::Point(487, 193);
			this->amt_txt->Name = L"amt_txt";
			this->amt_txt->Size = System::Drawing::Size(120, 30);
			this->amt_txt->TabIndex = 17;
			// 
			// f_grp_tasknm_lbl
			// 
			this->f_grp_tasknm_lbl->AutoEllipsis = true;
			this->f_grp_tasknm_lbl->AutoSize = true;
			this->f_grp_tasknm_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f_grp_tasknm_lbl->Location = System::Drawing::Point(41, 257);
			this->f_grp_tasknm_lbl->Name = L"f_grp_tasknm_lbl";
			this->f_grp_tasknm_lbl->Size = System::Drawing::Size(94, 26);
			this->f_grp_tasknm_lbl->TabIndex = 14;
			this->f_grp_tasknm_lbl->Text = L"taskname";
			// 
			// f_grp_tasknm_txt
			// 
			this->f_grp_tasknm_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f_grp_tasknm_txt->Location = System::Drawing::Point(179, 251);
			this->f_grp_tasknm_txt->Multiline = true;
			this->f_grp_tasknm_txt->Name = L"f_grp_tasknm_txt";
			this->f_grp_tasknm_txt->Size = System::Drawing::Size(180, 31);
			this->f_grp_tasknm_txt->TabIndex = 13;
			// 
			// cheque_dateTimePicker
			// 
			this->cheque_dateTimePicker->CustomFormat = L"yyyy-MM-dd hh:mm:ss";
			this->cheque_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cheque_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->cheque_dateTimePicker->Location = System::Drawing::Point(306, 121);
			this->cheque_dateTimePicker->Name = L"cheque_dateTimePicker";
			this->cheque_dateTimePicker->Size = System::Drawing::Size(301, 30);
			this->cheque_dateTimePicker->TabIndex = 12;
			this->cheque_dateTimePicker->TabStop = false;
			// 
			// f_IsGroup_txt
			// 
			this->f_IsGroup_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f_IsGroup_txt->Location = System::Drawing::Point(179, 36);
			this->f_IsGroup_txt->Multiline = true;
			this->f_IsGroup_txt->Name = L"f_IsGroup_txt";
			this->f_IsGroup_txt->Size = System::Drawing::Size(121, 40);
			this->f_IsGroup_txt->TabIndex = 9;
			// 
			// bank_lbl
			// 
			this->bank_lbl->AutoEllipsis = true;
			this->bank_lbl->AutoSize = true;
			this->bank_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bank_lbl->Location = System::Drawing::Point(41, 193);
			this->bank_lbl->Name = L"bank_lbl";
			this->bank_lbl->Size = System::Drawing::Size(98, 26);
			this->bank_lbl->TabIndex = 11;
			this->bank_lbl->Text = L"bankname";
			this->bank_lbl->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::bank_lbl_Click);
			// 
			// bank_txt
			// 
			this->bank_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bank_txt->Location = System::Drawing::Point(179, 190);
			this->bank_txt->Multiline = true;
			this->bank_txt->Name = L"bank_txt";
			this->bank_txt->Size = System::Drawing::Size(180, 31);
			this->bank_txt->TabIndex = 7;
			// 
			// Cancel_btn
			// 
			this->Cancel_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Cancel_btn->AutoSize = true;
			this->Cancel_btn->ForeColor = System::Drawing::Color::Red;
			this->Cancel_btn->Location = System::Drawing::Point(40, 309);
			this->Cancel_btn->Name = L"Cancel_btn";
			this->Cancel_btn->Size = System::Drawing::Size(95, 35);
			this->Cancel_btn->TabIndex = 10;
			this->Cancel_btn->Text = L"Cancel";
			this->Cancel_btn->UseVisualStyleBackColor = true;
			this->Cancel_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::Cancel_btn_Click);
			// 
			// chequeid_txt
			// 
			this->chequeid_txt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->chequeid_txt->Location = System::Drawing::Point(179, 97);
			this->chequeid_txt->Multiline = true;
			this->chequeid_txt->Name = L"chequeid_txt";
			this->chequeid_txt->Size = System::Drawing::Size(121, 31);
			this->chequeid_txt->TabIndex = 0;
			this->chequeid_txt->TextChanged += gcnew System::EventHandler(this, &Form_Financial_Manager::chequeid_txt_TextChanged);
			// 
			// date_lbl
			// 
			this->date_lbl->AutoEllipsis = true;
			this->date_lbl->AutoSize = true;
			this->date_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->date_lbl->Location = System::Drawing::Point(324, 83);
			this->date_lbl->Name = L"date_lbl";
			this->date_lbl->Size = System::Drawing::Size(134, 23);
			this->date_lbl->TabIndex = 3;
			this->date_lbl->Text = L"dateofsubmission";
			// 
			// submittedby_lbl
			// 
			this->submittedby_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->submittedby_lbl->AutoEllipsis = true;
			this->submittedby_lbl->AutoSize = true;
			this->submittedby_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->submittedby_lbl->Location = System::Drawing::Point(41, 51);
			this->submittedby_lbl->Name = L"submittedby_lbl";
			this->submittedby_lbl->Size = System::Drawing::Size(70, 23);
			this->submittedby_lbl->TabIndex = 5;
			this->submittedby_lbl->Text = L"IsGroup";
			// 
			// Submit_btn
			// 
			this->Submit_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Submit_btn->AutoSize = true;
			this->Submit_btn->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Submit_btn->Location = System::Drawing::Point(439, 309);
			this->Submit_btn->Name = L"Submit_btn";
			this->Submit_btn->Size = System::Drawing::Size(109, 35);
			this->Submit_btn->TabIndex = 2;
			this->Submit_btn->Text = L"Approve";
			this->Submit_btn->UseVisualStyleBackColor = true;
			this->Submit_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::Submit_btn_Click);
			// 
			// Chequeid_lbl
			// 
			this->Chequeid_lbl->AutoEllipsis = true;
			this->Chequeid_lbl->AutoSize = true;
			this->Chequeid_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Chequeid_lbl->Location = System::Drawing::Point(41, 103);
			this->Chequeid_lbl->Name = L"Chequeid_lbl";
			this->Chequeid_lbl->Size = System::Drawing::Size(74, 23);
			this->Chequeid_lbl->TabIndex = 1;
			this->Chequeid_lbl->Text = L"Chequeid";
			// 
			// amount_lbl
			// 
			this->amount_lbl->AutoEllipsis = true;
			this->amount_lbl->AutoSize = true;
			this->amount_lbl->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->amount_lbl->Location = System::Drawing::Point(378, 193);
			this->amount_lbl->Name = L"amount_lbl";
			this->amount_lbl->Size = System::Drawing::Size(75, 26);
			this->amount_lbl->TabIndex = 4;
			this->amount_lbl->Text = L"amount";
			this->amount_lbl->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::amount_lbl_Click);
			// 
			// Contacts_tagPage
			// 
			this->Contacts_tagPage->AutoScroll = true;
			this->Contacts_tagPage->BackColor = System::Drawing::Color::Khaki;
			this->Contacts_tagPage->Controls->Add(this->btn_contacts);
			this->Contacts_tagPage->Cursor = System::Windows::Forms::Cursors::Default;
			this->Contacts_tagPage->Location = System::Drawing::Point(4, 32);
			this->Contacts_tagPage->Name = L"Contacts_tagPage";
			this->Contacts_tagPage->Size = System::Drawing::Size(1087, 647);
			this->Contacts_tagPage->TabIndex = 6;
			this->Contacts_tagPage->Text = L"Contacts";
			this->Contacts_tagPage->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::Contacts_tagPage_Click);
			// 
			// btn_contacts
			// 
			this->btn_contacts->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btn_contacts->Location = System::Drawing::Point(0, 0);
			this->btn_contacts->Name = L"btn_contacts";
			this->btn_contacts->Size = System::Drawing::Size(1087, 647);
			this->btn_contacts->TabIndex = 0;
			this->btn_contacts->Text = L"Click to view the contacts";
			this->btn_contacts->UseVisualStyleBackColor = true;
			this->btn_contacts->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::btn_contacts_Click);
			// 
			// Tasks_tabPage
			// 
			this->Tasks_tabPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Tasks_tabPage.BackgroundImage")));
			this->Tasks_tabPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Tasks_tabPage->Controls->Add(this->See_uploads_btn);
			this->Tasks_tabPage->Controls->Add(this->download_btn);
			this->Tasks_tabPage->Controls->Add(this->Performance_grbtn);
			this->Tasks_tabPage->Controls->Add(this->upload_btn);
			this->Tasks_tabPage->Controls->Add(this->f_assign_task_ind_btn);
			this->Tasks_tabPage->Controls->Add(this->f_assign_task_grp_btn);
			this->Tasks_tabPage->Location = System::Drawing::Point(4, 32);
			this->Tasks_tabPage->Name = L"Tasks_tabPage";
			this->Tasks_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Tasks_tabPage->Size = System::Drawing::Size(1087, 647);
			this->Tasks_tabPage->TabIndex = 9;
			this->Tasks_tabPage->Text = L"Tasks";
			this->Tasks_tabPage->ToolTipText = L"Manage Assigningg Tasks  to Volunteers,add volunteers etc";
			this->Tasks_tabPage->UseVisualStyleBackColor = true;
			// 
			// See_uploads_btn
			// 
			this->See_uploads_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->See_uploads_btn->AutoSize = true;
			this->See_uploads_btn->Location = System::Drawing::Point(77, 194);
			this->See_uploads_btn->Name = L"See_uploads_btn";
			this->See_uploads_btn->Size = System::Drawing::Size(238, 63);
			this->See_uploads_btn->TabIndex = 3;
			this->See_uploads_btn->Text = L"See_Uploads";
			this->See_uploads_btn->UseVisualStyleBackColor = true;
			this->See_uploads_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::See_uploads_btn_Click);
			// 
			// download_btn
			// 
			this->download_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->download_btn->AutoSize = true;
			this->download_btn->Location = System::Drawing::Point(829, 367);
			this->download_btn->Name = L"download_btn";
			this->download_btn->Size = System::Drawing::Size(238, 57);
			this->download_btn->TabIndex = 1;
			this->download_btn->Text = L"download";
			this->download_btn->UseVisualStyleBackColor = true;
			this->download_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::download_btn_Click);
			// 
			// Performance_grbtn
			// 
			this->Performance_grbtn->Location = System::Drawing::Point(213, 393);
			this->Performance_grbtn->Name = L"Performance_grbtn";
			this->Performance_grbtn->Size = System::Drawing::Size(238, 62);
			this->Performance_grbtn->TabIndex = 1;
			this->Performance_grbtn->Text = L"Performance_Graph";
			this->Performance_grbtn->UseVisualStyleBackColor = true;
			this->Performance_grbtn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::Performance_grbtn_Click);
			// 
			// upload_btn
			// 
			this->upload_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->upload_btn->AutoSize = true;
			this->upload_btn->Location = System::Drawing::Point(829, 53);
			this->upload_btn->Name = L"upload_btn";
			this->upload_btn->Size = System::Drawing::Size(238, 59);
			this->upload_btn->TabIndex = 0;
			this->upload_btn->Text = L"upload";
			this->upload_btn->UseVisualStyleBackColor = true;
			this->upload_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::upload_btn_Click);
			// 
			// f_assign_task_ind_btn
			// 
			this->f_assign_task_ind_btn->Location = System::Drawing::Point(611, 216);
			this->f_assign_task_ind_btn->Name = L"f_assign_task_ind_btn";
			this->f_assign_task_ind_btn->Size = System::Drawing::Size(238, 63);
			this->f_assign_task_ind_btn->TabIndex = 2;
			this->f_assign_task_ind_btn->Text = L"Assign_Task_To_Individual";
			this->f_assign_task_ind_btn->UseVisualStyleBackColor = true;
			this->f_assign_task_ind_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::f_assign_task_ind_btn_Click);
			// 
			// f_assign_task_grp_btn
			// 
			this->f_assign_task_grp_btn->Location = System::Drawing::Point(402, 44);
			this->f_assign_task_grp_btn->Name = L"f_assign_task_grp_btn";
			this->f_assign_task_grp_btn->Size = System::Drawing::Size(238, 68);
			this->f_assign_task_grp_btn->TabIndex = 0;
			this->f_assign_task_grp_btn->Text = L"AssignTaskToGroup";
			this->f_assign_task_grp_btn->UseVisualStyleBackColor = true;
			this->f_assign_task_grp_btn->Click += gcnew System::EventHandler(this, &Form_Financial_Manager::f_assign_task_grp_btn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3498, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current_time";
			// 
			// currenttime_timer
			// 
			this->currenttime_timer->Enabled = true;
			this->currenttime_timer->Interval = 1000;
			this->currenttime_timer->Tick += gcnew System::EventHandler(this, &Form_Financial_Manager::currenttime_timer_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form_Financial_Manager::openFileDialog1_FileOk);
			// 
			// Performance_contextMenuStrip
			// 
			this->Performance_contextMenuStrip->Name = L"Performance_contextMenuStrip";
			this->Performance_contextMenuStrip->Size = System::Drawing::Size(61, 4);
			// 
			// Form_Financial_Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1095, 683);
			this->Controls->Add(this->Profile_tabControl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"Form_Financial_Manager";
			this->Text = L"database";
			this->Load += gcnew System::EventHandler(this, &Form_Financial_Manager::Form_Financial_Manager_Load);
			this->Profile_tabControl->ResumeLayout(false);
			this->Home_tabPage->ResumeLayout(false);
			this->Home_tabPage->PerformLayout();
			this->Events_tabPage->ResumeLayout(false);
			this->Events_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Events_dataGridView))->EndInit();
			this->EventCalendar_tabPage->ResumeLayout(false);
			this->EventCalendar_tabPage->PerformLayout();
			this->ManageFinance_tabPage->ResumeLayout(false);
			this->ManageFinance_tabPage->PerformLayout();
			this->Cheque_groupBox->ResumeLayout(false);
			this->Cheque_groupBox->PerformLayout();
			this->Contacts_tagPage->ResumeLayout(false);
			this->Tasks_tabPage->ResumeLayout(false);
			this->Tasks_tabPage->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Financial_Manager_Load(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 //webBrowser^ wb=gcnew webBrowser();
			 System::Diagnostics::Process::Start(L"C:\\Program Files\\Internet Explorer\\iexplore.exe", L"http://iitg.ernet.in/");
		

        }
private: System::Void ammountAssuredToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 
MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from `database`.`events` ;", conDataBase ); 
MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader(); 
int count=0;
while (myReader->Read()) {
      // username->Text  +=(myReader->GetInt32(0) + ", " + myReader->GetString(1)+", "+myReader->GetString(2) + ", " + myReader->GetInt32(3)+ "\r\n");
   // Events_dataGridView->Ad(myReader->GetInt32(0) + ", " + myReader->GetString(1)+", "+myReader->GetInt32(2) +  "\r\n");
}

}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
			
			 
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
		
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
			
		/*	 
			 if(count>15 || count<1)
				 count=15;
			 else
			 {
				 switch(count)
				 {
				 case 1:
				 this->pictureBox1->Image=Image::FromFile("../1.jpg");
				 break;
				 this->timer1->Start();
				  case 2:
				 this->pictureBox1->Image=Image::FromFile("../2.jpg");
				 break;
				 this->timer1->Start();
				  case 3:
				 this->pictureBox1->Image=Image::FromFile("../3.jpg");
				 break;
				 this->timer1->Start();
				  case 4:
				 this->pictureBox1->Image=Image::FromFile("../4.jpg");
				 break;
				 this->timer1->Start();
				  case 5:
				 this->pictureBox1->Image=Image::FromFile("../5.jpg");
				 break;
				 this->timer1->Start();
				  case 6:
				 this->pictureBox1->Image=Image::FromFile("../6.jpg");
				 break;
				 this->timer1->Start();
				  case 7:
				 this->pictureBox1->Image=Image::FromFile("../7.jpg");
				 break;
				 this->timer1->Start();
				  case 8:
				 this->pictureBox1->Image=Image::FromFile("../8.jpg");
				 break;
				 this->timer1->Start();
				  case 9:
				 this->pictureBox1->Image=Image::FromFile("../9.jpg");
				 break;
				 this->timer1->Start();
				  case 10:
				 this->pictureBox1->Image=Image::FromFile("../10.jpg");
				 break;
				 this->timer1->Start();
				  case 11:
				 this->pictureBox1->Image=Image::FromFile("../11.jpg");
				 break;
				 this->timer1->Start();
				  case 12:
				 this->pictureBox1->Image=Image::FromFile("../12.jpg");
				 break;
				 this->timer1->Start();
				  case 13:
				 this->pictureBox1->Image=Image::FromFile("../13.jpg");
				 break;
				 this->timer1->Start();
				  case 14:
				 this->pictureBox1->Image=Image::FromFile("../14.jpg");
				 break;
				 this->timer1->Start();
				  case 15:
				 this->pictureBox1->Image=Image::FromFile("../15.jpg");
				 break;
				 this->timer1->Start();
				  default:
				 this->pictureBox1->Image=Image::FromFile("../1.jpg");
				 this->timer1->Start();
				 }
			 }
			
			 count--;*/
		 }
		 //count=System::timer1_Tick();
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			  System::Diagnostics::Process::Start(
	L"C:\\Program Files\\Internet Explorer\\iexplore.exe",
        L"https://webmail.iitg.ernet.in/src/webmail.php");
		 }
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			  System::Diagnostics::Process::Start(
	L"C:\\Program Files\\Internet Explorer\\iexplore.exe",
        L"http://www.google.com/");
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			  if(count2>15 || count2<1)
				 count2=15;
			 else
			 {
				// switch(count2)
				 //{
				// case 1:
				// this->pictureBox2->Image=Image::FromFile("../1.jpg");
				// break;
				// //this->timer1->Start();
				//  case 2:
				// this->pictureBox2->Image=Image::FromFile("../2.jpg");
				// break;
				//// this->timer1->Start();
				//  case 3:
				// this->pictureBox2->Image=Image::FromFile("../3.jpg");
				// break;
				//// this->timer1->Start();
				//  case 4:
				// this->pictureBox2->Image=Image::FromFile("../4.jpg");
				// break;
				// //this->timer1->Start();
				//  case 5:
				// this->pictureBox2->Image=Image::FromFile("../5.jpg");
				// break;
				// //this->timer1->Start();
				//  case 6:
				// this->pictureBox2->Image=Image::FromFile("../6.jpg");
				// break;
				//// this->timer1->Start();
				//  case 7:
				// this->pictureBox2->Image=Image::FromFile("../7.jpg");
				// break;
				// //this->timer1->Start();
				//  case 8:
				// this->pictureBox2->Image=Image::FromFile("../8.jpg");
				// break;
				// //this->timer1->Start();
				//  case 9:
				// this->pictureBox2->Image=Image::FromFile("../9.jpg");
				// break;
				//// this->timer1->Start();
				//  case 10:
				// this->pictureBox2->Image=Image::FromFile("../10.jpg");
				// break;
				//// this->timer1->Start();
				//  case 11:
				// this->pictureBox2->Image=Image::FromFile("../11.jpg");
				// break;
				//// this->timer1->Start();
				//  case 12:
				// this->pictureBox2->Image=Image::FromFile("../12.jpg");
				// break;
				// //this->timer1->Start();
				//  case 13:
				// this->pictureBox1->Image=Image::FromFile("../13.jpg");
				// break;
				// //this->timer1->Start();
				//  case 14:
				// this->pictureBox2->Image=Image::FromFile("../14.jpg");
				// break;
				//// this->timer1->Start();
				//  case 15:
				// this->pictureBox2->Image=Image::FromFile("../15.jpg");
				// break;
				//// this->timer1->Start();
				//  default:
				// this->pictureBox2->Image=Image::FromFile("../1.jpg");
				 //this->timer1->Start();
				// }
			 }
			
			 count2--;
		 }
private: System::Void Events_tabPage_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ManageFinance_tabPage_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void currenttime_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime datetime= DateTime::Now;
			 this->label1->Text=datetime.ToString();
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Notifications_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void financeRequests(){
String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 
MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from database.financerequests where financial_status='No' ;", conDataBase ); 
MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader(); 
if(cmdDataBase!=nullptr)
{
while (myReader->Read()) {
	
    this->FinanceRequests_listBox->Items->Add(  myReader->GetString("Name"));
	
	}
}else{
	MessageBox::Show("You have no finance rquests");
}
conDataBase->Close(); 
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
				  }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 compose^ cp1=gcnew compose();
			 cp1->ShowDialog();


		 }
private: System::Void ViewCalendar_button_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 
MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from database.calendar ;", conDataBase ); 
MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
	this->eventcal_textBox->Visible=true;
    this->eventcal_textBox->Text+=(myReader->GetInt32(0) + "  "  + myReader->GetString(1)+ "   " +myReader->GetString(2)+"\r\n");
	}

}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
			
			 
		 }
private: System::Void Upload_button_Click(System::Object^  sender, System::EventArgs^  e) {
			  Stream^ mystream;
			 //OpenFileDialog^ openFileDialog1=gcnew OpenFileDialog();
			 if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
			 {
				 if((mystream=openFileDialog1->OpenFile())!=nullptr)
				 {
					 String^ strfilename=(openFileDialog1->InitialDirectory+openFileDialog1->FileName);
//					 Upload_textBox->Text=strfilename;
					 mystream->Close();
				 }
			 }
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			  Stream^ mystream;
			 //OpenFileDialog^ openFileDialog1=gcnew OpenFileDialog();
			 if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
			 {
				 if((mystream=openFileDialog1->OpenFile())!=nullptr)
				 {
					 String^ strfilename=(openFileDialog1->InitialDirectory+openFileDialog1->FileName);
//					 Upload_textBox->Text=strfilename;
					 mystream->Close();
				 }
			 }
		 }
private: System::Void Contacts_tagPage_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void resoursewise_button_Click(System::Object^  sender, System::EventArgs^  e) {
			  
			resoursewise_amountdetails^ rs=gcnew resoursewise_amountdetails();
			rs->ShowDialog();
		 }
		 private: System::Void DeleteMessage_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


				  
private: System::Void eAccept_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*After accepting the request request to admin automatically sent*/
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 
MySqlCommand ^cmdDataBase = gcnew MySqlCommand("update database.financerequests set `financial_status`='Yes' ;", conDataBase ); 
MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
		}
MessageBox::Show("Done!");
MessageBox::Show("Approval request sent to admin");
conDataBase->Close(); 
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
 
    this->ename_txt->Text="";
	this->eDate_txt->Text="";
	this->eTime_txt->Text="";
	this->eDuration_txt->Text="";
	this->eVenue_txt->Text="";
	this->eResourses_txt->Text="";
	this->eStatus_txt->Text="";
	this->eCost_txt->Text="";
		 }

 
private: System::Void FinanceRequests_listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 
MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from database.financerequests where name='"+this->FinanceRequests_listBox->Text+"' ;", conDataBase ); 
MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader(); 
while (myReader->Read()) {
	this->ename_txt->Text=myReader->GetString(1);
	this->eDate_txt->Text=myReader->GetString(2);
	this->eTime_txt->Text=myReader->GetString(3);
	this->eDuration_txt->Text=myReader->GetString(4);
	this->eVenue_txt->Text=myReader->GetString(5);
	this->eResourses_txt->Text=myReader->GetString(6);
	this->eStatus_txt->Text=myReader->GetString(7);
	this->eCost_txt->Text=myReader->GetString(8);
	
	}

conDataBase->Close(); 
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
		 }
private: System::Void eResourses_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void eReject_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //connection and query code
 String^ constring1 = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase1 = gcnew MySqlConnection( constring1 ); 
MySqlCommand ^cmdDataBase1 = gcnew MySqlCommand("delete from database.financerequests where name='"+this->ename_txt->Text+"'  ;", conDataBase1 ); 
MySqlDataReader ^myReader1; 
try{
conDataBase1->Open(); 
myReader1 = cmdDataBase1->ExecuteReader(); 
while (myReader1->Read()) {
		}
MessageBox::Show("Request rejected and deleted from the database.Please send notification to the concerns");
conDataBase1->Close();
//empty the text boxes
	   ename_txt->Text="";
	eDate_txt->Text="";
	eTime_txt->Text="";
	eDuration_txt->Text="";
	eVenue_txt->Text="";
	eResourses_txt->Text="";
	eStatus_txt->Text="";
	eCost_txt->Text="";
	/*for ( int x = (ListBox1->Items->Count-1 ); x >= 0; x-- )
           {
             ListBox1->Items->RemoveAt( x );
           }*/

	this->FinanceRequests_listBox->Items->RemoveAt( this->FinanceRequests_listBox->SelectedIndex );
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
				
		 }
private: System::Void Loadcal_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 		   String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	 MySqlCommand ^cmdDataBase1 = gcnew MySqlCommand("select * from database.events ;", conDataBase ); 

try{
	
			   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter;
			   sda->SelectCommand = cmdDataBase1;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			   BindingSource^ bSource = gcnew BindingSource();

			   bSource->DataSource = dbdataset;
			   Events_dataGridView->DataSource=bSource;
			   sda->Update(dbdataset);
		 }
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
		 }
 private: System::Void RefreshTable_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				  }

private: System::Void UpdateCost_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->NewCost_txt->Text!="" && this->EventCostName_text->Text!="")
			 {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
               MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	           MySqlCommand ^cmdDataBase = gcnew MySqlCommand("update database.events set cost='"+this->NewCost_txt->Text+"' where NAME='"+this->EventCostName_text->Text+"';", conDataBase ); 
	           MySqlDataReader ^myReader1; 
               try{
                      conDataBase->Open(); 
                      myReader1 = cmdDataBase->ExecuteReader(); 
                       while (myReader1->Read()) {
		                }
                      MessageBox::Show("Cost Updated");
                   }catch(Exception^ ex)
                                {
	                         MessageBox::Show(ex->Message);
		                         }
			 }else{
				 MessageBox::Show("Name and cost field should not be empty ...Try again");
			      }

		 }
		 
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Submit_btn_Click(System::Object^  sender, System::EventArgs^  e) {
        if(this->f_IsGroup_txt->Text!="" && this->chequeid_txt->Text!=""&& this->bank_txt->Text!=""&& this->amt_txt->Text!="")
			 {
			     String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
                 MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	             MySqlCommand ^cmdDataBase = gcnew MySqlCommand("update `database`.`f_task_approval` set `status`='Yes' where task_name='"+this->f_grp_tasknm_txt->Text+"';", conDataBase ); 
	             MySqlDataReader ^myReader; 
               try{
                   conDataBase->Open(); 
                   myReader = cmdDataBase->ExecuteReader(); 
                 while (myReader->Read()) {
		              }
                  MessageBox::Show("Task successfully approved by financemanager");
				  myReader->Close();
                 }catch(Exception^ ex)
                         {
	                 MessageBox::Show(ex->Message);
		                 }
				 int curr_total;
				 int curr_available;
				  MySqlCommand ^cmdDataBase1 = gcnew MySqlCommand("select * from  `database`.`budget` ;", conDataBase );
				  try{
                   //conDataBase->Open(); 
                   myReader = cmdDataBase1->ExecuteReader(); 
                 while (myReader->Read()) {
					 curr_total=myReader->GetInt32("total");
					 curr_available=myReader->GetInt32("available");
				 }
                  MessageBox::Show("budget values total and available retrieved");
				  int x=Convert::ToInt32(this->amt_txt->Text);
				  curr_total=curr_total+x;//doubt how we will get integer entry
				  curr_available=curr_available+x;
				  myReader->Close();
                 }catch(Exception^ ex)
                         {
	                 MessageBox::Show(ex->Message);
		                 }
				  MySqlCommand ^cmdDataBase2= gcnew MySqlCommand("update `database`.`budget` set total='"+curr_total+"',available='"+curr_available+"';", conDataBase );
				    try{
                  // conDataBase->Open(); 
                   myReader = cmdDataBase2->ExecuteReader(); 
                 while (myReader->Read()) {
					 
				 }
                  MessageBox::Show("Budget values updated successfully,new values"+" "+curr_total+" "+curr_available);
				  myReader->Close();
                 }catch(Exception^ ex)
                         {
	                 MessageBox::Show(ex->Message);
		                 }
		

			}else{
				 MessageBox::Show("All field should be nonempty,...Try Again");
			 }
		if(this->f_IsGroup_txt->Text=="No")
		{
			  String^ constring1= L"datasource=localhost;port=3307;username=root;password=root"; 
MySqlConnection^ conDataBase1 = gcnew MySqlConnection( constring1 ); 
MySqlCommand ^cmdDataBase1 = gcnew MySqlCommand("update database.f_ind_tasks set `status`='completed' ;", conDataBase1 ); 
MySqlDataReader ^myReader1; 
try{
conDataBase1->Open(); 
myReader1 = cmdDataBase1->ExecuteReader(); 
while (myReader1->Read()) {
		}
MessageBox::Show("individual task status set to completed");
myReader1->Close(); 
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
String^ vol_name="";
MySqlCommand ^cmdDataBase2 = gcnew MySqlCommand("select ind_name from database.f_ind_tasks where task_name='"+this->f_grp_tasknm_txt->Text+"' ;", conDataBase1 );
             try{

myReader1 = cmdDataBase2->ExecuteReader(); 
while (myReader1->Read()) {
	vol_name=myReader1->GetString("ind_name");
		}
MessageBox::Show("individual name retrieved");
myReader1->Close(); 
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
int curr_task_comp;
MySqlCommand ^cmdDataBase3 = gcnew MySqlCommand("select tasks_completed from database.f_volunteers where name='"+vol_name+"' ;", conDataBase1 );
             try{

myReader1 = cmdDataBase3->ExecuteReader(); 
while (myReader1->Read()) {
	curr_task_comp=myReader1->GetInt32("tasks_completed");
		}
MessageBox::Show("current completed tasks of vol"+ " "+vol_name +" "+" retrieved");
myReader1->Close(); 
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);

}
curr_task_comp++;
 MySqlCommand ^cmdDataBase4= gcnew MySqlCommand("update `database`.`f_volunteers` set tasks_completed='"+curr_task_comp+"';", conDataBase1 );
				    try{
                   
                   myReader1 = cmdDataBase4->ExecuteReader(); 
                 while (myReader1->Read()) {
					 
				 }
                  MessageBox::Show("Task approved successfully,task completed of individual volunteer"+" "+curr_task_comp);
				  myReader1->Close();
                 }catch(Exception^ ex)
                         {
	                 MessageBox::Show(ex->Message);
		                 }
		conDataBase1->Close(); 

		}
		 }
private: System::Void Cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->chequeid_txt->Text="";
			 this->f_IsGroup_txt->Text="";
			 this->amt_txt->Text="";
			 this->bank_txt->Text="";
			 this->f_grp_tasknm_txt->Text="";
			 MessageBox::Show("Canceled!");
		 }
private: System::Void chequeid_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bank_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void amount_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void amt_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ChequeSearch_comboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }



private: System::Void chSearch_btn_Click(System::Object^  sender, System::EventArgs^  e) {
f_Search_Cheque^ fsc=gcnew f_Search_Cheque();
fsc->ShowDialog();
		   }
		   
		 
//private: System::Void ClrTxt_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 //}
//private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//	 }
//private: System::Void f_assign_task_grp_btn_Click(System::Object^  sender, System::EventArgs^  e) {
//			
		// }
//private: System::Void f_assign_task_ind_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	//		 assign_task_to_individual^ ati=gcnew assign_task_to_individual();
		//	 ati->ShowDialog();
		 //}
//private: System::Void f_addGroup_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	//	 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TaskApproval_request_listBox->Items->Clear();
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 void f_task_approval_request()
		 {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
              MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

	          MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.f_task_approval where `status`='No';",conDataBase);
			  MySqlDataReader^ myReader;
			   try{
				 conDataBase->Open();
				 myReader=cmdDataBase->ExecuteReader();
				 while(myReader->Read()){
					/* this->chequeid_txt->Text=myReader->GetInt32("chequeid").ToString();
					 this->bank_txt->Text=myReader->GetString("bank");
					 this->f_grp_tasknm_txt->Text=myReader->GetString("task_name");
					 this->amt_txt->Text=myReader->GetInt32("amount").ToString();
					 this->f_IsGroup_txt->Text=myReader->GetString("isgroup");*/
					 this->TaskApproval_request_listBox->Items->Add(myReader->GetString("task_name"));
				 }
				 conDataBase->Close();
				}
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }	 }
private: System::Void TaskApproval_request_listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring = L"datasource=localhost;port=3307;username=root;password=root"; 
              MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 
              MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from database.f_task_approval where task_name='"+this->TaskApproval_request_listBox->Text+"' ;", conDataBase ); 
              MySqlDataReader ^myReader; 
              try{
               conDataBase->Open(); 
               myReader = cmdDataBase->ExecuteReader(); 
             while (myReader->Read()) {
	             this->chequeid_txt->Text=myReader->GetInt32(0).ToString();
	             this->amt_txt->Text=myReader->GetInt32(1).ToString();
	             this->bank_txt->Text=myReader->GetString(3);
	             this->f_IsGroup_txt->Text=myReader->GetString(4);

	             this->f_grp_tasknm_txt->Text=myReader->GetString(6);
	                       }

                 conDataBase->Close(); 
                  }
             catch (Exception^ ex)
                   {
                  MessageBox::Show(ex->Message);

                  }
		 }
private: System::Void f_assign_task_ind_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 assign_task_to_individual^ ati=gcnew assign_task_to_individual();
			 ati->ShowDialog();
		 }
private: System::Void f_assign_task_grp_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			  f_assign_task_to_group^ fatg=gcnew f_assign_task_to_group();
	       	 fatg->ShowDialog();
		 }
private: System::Void eStatus_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_contacts_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form_Volunteers^ f=gcnew Form_Volunteers();
			 f->ShowDialog();


		 }
private: System::Void upload_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			 Upload_File^ f=gcnew Upload_File(username);
			 f->ShowDialog(); 


		 }
private: System::Void download_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			  getFiles^ f=gcnew getFiles();
			 f->ShowDialog(); 

		 }
private: System::Void See_uploads_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			  getFiles^ f=gcnew getFiles();
			 f->ShowDialog(); 
		 }
private: System::Void Performance_grbtn_Click(System::Object^  sender, System::EventArgs^  e) {

			 r_performance^ f=gcnew  r_performance(username);
			 f->ShowDialog(); 
		 }
};
}

