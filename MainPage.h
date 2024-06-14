#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			LogsPage->Hide();
			ReturnPage->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TopBG;
	protected:

	private: System::Windows::Forms::Label^ ProjectLabel;
	private: System::Windows::Forms::PictureBox^ Logo;
	protected:


	private: System::Windows::Forms::TableLayoutPanel^ ButtonPanel;





	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Panel^ HomePanel;
	private: System::Windows::Forms::Button^ HomeBtn;
	private: System::Windows::Forms::Panel^ HistoryPanel;

	private: System::Windows::Forms::Button^ HistoryBtn;

	private: System::Windows::Forms::Panel^ ReturningPanel;
	private: System::Windows::Forms::Button^ ReturnBtn;

	private: System::Windows::Forms::Panel^ BorrowingPanel;
	private: System::Windows::Forms::Button^ BorrowBtn;
	private: System::Windows::Forms::Panel^ LogsPage;
	private: System::Windows::Forms::Label^ LogsLabel;
	private: System::Windows::Forms::TextBox^ Logs;
	private: System::Windows::Forms::Panel^ ReturnPage;
	private: System::Windows::Forms::Label^ DesignationLabelR;
	private: System::Windows::Forms::TextBox^ DesignationR;
	private: System::Windows::Forms::Label^ StudentNumberR;
	private: System::Windows::Forms::TextBox^ SNumberR;
	private: System::Windows::Forms::Label^ NameLabelR;
	private: System::Windows::Forms::TextBox^ RName;
	private: System::Windows::Forms::Label^ ReturnLabel;




































































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
			this->TopBG = (gcnew System::Windows::Forms::Panel());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ProjectLabel = (gcnew System::Windows::Forms::Label());
			this->ButtonPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->HistoryPanel = (gcnew System::Windows::Forms::Panel());
			this->HistoryBtn = (gcnew System::Windows::Forms::Button());
			this->ReturningPanel = (gcnew System::Windows::Forms::Panel());
			this->ReturnBtn = (gcnew System::Windows::Forms::Button());
			this->BorrowingPanel = (gcnew System::Windows::Forms::Panel());
			this->BorrowBtn = (gcnew System::Windows::Forms::Button());
			this->HomePanel = (gcnew System::Windows::Forms::Panel());
			this->HomeBtn = (gcnew System::Windows::Forms::Button());
			this->LogsPage = (gcnew System::Windows::Forms::Panel());
			this->Logs = (gcnew System::Windows::Forms::TextBox());
			this->LogsLabel = (gcnew System::Windows::Forms::Label());
			this->ReturnPage = (gcnew System::Windows::Forms::Panel());
			this->DesignationLabelR = (gcnew System::Windows::Forms::Label());
			this->DesignationR = (gcnew System::Windows::Forms::TextBox());
			this->StudentNumberR = (gcnew System::Windows::Forms::Label());
			this->SNumberR = (gcnew System::Windows::Forms::TextBox());
			this->NameLabelR = (gcnew System::Windows::Forms::Label());
			this->RName = (gcnew System::Windows::Forms::TextBox());
			this->ReturnLabel = (gcnew System::Windows::Forms::Label());
			this->TopBG->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->ButtonPanel->SuspendLayout();
			this->HistoryPanel->SuspendLayout();
			this->ReturningPanel->SuspendLayout();
			this->BorrowingPanel->SuspendLayout();
			this->HomePanel->SuspendLayout();
			this->LogsPage->SuspendLayout();
			this->ReturnPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// TopBG
			// 
			this->TopBG->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TopBG->BackColor = System::Drawing::Color::Maroon;
			this->TopBG->Controls->Add(this->ExitBtn);
			this->TopBG->Controls->Add(this->Logo);
			this->TopBG->Controls->Add(this->ProjectLabel);
			this->TopBG->Location = System::Drawing::Point(-1, -1);
			this->TopBG->Name = L"TopBG";
			this->TopBG->Size = System::Drawing::Size(790, 86);
			this->TopBG->TabIndex = 0;
			// 
			// ExitBtn
			// 
			this->ExitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExitBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitBtn.Image")));
			this->ExitBtn->Location = System::Drawing::Point(740, 22);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(38, 28);
			this->ExitBtn->TabIndex = 2;
			this->ExitBtn->UseVisualStyleBackColor = true;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MainPage::ExitBtn_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(10, 10);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(50, 50);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 1;
			this->Logo->TabStop = false;
			// 
			// ProjectLabel
			// 
			this->ProjectLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ProjectLabel->AutoSize = true;
			this->ProjectLabel->BackColor = System::Drawing::Color::Maroon;
			this->ProjectLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 17));
			this->ProjectLabel->ForeColor = System::Drawing::Color::White;
			this->ProjectLabel->Location = System::Drawing::Point(70, 22);
			this->ProjectLabel->Name = L"ProjectLabel";
			this->ProjectLabel->Size = System::Drawing::Size(566, 27);
			this->ProjectLabel->TabIndex = 0;
			this->ProjectLabel->Text = L"PUP-Taguig CWTS Inventory Management System";
			// 
			// ButtonPanel
			// 
			this->ButtonPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ButtonPanel->BackColor = System::Drawing::Color::Snow;
			this->ButtonPanel->ColumnCount = 4;
			this->ButtonPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->ButtonPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->ButtonPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->ButtonPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->ButtonPanel->Controls->Add(this->HistoryPanel, 3, 0);
			this->ButtonPanel->Controls->Add(this->ReturningPanel, 2, 0);
			this->ButtonPanel->Controls->Add(this->BorrowingPanel, 1, 0);
			this->ButtonPanel->Controls->Add(this->HomePanel, 0, 0);
			this->ButtonPanel->Location = System::Drawing::Point(0, 70);
			this->ButtonPanel->Name = L"ButtonPanel";
			this->ButtonPanel->RowCount = 1;
			this->ButtonPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->ButtonPanel->Size = System::Drawing::Size(789, 69);
			this->ButtonPanel->TabIndex = 1;
			// 
			// HistoryPanel
			// 
			this->HistoryPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HistoryPanel->BackColor = System::Drawing::Color::Snow;
			this->HistoryPanel->Controls->Add(this->HistoryBtn);
			this->HistoryPanel->Location = System::Drawing::Point(596, 5);
			this->HistoryPanel->Margin = System::Windows::Forms::Padding(5);
			this->HistoryPanel->Name = L"HistoryPanel";
			this->HistoryPanel->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->HistoryPanel->Size = System::Drawing::Size(188, 59);
			this->HistoryPanel->TabIndex = 3;
			// 
			// HistoryBtn
			// 
			this->HistoryBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HistoryBtn->BackColor = System::Drawing::Color::Snow;
			this->HistoryBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HistoryBtn->FlatAppearance->BorderSize = 0;
			this->HistoryBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HistoryBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HistoryBtn->ForeColor = System::Drawing::Color::Maroon;
			this->HistoryBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->HistoryBtn->Location = System::Drawing::Point(0, 0);
			this->HistoryBtn->Margin = System::Windows::Forms::Padding(0);
			this->HistoryBtn->Name = L"HistoryBtn";
			this->HistoryBtn->Size = System::Drawing::Size(188, 54);
			this->HistoryBtn->TabIndex = 3;
			this->HistoryBtn->Text = L"History/Logs";
			this->HistoryBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->HistoryBtn->UseVisualStyleBackColor = false;
			this->HistoryBtn->Click += gcnew System::EventHandler(this, &MainPage::HistoryBtn_Click);
			// 
			// ReturningPanel
			// 
			this->ReturningPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReturningPanel->BackColor = System::Drawing::Color::Snow;
			this->ReturningPanel->Controls->Add(this->ReturnBtn);
			this->ReturningPanel->Location = System::Drawing::Point(399, 5);
			this->ReturningPanel->Margin = System::Windows::Forms::Padding(5);
			this->ReturningPanel->Name = L"ReturningPanel";
			this->ReturningPanel->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->ReturningPanel->Size = System::Drawing::Size(187, 59);
			this->ReturningPanel->TabIndex = 2;
			// 
			// ReturnBtn
			// 
			this->ReturnBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReturnBtn->BackColor = System::Drawing::Color::Snow;
			this->ReturnBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReturnBtn->FlatAppearance->BorderSize = 0;
			this->ReturnBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReturnBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnBtn->ForeColor = System::Drawing::Color::Maroon;
			this->ReturnBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ReturnBtn->Location = System::Drawing::Point(0, 0);
			this->ReturnBtn->Margin = System::Windows::Forms::Padding(0);
			this->ReturnBtn->Name = L"ReturnBtn";
			this->ReturnBtn->Size = System::Drawing::Size(187, 54);
			this->ReturnBtn->TabIndex = 3;
			this->ReturnBtn->Text = L"Returning Page";
			this->ReturnBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ReturnBtn->UseVisualStyleBackColor = false;
			this->ReturnBtn->Click += gcnew System::EventHandler(this, &MainPage::ReturnBtn_Click);
			// 
			// BorrowingPanel
			// 
			this->BorrowingPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BorrowingPanel->BackColor = System::Drawing::Color::Snow;
			this->BorrowingPanel->Controls->Add(this->BorrowBtn);
			this->BorrowingPanel->Location = System::Drawing::Point(202, 5);
			this->BorrowingPanel->Margin = System::Windows::Forms::Padding(5);
			this->BorrowingPanel->Name = L"BorrowingPanel";
			this->BorrowingPanel->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->BorrowingPanel->Size = System::Drawing::Size(187, 59);
			this->BorrowingPanel->TabIndex = 1;
			// 
			// BorrowBtn
			// 
			this->BorrowBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BorrowBtn->BackColor = System::Drawing::Color::Snow;
			this->BorrowBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BorrowBtn->FlatAppearance->BorderSize = 0;
			this->BorrowBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BorrowBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BorrowBtn->ForeColor = System::Drawing::Color::Maroon;
			this->BorrowBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->BorrowBtn->Location = System::Drawing::Point(0, 0);
			this->BorrowBtn->Margin = System::Windows::Forms::Padding(0);
			this->BorrowBtn->Name = L"BorrowBtn";
			this->BorrowBtn->Size = System::Drawing::Size(187, 54);
			this->BorrowBtn->TabIndex = 3;
			this->BorrowBtn->Text = L"Borrowiing Page";
			this->BorrowBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->BorrowBtn->UseVisualStyleBackColor = false;
			this->BorrowBtn->Click += gcnew System::EventHandler(this, &MainPage::BorrowBtn_Click);
			// 
			// HomePanel
			// 
			this->HomePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HomePanel->BackColor = System::Drawing::Color::Maroon;
			this->HomePanel->Controls->Add(this->HomeBtn);
			this->HomePanel->Location = System::Drawing::Point(5, 5);
			this->HomePanel->Margin = System::Windows::Forms::Padding(5);
			this->HomePanel->Name = L"HomePanel";
			this->HomePanel->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->HomePanel->Size = System::Drawing::Size(187, 59);
			this->HomePanel->TabIndex = 0;
			// 
			// HomeBtn
			// 
			this->HomeBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HomeBtn->BackColor = System::Drawing::Color::Snow;
			this->HomeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomeBtn->FlatAppearance->BorderSize = 0;
			this->HomeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HomeBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HomeBtn->ForeColor = System::Drawing::Color::Maroon;
			this->HomeBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->HomeBtn->Location = System::Drawing::Point(0, 0);
			this->HomeBtn->Margin = System::Windows::Forms::Padding(0);
			this->HomeBtn->Name = L"HomeBtn";
			this->HomeBtn->Size = System::Drawing::Size(187, 54);
			this->HomeBtn->TabIndex = 3;
			this->HomeBtn->Text = L"Home";
			this->HomeBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->HomeBtn->UseVisualStyleBackColor = false;
			this->HomeBtn->Click += gcnew System::EventHandler(this, &MainPage::HomeBtn_Click);
			// 
			// LogsPage
			// 
			this->LogsPage->Controls->Add(this->Logs);
			this->LogsPage->Controls->Add(this->LogsLabel);
			this->LogsPage->Location = System::Drawing::Point(0, 142);
			this->LogsPage->Name = L"LogsPage";
			this->LogsPage->Size = System::Drawing::Size(789, 345);
			this->LogsPage->TabIndex = 2;
			// 
			// Logs
			// 
			this->Logs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Logs->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Logs->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logs->Location = System::Drawing::Point(45, 60);
			this->Logs->Multiline = true;
			this->Logs->Name = L"Logs";
			this->Logs->ReadOnly = true;
			this->Logs->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Logs->Size = System::Drawing::Size(691, 238);
			this->Logs->TabIndex = 1;
			this->Logs->Text = L"Dito madidisplay yung mga return / borrow";
			// 
			// LogsLabel
			// 
			this->LogsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LogsLabel->AutoSize = true;
			this->LogsLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogsLabel->ForeColor = System::Drawing::Color::Maroon;
			this->LogsLabel->Location = System::Drawing::Point(41, 22);
			this->LogsLabel->Name = L"LogsLabel";
			this->LogsLabel->Size = System::Drawing::Size(124, 22);
			this->LogsLabel->TabIndex = 0;
			this->LogsLabel->Text = L"History/Logs";
			// 
			// ReturnPage
			// 
			this->ReturnPage->Controls->Add(this->DesignationLabelR);
			this->ReturnPage->Controls->Add(this->DesignationR);
			this->ReturnPage->Controls->Add(this->StudentNumberR);
			this->ReturnPage->Controls->Add(this->SNumberR);
			this->ReturnPage->Controls->Add(this->NameLabelR);
			this->ReturnPage->Controls->Add(this->RName);
			this->ReturnPage->Controls->Add(this->ReturnLabel);
			this->ReturnPage->Location = System::Drawing::Point(0, 142);
			this->ReturnPage->Name = L"ReturnPage";
			this->ReturnPage->Size = System::Drawing::Size(789, 345);
			this->ReturnPage->TabIndex = 4;
			// 
			// DesignationLabelR
			// 
			this->DesignationLabelR->AutoSize = true;
			this->DesignationLabelR->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DesignationLabelR->Location = System::Drawing::Point(57, 137);
			this->DesignationLabelR->Name = L"DesignationLabelR";
			this->DesignationLabelR->Size = System::Drawing::Size(75, 16);
			this->DesignationLabelR->TabIndex = 6;
			this->DesignationLabelR->Text = L"Designation";
			// 
			// DesignationR
			// 
			this->DesignationR->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DesignationR->Location = System::Drawing::Point(138, 135);
			this->DesignationR->Name = L"DesignationR";
			this->DesignationR->Size = System::Drawing::Size(228, 23);
			this->DesignationR->TabIndex = 5;
			// 
			// StudentNumberR
			// 
			this->StudentNumberR->AutoSize = true;
			this->StudentNumberR->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentNumberR->Location = System::Drawing::Point(57, 98);
			this->StudentNumberR->Name = L"StudentNumberR";
			this->StudentNumberR->Size = System::Drawing::Size(105, 16);
			this->StudentNumberR->TabIndex = 4;
			this->StudentNumberR->Text = L"Student Number:";
			// 
			// SNumberR
			// 
			this->SNumberR->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SNumberR->Location = System::Drawing::Point(168, 96);
			this->SNumberR->Name = L"SNumberR";
			this->SNumberR->Size = System::Drawing::Size(198, 23);
			this->SNumberR->TabIndex = 3;
			// 
			// NameLabelR
			// 
			this->NameLabelR->AutoSize = true;
			this->NameLabelR->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabelR->Location = System::Drawing::Point(57, 59);
			this->NameLabelR->Name = L"NameLabelR";
			this->NameLabelR->Size = System::Drawing::Size(45, 16);
			this->NameLabelR->TabIndex = 2;
			this->NameLabelR->Text = L"Name:";
			// 
			// RName
			// 
			this->RName->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RName->Location = System::Drawing::Point(108, 57);
			this->RName->Name = L"RName";
			this->RName->Size = System::Drawing::Size(258, 23);
			this->RName->TabIndex = 1;
			// 
			// ReturnLabel
			// 
			this->ReturnLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReturnLabel->AutoSize = true;
			this->ReturnLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnLabel->ForeColor = System::Drawing::Color::Maroon;
			this->ReturnLabel->Location = System::Drawing::Point(41, 22);
			this->ReturnLabel->Name = L"ReturnLabel";
			this->ReturnLabel->Size = System::Drawing::Size(152, 22);
			this->ReturnLabel->TabIndex = 0;
			this->ReturnLabel->Text = L"Returning Page";
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(788, 488);
			this->Controls->Add(this->ReturnPage);
			this->Controls->Add(this->LogsPage);
			this->Controls->Add(this->ButtonPanel);
			this->Controls->Add(this->TopBG);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->TopBG->ResumeLayout(false);
			this->TopBG->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ButtonPanel->ResumeLayout(false);
			this->HistoryPanel->ResumeLayout(false);
			this->ReturningPanel->ResumeLayout(false);
			this->BorrowingPanel->ResumeLayout(false);
			this->HomePanel->ResumeLayout(false);
			this->LogsPage->ResumeLayout(false);
			this->LogsPage->PerformLayout();
			this->ReturnPage->ResumeLayout(false);
			this->ReturnPage->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

private: System::Void HomeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Maroon;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
}
private: System::Void BorrowBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Maroon;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
}
private: System::Void ReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Maroon;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
	ReturnPage->Show();
}
private: System::Void HistoryBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Maroon;
	LogsPage->Show();
}
};
}
