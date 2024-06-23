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








	private: System::Windows::Forms::Button^ ExitBtn;

	private: System::Windows::Forms::Button^ HomeBtn;


	private: System::Windows::Forms::Button^ HistoryBtn;


	private: System::Windows::Forms::Button^ ReturnBtn;


	private: System::Windows::Forms::Button^ BorrowBtn;










    private: System::Windows::Forms::Panel^ HomePanel;
    private: System::Windows::Forms::Panel^ ReturningPanel;
    private: System::Windows::Forms::Panel^ HistoryPanel;
    private: System::Windows::Forms::TableLayoutPanel^ ButtonPanel;
    private: System::Windows::Forms::Panel^ BorrowingPanel;
    private: System::Windows::Forms::TabPage^ HistoryTab;
    private: System::Windows::Forms::Label^ Borrowingtitle;
    private: System::Windows::Forms::TabPage^ ReturnTab;
    private: System::Windows::Forms::Label^ ReturnLabel;
    private: System::Windows::Forms::TabPage^ BorrowTab;
    private: System::Windows::Forms::Label^ BorrowingLabel;
    private: System::Windows::Forms::TabPage^ HomeTab;
    private: System::Windows::Forms::Label^ PandiligMax;
    private: System::Windows::Forms::Label^ PalaMax;
    private: System::Windows::Forms::Label^ PalaLabel;
    private: System::Windows::Forms::Label^ TimbaMax;
    private: System::Windows::Forms::Label^ TimbaLabel;
    private: System::Windows::Forms::Label^ TingtingMax;
    private: System::Windows::Forms::Label^ TingtingLabel;
    private: System::Windows::Forms::Label^ ScissorMax;
    private: System::Windows::Forms::Label^ ScissorLabel;
    private: System::Windows::Forms::Label^ PandiligLabel;
    private: System::Windows::Forms::Label^ MopMax;
    private: System::Windows::Forms::Label^ MopLabel;
    private: System::Windows::Forms::Label^ DustPanMax;
    private: System::Windows::Forms::Label^ DustPanLabel;
    private: System::Windows::Forms::Label^ TamboMax;
    private: System::Windows::Forms::Label^ TamboLabel;
    private: System::Windows::Forms::PictureBox^ PandiligImg;
    private: System::Windows::Forms::PictureBox^ PalaImg;
    private: System::Windows::Forms::PictureBox^ TimbaImg;
    private: System::Windows::Forms::PictureBox^ TingtingImg;
    private: System::Windows::Forms::PictureBox^ ScissorImg;
    private: System::Windows::Forms::PictureBox^ MopImg;
    private: System::Windows::Forms::PictureBox^ DustPanImg;
    private: System::Windows::Forms::PictureBox^ TamboImg;
    private: System::Windows::Forms::TabControl^ MainTabControl;


















































































































































































































































































































    private: System::ComponentModel::IContainer^ components;











































































































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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
            this->TopBG = (gcnew System::Windows::Forms::Panel());
            this->ExitBtn = (gcnew System::Windows::Forms::Button());
            this->Logo = (gcnew System::Windows::Forms::PictureBox());
            this->ProjectLabel = (gcnew System::Windows::Forms::Label());
            this->HistoryBtn = (gcnew System::Windows::Forms::Button());
            this->ReturnBtn = (gcnew System::Windows::Forms::Button());
            this->BorrowBtn = (gcnew System::Windows::Forms::Button());
            this->HomeBtn = (gcnew System::Windows::Forms::Button());
            this->HomePanel = (gcnew System::Windows::Forms::Panel());
            this->ReturningPanel = (gcnew System::Windows::Forms::Panel());
            this->HistoryPanel = (gcnew System::Windows::Forms::Panel());
            this->ButtonPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->BorrowingPanel = (gcnew System::Windows::Forms::Panel());
            this->HistoryTab = (gcnew System::Windows::Forms::TabPage());
            this->Borrowingtitle = (gcnew System::Windows::Forms::Label());
            this->ReturnTab = (gcnew System::Windows::Forms::TabPage());
            this->ReturnLabel = (gcnew System::Windows::Forms::Label());
            this->BorrowTab = (gcnew System::Windows::Forms::TabPage());
            this->BorrowingLabel = (gcnew System::Windows::Forms::Label());
            this->HomeTab = (gcnew System::Windows::Forms::TabPage());
            this->TamboImg = (gcnew System::Windows::Forms::PictureBox());
            this->DustPanImg = (gcnew System::Windows::Forms::PictureBox());
            this->MopImg = (gcnew System::Windows::Forms::PictureBox());
            this->ScissorImg = (gcnew System::Windows::Forms::PictureBox());
            this->TingtingImg = (gcnew System::Windows::Forms::PictureBox());
            this->TimbaImg = (gcnew System::Windows::Forms::PictureBox());
            this->PalaImg = (gcnew System::Windows::Forms::PictureBox());
            this->PandiligImg = (gcnew System::Windows::Forms::PictureBox());
            this->TamboLabel = (gcnew System::Windows::Forms::Label());
            this->TamboMax = (gcnew System::Windows::Forms::Label());
            this->DustPanLabel = (gcnew System::Windows::Forms::Label());
            this->DustPanMax = (gcnew System::Windows::Forms::Label());
            this->MopLabel = (gcnew System::Windows::Forms::Label());
            this->MopMax = (gcnew System::Windows::Forms::Label());
            this->PandiligLabel = (gcnew System::Windows::Forms::Label());
            this->ScissorLabel = (gcnew System::Windows::Forms::Label());
            this->ScissorMax = (gcnew System::Windows::Forms::Label());
            this->TingtingLabel = (gcnew System::Windows::Forms::Label());
            this->TingtingMax = (gcnew System::Windows::Forms::Label());
            this->TimbaLabel = (gcnew System::Windows::Forms::Label());
            this->TimbaMax = (gcnew System::Windows::Forms::Label());
            this->PalaLabel = (gcnew System::Windows::Forms::Label());
            this->PalaMax = (gcnew System::Windows::Forms::Label());
            this->PandiligMax = (gcnew System::Windows::Forms::Label());
            this->MainTabControl = (gcnew System::Windows::Forms::TabControl());
            this->TopBG->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
            this->HomePanel->SuspendLayout();
            this->ReturningPanel->SuspendLayout();
            this->HistoryPanel->SuspendLayout();
            this->ButtonPanel->SuspendLayout();
            this->BorrowingPanel->SuspendLayout();
            this->HistoryTab->SuspendLayout();
            this->ReturnTab->SuspendLayout();
            this->BorrowTab->SuspendLayout();
            this->HomeTab->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TamboImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DustPanImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MopImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScissorImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TingtingImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TimbaImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PalaImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PandiligImg))->BeginInit();
            this->MainTabControl->SuspendLayout();
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
            this->BorrowBtn->Text = L"Borrowing Page";
            this->BorrowBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->BorrowBtn->UseVisualStyleBackColor = false;
            this->BorrowBtn->Click += gcnew System::EventHandler(this, &MainPage::BorrowBtn_Click);
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
            this->ButtonPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->ButtonPanel->Size = System::Drawing::Size(789, 69);
            this->ButtonPanel->TabIndex = 1;
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
            // HistoryTab
            // 
            this->HistoryTab->Controls->Add(this->Borrowingtitle);
            this->HistoryTab->Location = System::Drawing::Point(4, 22);
            this->HistoryTab->Name = L"HistoryTab";
            this->HistoryTab->Padding = System::Windows::Forms::Padding(3);
            this->HistoryTab->Size = System::Drawing::Size(781, 318);
            this->HistoryTab->TabIndex = 3;
            this->HistoryTab->Text = L"History Page";
            this->HistoryTab->UseVisualStyleBackColor = true;
            // 
            // Borrowingtitle
            // 
            this->Borrowingtitle->AutoSize = true;
            this->Borrowingtitle->BackColor = System::Drawing::Color::Transparent;
            this->Borrowingtitle->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->Borrowingtitle->Dock = System::Windows::Forms::DockStyle::Top;
            this->Borrowingtitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Borrowingtitle->ForeColor = System::Drawing::Color::Maroon;
            this->Borrowingtitle->Location = System::Drawing::Point(3, 3);
            this->Borrowingtitle->Name = L"Borrowingtitle";
            this->Borrowingtitle->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Borrowingtitle->Size = System::Drawing::Size(196, 24);
            this->Borrowingtitle->TabIndex = 7;
            this->Borrowingtitle->Text = L"Borrowing History";
            this->Borrowingtitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // ReturnTab
            // 
            this->ReturnTab->Controls->Add(this->ReturnLabel);
            this->ReturnTab->Location = System::Drawing::Point(4, 22);
            this->ReturnTab->Name = L"ReturnTab";
            this->ReturnTab->Padding = System::Windows::Forms::Padding(3);
            this->ReturnTab->Size = System::Drawing::Size(781, 318);
            this->ReturnTab->TabIndex = 5;
            this->ReturnTab->Text = L"Returing Page";
            this->ReturnTab->UseVisualStyleBackColor = true;
            // 
            // ReturnLabel
            // 
            this->ReturnLabel->AutoSize = true;
            this->ReturnLabel->BackColor = System::Drawing::Color::Transparent;
            this->ReturnLabel->Dock = System::Windows::Forms::DockStyle::Top;
            this->ReturnLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ReturnLabel->ForeColor = System::Drawing::Color::Maroon;
            this->ReturnLabel->Location = System::Drawing::Point(3, 3);
            this->ReturnLabel->Name = L"ReturnLabel";
            this->ReturnLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->ReturnLabel->Size = System::Drawing::Size(138, 24);
            this->ReturnLabel->TabIndex = 10;
            this->ReturnLabel->Text = L"Return Form";
            this->ReturnLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // BorrowTab
            // 
            this->BorrowTab->Controls->Add(this->BorrowingLabel);
            this->BorrowTab->Location = System::Drawing::Point(4, 22);
            this->BorrowTab->Name = L"BorrowTab";
            this->BorrowTab->Padding = System::Windows::Forms::Padding(3);
            this->BorrowTab->Size = System::Drawing::Size(781, 318);
            this->BorrowTab->TabIndex = 1;
            this->BorrowTab->Text = L"Borrowing Page";
            this->BorrowTab->UseVisualStyleBackColor = true;
            // 
            // BorrowingLabel
            // 
            this->BorrowingLabel->AutoSize = true;
            this->BorrowingLabel->BackColor = System::Drawing::Color::Transparent;
            this->BorrowingLabel->Dock = System::Windows::Forms::DockStyle::Top;
            this->BorrowingLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->BorrowingLabel->ForeColor = System::Drawing::Color::Maroon;
            this->BorrowingLabel->Location = System::Drawing::Point(3, 3);
            this->BorrowingLabel->Name = L"BorrowingLabel";
            this->BorrowingLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->BorrowingLabel->Size = System::Drawing::Size(177, 24);
            this->BorrowingLabel->TabIndex = 10;
            this->BorrowingLabel->Text = L"Borrowing Form";
            this->BorrowingLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // HomeTab
            // 
            this->HomeTab->Controls->Add(this->PandiligMax);
            this->HomeTab->Controls->Add(this->PalaMax);
            this->HomeTab->Controls->Add(this->PalaLabel);
            this->HomeTab->Controls->Add(this->TimbaMax);
            this->HomeTab->Controls->Add(this->TimbaLabel);
            this->HomeTab->Controls->Add(this->TingtingMax);
            this->HomeTab->Controls->Add(this->TingtingLabel);
            this->HomeTab->Controls->Add(this->ScissorMax);
            this->HomeTab->Controls->Add(this->ScissorLabel);
            this->HomeTab->Controls->Add(this->PandiligLabel);
            this->HomeTab->Controls->Add(this->MopMax);
            this->HomeTab->Controls->Add(this->MopLabel);
            this->HomeTab->Controls->Add(this->DustPanMax);
            this->HomeTab->Controls->Add(this->DustPanLabel);
            this->HomeTab->Controls->Add(this->TamboMax);
            this->HomeTab->Controls->Add(this->TamboLabel);
            this->HomeTab->Controls->Add(this->PandiligImg);
            this->HomeTab->Controls->Add(this->PalaImg);
            this->HomeTab->Controls->Add(this->TimbaImg);
            this->HomeTab->Controls->Add(this->TingtingImg);
            this->HomeTab->Controls->Add(this->ScissorImg);
            this->HomeTab->Controls->Add(this->MopImg);
            this->HomeTab->Controls->Add(this->DustPanImg);
            this->HomeTab->Controls->Add(this->TamboImg);
            this->HomeTab->Location = System::Drawing::Point(4, 22);
            this->HomeTab->Name = L"HomeTab";
            this->HomeTab->Padding = System::Windows::Forms::Padding(3);
            this->HomeTab->Size = System::Drawing::Size(781, 344);
            this->HomeTab->TabIndex = 4;
            this->HomeTab->Text = L"Home";
            this->HomeTab->UseVisualStyleBackColor = true;
            // 
            // TamboImg
            // 
            this->TamboImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TamboImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->TamboImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TamboImg.Image")));
            this->TamboImg->Location = System::Drawing::Point(17, 33);
            this->TamboImg->Name = L"TamboImg";
            this->TamboImg->Size = System::Drawing::Size(125, 119);
            this->TamboImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->TamboImg->TabIndex = 0;
            this->TamboImg->TabStop = false;
            // 
            // DustPanImg
            // 
            this->DustPanImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->DustPanImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->DustPanImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DustPanImg.Image")));
            this->DustPanImg->Location = System::Drawing::Point(198, 33);
            this->DustPanImg->Name = L"DustPanImg";
            this->DustPanImg->Size = System::Drawing::Size(125, 119);
            this->DustPanImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->DustPanImg->TabIndex = 1;
            this->DustPanImg->TabStop = false;
            // 
            // MopImg
            // 
            this->MopImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MopImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->MopImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MopImg.Image")));
            this->MopImg->Location = System::Drawing::Point(395, 33);
            this->MopImg->Name = L"MopImg";
            this->MopImg->Size = System::Drawing::Size(125, 119);
            this->MopImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->MopImg->TabIndex = 2;
            this->MopImg->TabStop = false;
            // 
            // ScissorImg
            // 
            this->ScissorImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ScissorImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->ScissorImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ScissorImg.Image")));
            this->ScissorImg->Location = System::Drawing::Point(592, 33);
            this->ScissorImg->Name = L"ScissorImg";
            this->ScissorImg->Size = System::Drawing::Size(125, 119);
            this->ScissorImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->ScissorImg->TabIndex = 3;
            this->ScissorImg->TabStop = false;
            // 
            // TingtingImg
            // 
            this->TingtingImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TingtingImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->TingtingImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TingtingImg.Image")));
            this->TingtingImg->Location = System::Drawing::Point(17, 186);
            this->TingtingImg->Name = L"TingtingImg";
            this->TingtingImg->Size = System::Drawing::Size(125, 119);
            this->TingtingImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->TingtingImg->TabIndex = 4;
            this->TingtingImg->TabStop = false;
            // 
            // TimbaImg
            // 
            this->TimbaImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TimbaImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->TimbaImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TimbaImg.Image")));
            this->TimbaImg->Location = System::Drawing::Point(198, 186);
            this->TimbaImg->Name = L"TimbaImg";
            this->TimbaImg->Size = System::Drawing::Size(125, 119);
            this->TimbaImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->TimbaImg->TabIndex = 5;
            this->TimbaImg->TabStop = false;
            // 
            // PalaImg
            // 
            this->PalaImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PalaImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->PalaImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PalaImg.Image")));
            this->PalaImg->Location = System::Drawing::Point(395, 186);
            this->PalaImg->Name = L"PalaImg";
            this->PalaImg->Size = System::Drawing::Size(125, 119);
            this->PalaImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->PalaImg->TabIndex = 6;
            this->PalaImg->TabStop = false;
            // 
            // PandiligImg
            // 
            this->PandiligImg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PandiligImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->PandiligImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PandiligImg.Image")));
            this->PandiligImg->Location = System::Drawing::Point(592, 186);
            this->PandiligImg->Name = L"PandiligImg";
            this->PandiligImg->Size = System::Drawing::Size(125, 119);
            this->PandiligImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->PandiligImg->TabIndex = 7;
            this->PandiligImg->TabStop = false;
            // 
            // TamboLabel
            // 
            this->TamboLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TamboLabel->AutoSize = true;
            this->TamboLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TamboLabel->Location = System::Drawing::Point(14, 161);
            this->TamboLabel->Name = L"TamboLabel";
            this->TamboLabel->Size = System::Drawing::Size(90, 16);
            this->TamboLabel->TabIndex = 8;
            this->TamboLabel->Text = L"Walis Tambo";
            // 
            // TamboMax
            // 
            this->TamboMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TamboMax->AutoSize = true;
            this->TamboMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TamboMax->Location = System::Drawing::Point(121, 161);
            this->TamboMax->Name = L"TamboMax";
            this->TamboMax->Size = System::Drawing::Size(21, 16);
            this->TamboMax->TabIndex = 9;
            this->TamboMax->Text = L"36";
            // 
            // DustPanLabel
            // 
            this->DustPanLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->DustPanLabel->AutoSize = true;
            this->DustPanLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DustPanLabel->Location = System::Drawing::Point(195, 161);
            this->DustPanLabel->Name = L"DustPanLabel";
            this->DustPanLabel->Size = System::Drawing::Size(62, 16);
            this->DustPanLabel->TabIndex = 10;
            this->DustPanLabel->Text = L"Dust Pan\r\n";
            // 
            // DustPanMax
            // 
            this->DustPanMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->DustPanMax->AutoSize = true;
            this->DustPanMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DustPanMax->Location = System::Drawing::Point(302, 161);
            this->DustPanMax->Name = L"DustPanMax";
            this->DustPanMax->Size = System::Drawing::Size(21, 16);
            this->DustPanMax->TabIndex = 11;
            this->DustPanMax->Text = L"67\r\n";
            // 
            // MopLabel
            // 
            this->MopLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MopLabel->AutoSize = true;
            this->MopLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MopLabel->Location = System::Drawing::Point(392, 161);
            this->MopLabel->Name = L"MopLabel";
            this->MopLabel->Size = System::Drawing::Size(36, 16);
            this->MopLabel->TabIndex = 12;
            this->MopLabel->Text = L"Mop\r\n";
            // 
            // MopMax
            // 
            this->MopMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MopMax->AutoSize = true;
            this->MopMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MopMax->Location = System::Drawing::Point(506, 161);
            this->MopMax->Name = L"MopMax";
            this->MopMax->Size = System::Drawing::Size(14, 16);
            this->MopMax->TabIndex = 13;
            this->MopMax->Text = L"6\r\n";
            // 
            // PandiligLabel
            // 
            this->PandiligLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PandiligLabel->AutoSize = true;
            this->PandiligLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PandiligLabel->Location = System::Drawing::Point(589, 314);
            this->PandiligLabel->Name = L"PandiligLabel";
            this->PandiligLabel->Size = System::Drawing::Size(97, 16);
            this->PandiligLabel->TabIndex = 14;
            this->PandiligLabel->Text = L"Watering Can";
            // 
            // ScissorLabel
            // 
            this->ScissorLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ScissorLabel->AutoSize = true;
            this->ScissorLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ScissorLabel->Location = System::Drawing::Point(589, 161);
            this->ScissorLabel->Name = L"ScissorLabel";
            this->ScissorLabel->Size = System::Drawing::Size(111, 16);
            this->ScissorLabel->TabIndex = 14;
            this->ScissorLabel->Text = L"Garden Scissors\r\n";
            // 
            // ScissorMax
            // 
            this->ScissorMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ScissorMax->AutoSize = true;
            this->ScissorMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ScissorMax->Location = System::Drawing::Point(703, 161);
            this->ScissorMax->Name = L"ScissorMax";
            this->ScissorMax->Size = System::Drawing::Size(14, 16);
            this->ScissorMax->TabIndex = 15;
            this->ScissorMax->Text = L"6";
            // 
            // TingtingLabel
            // 
            this->TingtingLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TingtingLabel->AutoSize = true;
            this->TingtingLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TingtingLabel->Location = System::Drawing::Point(14, 314);
            this->TingtingLabel->Name = L"TingtingLabel";
            this->TingtingLabel->Size = System::Drawing::Size(98, 16);
            this->TingtingLabel->TabIndex = 16;
            this->TingtingLabel->Text = L"Walis Tingting";
            // 
            // TingtingMax
            // 
            this->TingtingMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TingtingMax->AutoSize = true;
            this->TingtingMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TingtingMax->Location = System::Drawing::Point(121, 314);
            this->TingtingMax->Name = L"TingtingMax";
            this->TingtingMax->Size = System::Drawing::Size(21, 16);
            this->TingtingMax->TabIndex = 17;
            this->TingtingMax->Text = L"32";
            // 
            // TimbaLabel
            // 
            this->TimbaLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TimbaLabel->AutoSize = true;
            this->TimbaLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TimbaLabel->Location = System::Drawing::Point(195, 314);
            this->TimbaLabel->Name = L"TimbaLabel";
            this->TimbaLabel->Size = System::Drawing::Size(51, 16);
            this->TimbaLabel->TabIndex = 18;
            this->TimbaLabel->Text = L"Bucket";
            // 
            // TimbaMax
            // 
            this->TimbaMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TimbaMax->AutoSize = true;
            this->TimbaMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TimbaMax->Location = System::Drawing::Point(302, 314);
            this->TimbaMax->Name = L"TimbaMax";
            this->TimbaMax->Size = System::Drawing::Size(21, 16);
            this->TimbaMax->TabIndex = 19;
            this->TimbaMax->Text = L"54";
            // 
            // PalaLabel
            // 
            this->PalaLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PalaLabel->AutoSize = true;
            this->PalaLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PalaLabel->Location = System::Drawing::Point(392, 314);
            this->PalaLabel->Name = L"PalaLabel";
            this->PalaLabel->Size = System::Drawing::Size(49, 16);
            this->PalaLabel->TabIndex = 20;
            this->PalaLabel->Text = L"Shovel";
            // 
            // PalaMax
            // 
            this->PalaMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PalaMax->AutoSize = true;
            this->PalaMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PalaMax->Location = System::Drawing::Point(506, 314);
            this->PalaMax->Name = L"PalaMax";
            this->PalaMax->Size = System::Drawing::Size(14, 16);
            this->PalaMax->TabIndex = 21;
            this->PalaMax->Text = L"4";
            // 
            // PandiligMax
            // 
            this->PandiligMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PandiligMax->AutoSize = true;
            this->PandiligMax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PandiligMax->Location = System::Drawing::Point(703, 314);
            this->PandiligMax->Name = L"PandiligMax";
            this->PandiligMax->Size = System::Drawing::Size(14, 16);
            this->PandiligMax->TabIndex = 22;
            this->PandiligMax->Text = L"3";
            // 
            // MainTabControl
            // 
            this->MainTabControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->MainTabControl->Controls->Add(this->HomeTab);
            this->MainTabControl->Controls->Add(this->BorrowTab);
            this->MainTabControl->Controls->Add(this->ReturnTab);
            this->MainTabControl->Controls->Add(this->HistoryTab);
            this->MainTabControl->Location = System::Drawing::Point(0, 119);
            this->MainTabControl->Name = L"MainTabControl";
            this->MainTabControl->SelectedIndex = 0;
            this->MainTabControl->Size = System::Drawing::Size(789, 370);
            this->MainTabControl->TabIndex = 2;
            // 
            // MainPage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(788, 488);
            this->Controls->Add(this->ButtonPanel);
            this->Controls->Add(this->TopBG);
            this->Controls->Add(this->MainTabControl);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MainPage";
            this->Text = L"MainPage";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->TopBG->ResumeLayout(false);
            this->TopBG->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
            this->HomePanel->ResumeLayout(false);
            this->ReturningPanel->ResumeLayout(false);
            this->HistoryPanel->ResumeLayout(false);
            this->ButtonPanel->ResumeLayout(false);
            this->BorrowingPanel->ResumeLayout(false);
            this->HistoryTab->ResumeLayout(false);
            this->HistoryTab->PerformLayout();
            this->ReturnTab->ResumeLayout(false);
            this->ReturnTab->PerformLayout();
            this->BorrowTab->ResumeLayout(false);
            this->BorrowTab->PerformLayout();
            this->HomeTab->ResumeLayout(false);
            this->HomeTab->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TamboImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DustPanImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MopImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScissorImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TingtingImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TimbaImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PalaImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PandiligImg))->EndInit();
            this->MainTabControl->ResumeLayout(false);
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
    HomeTab->
}
private: System::Void BorrowBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Maroon;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
    BorrowTab->Show();
}
private: System::Void ReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Maroon;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
    ReturnTab->Show();
}
private: System::Void HistoryBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Maroon;
    HistoryTab->Show();
}
};
}
