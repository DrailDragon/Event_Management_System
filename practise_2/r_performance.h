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
	/// Summary for r_performance
	/// </summary>
	public ref class r_performance : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		r_performance(String^ username)
		{
			user=username;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~r_performance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(170, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Purple;
			series2->Legend = L"Legend1";
			series2->Name = L"performance";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(409, 540);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Purple;
			this->button1->Location = System::Drawing::Point(31, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Individual";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &r_performance::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Purple;
			this->button2->Location = System::Drawing::Point(31, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Groups";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &r_performance::button2_Click);
			// 
			// r_performance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 537);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"r_performance";
			this->Text = L"r_performance";
			this->Load += gcnew System::EventHandler(this, &r_performance::r_performance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: String^ getSection(void){
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from database.login where Username='"+user+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 String^ positn="NULL";
			 try{
				conDatabase->Open();
				myReader=cmdDatabase->ExecuteReader();
				while(myReader->Read()){
					String^ pos=myReader->GetString("Position");
					if(pos=="Resource_Manager")
						positn="resource";
					else if(pos=="Event_Manager")
						positn="events";
					else
						positn="finance";
				}
				myReader->Close();
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
			 //MessageBox::Show(positn);
			 return positn;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ sec=getSection();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.volunteers where section='"+sec+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 int givn=myReader->GetInt32("tasks_given");
					 int cmpl=myReader->GetInt32("tasks_completed");
					 int indx=(cmpl*50)/givn;
					 this->chart1->Series["performance"]->Points->AddXY(myReader->GetString("name"),indx);
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->chart1->Series["performance"]->Points->Clear();
			 String^ sec=getSection();
			 String^ constring=L"datasource=localhost;port=3307;username=root;password=root";
			 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("Select * from project.groups where section='"+sec+"';",conDatabase);
			 MySqlDataReader^ myReader;
			 try{
				 conDatabase->Open();
				 myReader=cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 int givn=myReader->GetInt32("tasks_given");
					 int cmpl=myReader->GetInt32("tasks_completed");
					 int indx=(cmpl*50)/givn;
					 this->chart1->Series["performance"]->Points->AddXY(myReader->GetString("name"),indx);
				 }
				 myReader->Close();
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void r_performance_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
