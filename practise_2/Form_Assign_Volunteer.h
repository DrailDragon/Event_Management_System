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
	/// Summary for Form_Assign_Volunteer
	/// </summary>
	public ref class Form_Assign_Volunteer : public System::Windows::Forms::Form
	{
	public:
		Form_Assign_Volunteer(void)
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
		~Form_Assign_Volunteer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Assign_Job;
	private: System::Windows::Forms::Label^  lbl_Username;
	private: System::Windows::Forms::TextBox^  txtbx_Username;
	protected: 


	private: System::Windows::Forms::Label^  lbl_Position;



	private: System::Windows::Forms::Label^  lbl_Email_Address;
	private: System::Windows::Forms::TextBox^  txtbx_Email_Address;


	private: System::Windows::Forms::Button^  btn_Delete;
	private: System::Windows::Forms::Button^  Update;
	private: System::Windows::Forms::ListBox^  ListBox1;
	private: System::Windows::Forms::ComboBox^  combobox_Position;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Assign_Volunteer::typeid));
			this->btn_Assign_Job = (gcnew System::Windows::Forms::Button());
			this->lbl_Username = (gcnew System::Windows::Forms::Label());
			this->txtbx_Username = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Position = (gcnew System::Windows::Forms::Label());
			this->lbl_Email_Address = (gcnew System::Windows::Forms::Label());
			this->txtbx_Email_Address = (gcnew System::Windows::Forms::TextBox());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->ListBox1 = (gcnew System::Windows::Forms::ListBox());
			this->combobox_Position = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Assign_Job
			// 
			this->btn_Assign_Job->Location = System::Drawing::Point(47, 291);
			this->btn_Assign_Job->Name = L"btn_Assign_Job";
			this->btn_Assign_Job->Size = System::Drawing::Size(86, 39);
			this->btn_Assign_Job->TabIndex = 0;
			this->btn_Assign_Job->Text = L"Assign Job";
			this->btn_Assign_Job->UseVisualStyleBackColor = true;
			this->btn_Assign_Job->Click += gcnew System::EventHandler(this, &Form_Assign_Volunteer::btn_Assign_Job_Click);
			// 
			// lbl_Username
			// 
			this->lbl_Username->AutoSize = true;
			this->lbl_Username->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Username->Location = System::Drawing::Point(246, 529);
			this->lbl_Username->Name = L"lbl_Username";
			this->lbl_Username->Size = System::Drawing::Size(84, 19);
			this->lbl_Username->TabIndex = 1;
			this->lbl_Username->Text = L"Username";
			// 
			// txtbx_Username
			// 
			this->txtbx_Username->Location = System::Drawing::Point(353, 529);
			this->txtbx_Username->Multiline = true;
			this->txtbx_Username->Name = L"txtbx_Username";
			this->txtbx_Username->Size = System::Drawing::Size(143, 27);
			this->txtbx_Username->TabIndex = 2;
			// 
			// lbl_Position
			// 
			this->lbl_Position->AutoSize = true;
			this->lbl_Position->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Position->Location = System::Drawing::Point(263, 403);
			this->lbl_Position->Name = L"lbl_Position";
			this->lbl_Position->Size = System::Drawing::Size(67, 19);
			this->lbl_Position->TabIndex = 3;
			this->lbl_Position->Text = L"Position";
			// 
			// lbl_Email_Address
			// 
			this->lbl_Email_Address->AutoSize = true;
			this->lbl_Email_Address->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Email_Address->Location = System::Drawing::Point(217, 291);
			this->lbl_Email_Address->Name = L"lbl_Email_Address";
			this->lbl_Email_Address->Size = System::Drawing::Size(113, 19);
			this->lbl_Email_Address->TabIndex = 5;
			this->lbl_Email_Address->Text = L"Email Address";
			// 
			// txtbx_Email_Address
			// 
			this->txtbx_Email_Address->Location = System::Drawing::Point(353, 291);
			this->txtbx_Email_Address->Multiline = true;
			this->txtbx_Email_Address->Name = L"txtbx_Email_Address";
			this->txtbx_Email_Address->Size = System::Drawing::Size(143, 29);
			this->txtbx_Email_Address->TabIndex = 6;
			// 
			// btn_Delete
			// 
			this->btn_Delete->Location = System::Drawing::Point(47, 529);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(86, 39);
			this->btn_Delete->TabIndex = 7;
			this->btn_Delete->Text = L"Delete";
			this->btn_Delete->UseVisualStyleBackColor = true;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &Form_Assign_Volunteer::btn_Delete_Click);
			// 
			// Update
			// 
			this->Update->Location = System::Drawing::Point(47, 403);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(86, 39);
			this->Update->TabIndex = 8;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = true;
			this->Update->Click += gcnew System::EventHandler(this, &Form_Assign_Volunteer::Update_Click);
			// 
			// ListBox1
			// 
			this->ListBox1->FormattingEnabled = true;
			this->ListBox1->Location = System::Drawing::Point(548, 213);
			this->ListBox1->Name = L"ListBox1";
			this->ListBox1->Size = System::Drawing::Size(416, 524);
			this->ListBox1->TabIndex = 9;
			this->ListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_Assign_Volunteer::listBox1_SelectedIndexChanged);
			// 
			// combobox_Position
			// 
			this->combobox_Position->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combobox_Position->FormattingEnabled = true;
			this->combobox_Position->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Event_Manager", L"Resource_Manager", 
				L"Financial_Manager", L"Volunteer", L"resource", L"finance", L"events"});
			this->combobox_Position->Location = System::Drawing::Point(353, 403);
			this->combobox_Position->Name = L"combobox_Position";
			this->combobox_Position->Size = System::Drawing::Size(143, 21);
			this->combobox_Position->TabIndex = 10;
			this->combobox_Position->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_Assign_Volunteer::combobox_Position_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->ImageLocation = L"C:\\Users\\praveen_1\\Downloads\\events.jpg";
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(964, 207);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// Form_Assign_Volunteer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(964, 740);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->combobox_Position);
			this->Controls->Add(this->ListBox1);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->btn_Delete);
			this->Controls->Add(this->txtbx_Email_Address);
			this->Controls->Add(this->lbl_Email_Address);
			this->Controls->Add(this->lbl_Position);
			this->Controls->Add(this->txtbx_Username);
			this->Controls->Add(this->lbl_Username);
			this->Controls->Add(this->btn_Assign_Job);
			this->Name = L"Form_Assign_Volunteer";
			this->Text = L"Form_Assign_Volunteer";
			this->Load += gcnew System::EventHandler(this, &Form_Assign_Volunteer::Form_Assign_Volunteer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Assign_Volunteer_Load(System::Object^  sender, System::EventArgs^  e) {
  
				 ListFill();

			 }

	private : void ListFill(void){
					   
		   	 String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.login ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
                 String^ temp_str = myReader->GetString("Username");
				 if(temp_str !="admin" )
				  ListBox1->Items->Add(temp_str);
		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
				   
					   
		 }

	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				String^ strvar=ListBox1->Text;

               String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from database.login where Username='"+strvar+"' ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {
				 
				  txtbx_Username->Text = myReader->GetString("Username");
				  combobox_Position->Text = myReader->GetString("Position");
				  txtbx_Email_Address->Text = myReader->GetString("Email_Address");
		      }
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }			   
		      // MessageBox::Show(ListBox1->Text);
			 }
private: System::Void btn_Assign_Job_Click(System::Object^  sender, System::EventArgs^  e) {

			
           String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update  database.login Set Position='"+this->combobox_Position->Text+"' where Username='"+this->txtbx_Username->Text+"' ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {				
				  
		      }
			 MessageBox::Show("The job has been successfully assigned.");
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }

		   if(combobox_Position->Text=="resource" || combobox_Position->Text=="finance" || combobox_Position->Text=="events")
		   {
		        String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Insert into  project.volunteers  (name,Section) values ('"+this->txtbx_Username->Text+"' , '"+this->combobox_Position->Text+"' ) ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {				
				  
		      }			 
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
		    		  		   
		   
		   }


		 }
private: System::Void btn_Delete_Click(System::Object^  sender, System::EventArgs^  e) {

         String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Delete from database.login  where Username='"+this->txtbx_Username->Text+"' ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {				
				 MessageBox::Show("The selected user has been successfully deleted.");
		      }
			
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }

		
			 for ( int x = (ListBox1->Items->Count-1 ); x >= 0; x-- )
           {
             ListBox1->Items->RemoveAt( x );
           }
           ListFill();
		    
		   this->txtbx_Username->Text = " ";
			this->combobox_Position->SelectedIndex = -1;
		   this->txtbx_Email_Address->Text = " ";


		     if(combobox_Position->Text=="resource" || combobox_Position->Text=="finance" || combobox_Position->Text=="events")
		   {
		        String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Delete from  project.volunteers  where name = '"+this->txtbx_Username->Text+"' ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {				
				  
		      }			 
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }
		    		  		   
		   
		   }
		   //MessageBox::Show(ListBox1->Text);


		 }
private: System::Void Update_Click(System::Object^  sender, System::EventArgs^  e) {

           String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update  database.login Set Position='"+this->combobox_Position->Text+"',Email_Address='"+this->txtbx_Email_Address->Text+"' where Username='"+this->txtbx_Username->Text+"' ;",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {				
				  MessageBox::Show("The details have been successfully Updated.");
		      }			
		   	 	   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }       

           if(combobox_Position->Text=="resource" || combobox_Position->Text=="finance" || combobox_Position->Text=="events")
		   {
		        String^ constring = L"datasource=localhost;port=3307;username=root;password=root";
		    MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Update  project.volunteers  Set Section = '"+this->combobox_Position->Text+"' where name='"+this->txtbx_Username->Text+"';",conDataBase);

			MySqlDataReader^ myReader;
		   try{
		   conDataBase->Open();
		   myReader=cmdDataBase->ExecuteReader();
		   		   
		    while(myReader->Read())
		      {				
				  
		      }			 
		   		   
		      }catch(Exception^ ex){
		   
		    MessageBox::Show(ex->Message);
		    }		    		  		   
		   
		   }

		 }
private: System::Void combobox_Position_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {



		 }
};
}
