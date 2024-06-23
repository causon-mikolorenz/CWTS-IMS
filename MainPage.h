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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ DashboardBtn;
	private: System::Windows::Forms::Button^ BRBtn;
	private: System::Windows::Forms::Button^ LogBtn;
	private: System::Windows::Forms::Button^ HomeBtn;
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
    private: System::Windows::Forms::Panel^ HomeTab;
    private: System::Windows::Forms::Label^ HomeLabel;
    private: System::Windows::Forms::Panel^ ReturnTab;




    private: System::Windows::Forms::Label^ BorrowLabel;
    private: System::Windows::Forms::Panel^ BorrowTab;


    private: System::Windows::Forms::Panel^ HistoryTab;




























    private: System::Windows::Forms::Label^ ReturnLabel;
    private: System::Windows::Forms::Label^ HistoryLabel;
    private: System::Windows::Forms::TableLayoutPanel^ DashboardTable;
    private: System::Windows::Forms::Label^ BorrowedNum;
    private: System::Windows::Forms::Label^ TableHeader;
private: System::Windows::Forms::Label^ Tingtingleft;

private: System::Windows::Forms::Label^ WalisTamboLabel;
private: System::Windows::Forms::Label^ Total;
private: System::Windows::Forms::Label^ TamboMax;

private: System::Windows::Forms::Label^ Tamboleft;
private: System::Windows::Forms::Label^ TamboLabel;


private: System::Windows::Forms::Label^ TingtingMax;
private: System::Windows::Forms::Label^ DustPanLabel;
private: System::Windows::Forms::Label^ DustPanleft;


private: System::Windows::Forms::Label^ DustPanMax;
private: System::Windows::Forms::Label^ PandliligMax;

private: System::Windows::Forms::Label^ Pandiligleft;

private: System::Windows::Forms::Label^ PandliligLabel;
private: System::Windows::Forms::Label^ PalaMax;


private: System::Windows::Forms::Label^ Palaleft;

private: System::Windows::Forms::Label^ PalalLabel;
private: System::Windows::Forms::Label^ ScissorMax;


private: System::Windows::Forms::Label^ Scissorleft;

private: System::Windows::Forms::Label^ ScissorLabel;
private: System::Windows::Forms::Label^ MopMax;


private: System::Windows::Forms::Label^ Mopleft;

private: System::Windows::Forms::Label^ MopLabel;
private: System::Windows::Forms::Label^ TimbaMax;


private: System::Windows::Forms::Label^ Timbaleft;

private: System::Windows::Forms::Label^ TimbaLabel;
private: System::Windows::Forms::TextBox^ Logs;

private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ DateandTimeR;


private: System::Windows::Forms::Timer^ Timer;



private: System::Windows::Forms::Label^ ReturnMsg;















private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;


private: System::Windows::Forms::Label^ NameR;
private: System::Windows::Forms::Button^ BorrowButton;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Button^ ReturnButton;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ DesigR;
private: System::Windows::Forms::Label^ ProgramR;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ Pandiligr;
private: System::Windows::Forms::Label^ Shovelr;
private: System::Windows::Forms::Label^ Scissorr;
private: System::Windows::Forms::Label^ Mopr;
private: System::Windows::Forms::Label^ Timbar;
private: System::Windows::Forms::Label^ DustPanr;
private: System::Windows::Forms::Label^ Tambor;
private: System::Windows::Forms::Label^ Tingtingr;




























































































































































































































































































































































    private: System::ComponentModel::IContainer^ components;











































































































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
            this->components = (gcnew System::ComponentModel::Container());
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
            this->HomeTab = (gcnew System::Windows::Forms::Panel());
            this->DashboardTable = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->PandliligMax = (gcnew System::Windows::Forms::Label());
            this->Pandiligleft = (gcnew System::Windows::Forms::Label());
            this->PandliligLabel = (gcnew System::Windows::Forms::Label());
            this->PalaMax = (gcnew System::Windows::Forms::Label());
            this->Palaleft = (gcnew System::Windows::Forms::Label());
            this->PalalLabel = (gcnew System::Windows::Forms::Label());
            this->ScissorMax = (gcnew System::Windows::Forms::Label());
            this->Scissorleft = (gcnew System::Windows::Forms::Label());
            this->ScissorLabel = (gcnew System::Windows::Forms::Label());
            this->MopMax = (gcnew System::Windows::Forms::Label());
            this->Mopleft = (gcnew System::Windows::Forms::Label());
            this->MopLabel = (gcnew System::Windows::Forms::Label());
            this->TimbaMax = (gcnew System::Windows::Forms::Label());
            this->Timbaleft = (gcnew System::Windows::Forms::Label());
            this->TimbaLabel = (gcnew System::Windows::Forms::Label());
            this->DustPanleft = (gcnew System::Windows::Forms::Label());
            this->DustPanLabel = (gcnew System::Windows::Forms::Label());
            this->TamboMax = (gcnew System::Windows::Forms::Label());
            this->Tamboleft = (gcnew System::Windows::Forms::Label());
            this->TamboLabel = (gcnew System::Windows::Forms::Label());
            this->TingtingMax = (gcnew System::Windows::Forms::Label());
            this->Tingtingleft = (gcnew System::Windows::Forms::Label());
            this->WalisTamboLabel = (gcnew System::Windows::Forms::Label());
            this->Total = (gcnew System::Windows::Forms::Label());
            this->BorrowedNum = (gcnew System::Windows::Forms::Label());
            this->TableHeader = (gcnew System::Windows::Forms::Label());
            this->DustPanMax = (gcnew System::Windows::Forms::Label());
            this->HomeLabel = (gcnew System::Windows::Forms::Label());
            this->ReturnTab = (gcnew System::Windows::Forms::Panel());
            this->BorrowLabel = (gcnew System::Windows::Forms::Label());
            this->BorrowTab = (gcnew System::Windows::Forms::Panel());
            this->BorrowButton = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->NameR = (gcnew System::Windows::Forms::Label());
            this->ReturnMsg = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->DateandTimeR = (gcnew System::Windows::Forms::Label());
            this->ReturnLabel = (gcnew System::Windows::Forms::Label());
            this->HistoryTab = (gcnew System::Windows::Forms::Panel());
            this->Logs = (gcnew System::Windows::Forms::TextBox());
            this->HistoryLabel = (gcnew System::Windows::Forms::Label());
            this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->ReturnButton = (gcnew System::Windows::Forms::Button());
            this->Tambor = (gcnew System::Windows::Forms::Label());
            this->DustPanr = (gcnew System::Windows::Forms::Label());
            this->Timbar = (gcnew System::Windows::Forms::Label());
            this->Mopr = (gcnew System::Windows::Forms::Label());
            this->Scissorr = (gcnew System::Windows::Forms::Label());
            this->Shovelr = (gcnew System::Windows::Forms::Label());
            this->Pandiligr = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->ProgramR = (gcnew System::Windows::Forms::Label());
            this->DesigR = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->Tingtingr = (gcnew System::Windows::Forms::Label());
            this->TopBG->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
            this->HomePanel->SuspendLayout();
            this->ReturningPanel->SuspendLayout();
            this->HistoryPanel->SuspendLayout();
            this->ButtonPanel->SuspendLayout();
            this->BorrowingPanel->SuspendLayout();
            this->HomeTab->SuspendLayout();
            this->DashboardTable->SuspendLayout();
            this->ReturnTab->SuspendLayout();
            this->BorrowTab->SuspendLayout();
            this->HistoryTab->SuspendLayout();
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
            this->ButtonPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
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
            // HomeTab
            // 
            this->HomeTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->HomeTab->Controls->Add(this->DashboardTable);
            this->HomeTab->Controls->Add(this->HomeLabel);
            this->HomeTab->Location = System::Drawing::Point(0, 138);
            this->HomeTab->Name = L"HomeTab";
            this->HomeTab->Size = System::Drawing::Size(788, 350);
            this->HomeTab->TabIndex = 2;
            // 
            // DashboardTable
            // 
            this->DashboardTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->DashboardTable->ColumnCount = 3;
            this->DashboardTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                60)));
            this->DashboardTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->DashboardTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->DashboardTable->Controls->Add(this->PandliligMax, 2, 8);
            this->DashboardTable->Controls->Add(this->Pandiligleft, 1, 8);
            this->DashboardTable->Controls->Add(this->PandliligLabel, 0, 8);
            this->DashboardTable->Controls->Add(this->PalaMax, 2, 7);
            this->DashboardTable->Controls->Add(this->Palaleft, 1, 7);
            this->DashboardTable->Controls->Add(this->PalalLabel, 0, 7);
            this->DashboardTable->Controls->Add(this->ScissorMax, 2, 6);
            this->DashboardTable->Controls->Add(this->Scissorleft, 1, 6);
            this->DashboardTable->Controls->Add(this->ScissorLabel, 0, 6);
            this->DashboardTable->Controls->Add(this->MopMax, 2, 5);
            this->DashboardTable->Controls->Add(this->Mopleft, 1, 5);
            this->DashboardTable->Controls->Add(this->MopLabel, 0, 5);
            this->DashboardTable->Controls->Add(this->TimbaMax, 2, 4);
            this->DashboardTable->Controls->Add(this->Timbaleft, 1, 4);
            this->DashboardTable->Controls->Add(this->TimbaLabel, 0, 4);
            this->DashboardTable->Controls->Add(this->DustPanleft, 1, 3);
            this->DashboardTable->Controls->Add(this->DustPanLabel, 0, 3);
            this->DashboardTable->Controls->Add(this->TamboMax, 2, 2);
            this->DashboardTable->Controls->Add(this->Tamboleft, 1, 2);
            this->DashboardTable->Controls->Add(this->TamboLabel, 0, 2);
            this->DashboardTable->Controls->Add(this->TingtingMax, 2, 1);
            this->DashboardTable->Controls->Add(this->Tingtingleft, 1, 1);
            this->DashboardTable->Controls->Add(this->WalisTamboLabel, 0, 1);
            this->DashboardTable->Controls->Add(this->Total, 2, 0);
            this->DashboardTable->Controls->Add(this->BorrowedNum, 1, 0);
            this->DashboardTable->Controls->Add(this->TableHeader, 0, 0);
            this->DashboardTable->Controls->Add(this->DustPanMax, 2, 3);
            this->DashboardTable->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->DashboardTable->Location = System::Drawing::Point(22, 58);
            this->DashboardTable->Name = L"DashboardTable";
            this->DashboardTable->RowCount = 9;
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
            this->DashboardTable->Size = System::Drawing::Size(742, 269);
            this->DashboardTable->TabIndex = 1;
            // 
            // PandliligMax
            // 
            this->PandliligMax->AutoSize = true;
            this->PandliligMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->PandliligMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PandliligMax->Location = System::Drawing::Point(596, 232);
            this->PandliligMax->Name = L"PandliligMax";
            this->PandliligMax->Size = System::Drawing::Size(143, 37);
            this->PandliligMax->TabIndex = 26;
            this->PandliligMax->Text = L"3";
            this->PandliligMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Pandiligleft
            // 
            this->Pandiligleft->AutoSize = true;
            this->Pandiligleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Pandiligleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Pandiligleft->Location = System::Drawing::Point(448, 232);
            this->Pandiligleft->Name = L"Pandiligleft";
            this->Pandiligleft->Size = System::Drawing::Size(142, 37);
            this->Pandiligleft->TabIndex = 25;
            this->Pandiligleft->Text = L"3";
            this->Pandiligleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // PandliligLabel
            // 
            this->PandliligLabel->AutoSize = true;
            this->PandliligLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->PandliligLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->PandliligLabel->Location = System::Drawing::Point(3, 232);
            this->PandliligLabel->Name = L"PandliligLabel";
            this->PandliligLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->PandliligLabel->Size = System::Drawing::Size(439, 37);
            this->PandliligLabel->TabIndex = 24;
            this->PandliligLabel->Text = L"Watering Can";
            this->PandliligLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // PalaMax
            // 
            this->PalaMax->AutoSize = true;
            this->PalaMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->PalaMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PalaMax->Location = System::Drawing::Point(596, 203);
            this->PalaMax->Name = L"PalaMax";
            this->PalaMax->Size = System::Drawing::Size(143, 29);
            this->PalaMax->TabIndex = 23;
            this->PalaMax->Text = L"4";
            this->PalaMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Palaleft
            // 
            this->Palaleft->AutoSize = true;
            this->Palaleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Palaleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Palaleft->Location = System::Drawing::Point(448, 203);
            this->Palaleft->Name = L"Palaleft";
            this->Palaleft->Size = System::Drawing::Size(142, 29);
            this->Palaleft->TabIndex = 22;
            this->Palaleft->Text = L"4";
            this->Palaleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // PalalLabel
            // 
            this->PalalLabel->AutoSize = true;
            this->PalalLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->PalalLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PalalLabel->Location = System::Drawing::Point(3, 203);
            this->PalalLabel->Name = L"PalalLabel";
            this->PalalLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->PalalLabel->Size = System::Drawing::Size(439, 29);
            this->PalalLabel->TabIndex = 21;
            this->PalalLabel->Text = L"Shovel";
            this->PalalLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // ScissorMax
            // 
            this->ScissorMax->AutoSize = true;
            this->ScissorMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ScissorMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ScissorMax->Location = System::Drawing::Point(596, 174);
            this->ScissorMax->Name = L"ScissorMax";
            this->ScissorMax->Size = System::Drawing::Size(143, 29);
            this->ScissorMax->TabIndex = 20;
            this->ScissorMax->Text = L"6";
            this->ScissorMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Scissorleft
            // 
            this->Scissorleft->AutoSize = true;
            this->Scissorleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Scissorleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Scissorleft->Location = System::Drawing::Point(448, 174);
            this->Scissorleft->Name = L"Scissorleft";
            this->Scissorleft->Size = System::Drawing::Size(142, 29);
            this->Scissorleft->TabIndex = 19;
            this->Scissorleft->Text = L"6";
            this->Scissorleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // ScissorLabel
            // 
            this->ScissorLabel->AutoSize = true;
            this->ScissorLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ScissorLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ScissorLabel->Location = System::Drawing::Point(3, 174);
            this->ScissorLabel->Name = L"ScissorLabel";
            this->ScissorLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->ScissorLabel->Size = System::Drawing::Size(439, 29);
            this->ScissorLabel->TabIndex = 18;
            this->ScissorLabel->Text = L"Garden Scissors";
            this->ScissorLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // MopMax
            // 
            this->MopMax->AutoSize = true;
            this->MopMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->MopMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MopMax->Location = System::Drawing::Point(596, 145);
            this->MopMax->Name = L"MopMax";
            this->MopMax->Size = System::Drawing::Size(143, 29);
            this->MopMax->TabIndex = 17;
            this->MopMax->Text = L"6";
            this->MopMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Mopleft
            // 
            this->Mopleft->AutoSize = true;
            this->Mopleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Mopleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mopleft->Location = System::Drawing::Point(448, 145);
            this->Mopleft->Name = L"Mopleft";
            this->Mopleft->Size = System::Drawing::Size(142, 29);
            this->Mopleft->TabIndex = 16;
            this->Mopleft->Text = L"6";
            this->Mopleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // MopLabel
            // 
            this->MopLabel->AutoSize = true;
            this->MopLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->MopLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->MopLabel->Location = System::Drawing::Point(3, 145);
            this->MopLabel->Name = L"MopLabel";
            this->MopLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->MopLabel->Size = System::Drawing::Size(439, 29);
            this->MopLabel->TabIndex = 15;
            this->MopLabel->Text = L"Mop";
            this->MopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // TimbaMax
            // 
            this->TimbaMax->AutoSize = true;
            this->TimbaMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TimbaMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TimbaMax->Location = System::Drawing::Point(596, 116);
            this->TimbaMax->Name = L"TimbaMax";
            this->TimbaMax->Size = System::Drawing::Size(143, 29);
            this->TimbaMax->TabIndex = 14;
            this->TimbaMax->Text = L"54";
            this->TimbaMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Timbaleft
            // 
            this->Timbaleft->AutoSize = true;
            this->Timbaleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Timbaleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Timbaleft->Location = System::Drawing::Point(448, 116);
            this->Timbaleft->Name = L"Timbaleft";
            this->Timbaleft->Size = System::Drawing::Size(142, 29);
            this->Timbaleft->TabIndex = 13;
            this->Timbaleft->Text = L"54";
            this->Timbaleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // TimbaLabel
            // 
            this->TimbaLabel->AutoSize = true;
            this->TimbaLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TimbaLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TimbaLabel->Location = System::Drawing::Point(3, 116);
            this->TimbaLabel->Name = L"TimbaLabel";
            this->TimbaLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->TimbaLabel->Size = System::Drawing::Size(439, 29);
            this->TimbaLabel->TabIndex = 12;
            this->TimbaLabel->Text = L"Bucket";
            this->TimbaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // DustPanleft
            // 
            this->DustPanleft->AutoSize = true;
            this->DustPanleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DustPanleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DustPanleft->Location = System::Drawing::Point(448, 87);
            this->DustPanleft->Name = L"DustPanleft";
            this->DustPanleft->Size = System::Drawing::Size(142, 29);
            this->DustPanleft->TabIndex = 10;
            this->DustPanleft->Text = L"67";
            this->DustPanleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // DustPanLabel
            // 
            this->DustPanLabel->AutoSize = true;
            this->DustPanLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DustPanLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DustPanLabel->Location = System::Drawing::Point(3, 87);
            this->DustPanLabel->Name = L"DustPanLabel";
            this->DustPanLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->DustPanLabel->Size = System::Drawing::Size(439, 29);
            this->DustPanLabel->TabIndex = 9;
            this->DustPanLabel->Text = L"Dust Pan";
            this->DustPanLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // TamboMax
            // 
            this->TamboMax->AutoSize = true;
            this->TamboMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TamboMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TamboMax->Location = System::Drawing::Point(596, 58);
            this->TamboMax->Name = L"TamboMax";
            this->TamboMax->Size = System::Drawing::Size(143, 29);
            this->TamboMax->TabIndex = 8;
            this->TamboMax->Text = L"35";
            this->TamboMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Tamboleft
            // 
            this->Tamboleft->AutoSize = true;
            this->Tamboleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Tamboleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Tamboleft->Location = System::Drawing::Point(448, 58);
            this->Tamboleft->Name = L"Tamboleft";
            this->Tamboleft->Size = System::Drawing::Size(142, 29);
            this->Tamboleft->TabIndex = 7;
            this->Tamboleft->Text = L"35";
            this->Tamboleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // TamboLabel
            // 
            this->TamboLabel->AutoSize = true;
            this->TamboLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TamboLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TamboLabel->Location = System::Drawing::Point(3, 58);
            this->TamboLabel->Name = L"TamboLabel";
            this->TamboLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->TamboLabel->Size = System::Drawing::Size(439, 29);
            this->TamboLabel->TabIndex = 6;
            this->TamboLabel->Text = L"Walis Tambo";
            this->TamboLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // TingtingMax
            // 
            this->TingtingMax->AutoSize = true;
            this->TingtingMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TingtingMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TingtingMax->Location = System::Drawing::Point(596, 29);
            this->TingtingMax->Name = L"TingtingMax";
            this->TingtingMax->Size = System::Drawing::Size(143, 29);
            this->TingtingMax->TabIndex = 5;
            this->TingtingMax->Text = L"32";
            this->TingtingMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Tingtingleft
            // 
            this->Tingtingleft->AutoSize = true;
            this->Tingtingleft->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Tingtingleft->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Tingtingleft->Location = System::Drawing::Point(448, 29);
            this->Tingtingleft->Name = L"Tingtingleft";
            this->Tingtingleft->Size = System::Drawing::Size(142, 29);
            this->Tingtingleft->TabIndex = 4;
            this->Tingtingleft->Text = L"32";
            this->Tingtingleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // WalisTamboLabel
            // 
            this->WalisTamboLabel->AutoSize = true;
            this->WalisTamboLabel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->WalisTamboLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->WalisTamboLabel->Location = System::Drawing::Point(3, 29);
            this->WalisTamboLabel->Name = L"WalisTamboLabel";
            this->WalisTamboLabel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->WalisTamboLabel->Size = System::Drawing::Size(439, 29);
            this->WalisTamboLabel->TabIndex = 3;
            this->WalisTamboLabel->Text = L"Walis Tingting";
            this->WalisTamboLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // Total
            // 
            this->Total->AutoSize = true;
            this->Total->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Total->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Total->Location = System::Drawing::Point(596, 0);
            this->Total->Name = L"Total";
            this->Total->Size = System::Drawing::Size(143, 29);
            this->Total->TabIndex = 2;
            this->Total->Text = L"Items in Total";
            this->Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // BorrowedNum
            // 
            this->BorrowedNum->AutoSize = true;
            this->BorrowedNum->Dock = System::Windows::Forms::DockStyle::Fill;
            this->BorrowedNum->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->BorrowedNum->Location = System::Drawing::Point(448, 0);
            this->BorrowedNum->Name = L"BorrowedNum";
            this->BorrowedNum->Size = System::Drawing::Size(142, 29);
            this->BorrowedNum->TabIndex = 1;
            this->BorrowedNum->Text = L"Items Remaining";
            this->BorrowedNum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // TableHeader
            // 
            this->TableHeader->AutoSize = true;
            this->TableHeader->Dock = System::Windows::Forms::DockStyle::Fill;
            this->TableHeader->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TableHeader->Location = System::Drawing::Point(3, 0);
            this->TableHeader->Name = L"TableHeader";
            this->TableHeader->Size = System::Drawing::Size(439, 29);
            this->TableHeader->TabIndex = 0;
            this->TableHeader->Text = L"Items/Equipment";
            this->TableHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // DustPanMax
            // 
            this->DustPanMax->AutoSize = true;
            this->DustPanMax->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DustPanMax->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DustPanMax->Location = System::Drawing::Point(596, 87);
            this->DustPanMax->Name = L"DustPanMax";
            this->DustPanMax->Size = System::Drawing::Size(143, 29);
            this->DustPanMax->TabIndex = 11;
            this->DustPanMax->Text = L"67";
            this->DustPanMax->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // HomeLabel
            // 
            this->HomeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->HomeLabel->AutoSize = true;
            this->HomeLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->HomeLabel->ForeColor = System::Drawing::Color::Maroon;
            this->HomeLabel->Location = System::Drawing::Point(17, 15);
            this->HomeLabel->Name = L"HomeLabel";
            this->HomeLabel->Size = System::Drawing::Size(315, 40);
            this->HomeLabel->TabIndex = 0;
            this->HomeLabel->Text = L"Home/Dashboard";
            // 
            // ReturnTab
            // 
            this->ReturnTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ReturnTab->Controls->Add(this->ReturnButton);
            this->ReturnTab->Controls->Add(this->textBox13);
            this->ReturnTab->Controls->Add(this->textBox12);
            this->ReturnTab->Controls->Add(this->label2);
            this->ReturnTab->Controls->Add(this->BorrowLabel);
            this->ReturnTab->Location = System::Drawing::Point(0, 138);
            this->ReturnTab->Name = L"ReturnTab";
            this->ReturnTab->Size = System::Drawing::Size(788, 350);
            this->ReturnTab->TabIndex = 3;
            // 
            // BorrowLabel
            // 
            this->BorrowLabel->AutoSize = true;
            this->BorrowLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->BorrowLabel->ForeColor = System::Drawing::Color::Maroon;
            this->BorrowLabel->Location = System::Drawing::Point(17, 15);
            this->BorrowLabel->Name = L"BorrowLabel";
            this->BorrowLabel->Size = System::Drawing::Size(167, 24);
            this->BorrowLabel->TabIndex = 0;
            this->BorrowLabel->Text = L"Returning Page";
            // 
            // BorrowTab
            // 
            this->BorrowTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->BorrowTab->AutoSize = true;
            this->BorrowTab->Controls->Add(this->BorrowButton);
            this->BorrowTab->Controls->Add(this->textBox11);
            this->BorrowTab->Controls->Add(this->textBox10);
            this->BorrowTab->Controls->Add(this->textBox9);
            this->BorrowTab->Controls->Add(this->textBox8);
            this->BorrowTab->Controls->Add(this->textBox7);
            this->BorrowTab->Controls->Add(this->textBox6);
            this->BorrowTab->Controls->Add(this->textBox3);
            this->BorrowTab->Controls->Add(this->textBox2);
            this->BorrowTab->Controls->Add(this->textBox1);
            this->BorrowTab->Controls->Add(this->DesigR);
            this->BorrowTab->Controls->Add(this->ProgramR);
            this->BorrowTab->Controls->Add(this->NameR);
            this->BorrowTab->Controls->Add(this->textBox5);
            this->BorrowTab->Controls->Add(this->textBox4);
            this->BorrowTab->Controls->Add(this->Pandiligr);
            this->BorrowTab->Controls->Add(this->Shovelr);
            this->BorrowTab->Controls->Add(this->Scissorr);
            this->BorrowTab->Controls->Add(this->Mopr);
            this->BorrowTab->Controls->Add(this->Timbar);
            this->BorrowTab->Controls->Add(this->DustPanr);
            this->BorrowTab->Controls->Add(this->Tambor);
            this->BorrowTab->Controls->Add(this->Tingtingr);
            this->BorrowTab->Controls->Add(this->ReturnMsg);
            this->BorrowTab->Controls->Add(this->label1);
            this->BorrowTab->Controls->Add(this->DateandTimeR);
            this->BorrowTab->Controls->Add(this->ReturnLabel);
            this->BorrowTab->Location = System::Drawing::Point(0, 138);
            this->BorrowTab->Name = L"BorrowTab";
            this->BorrowTab->Size = System::Drawing::Size(816, 350);
            this->BorrowTab->TabIndex = 4;
            // 
            // BorrowButton
            // 
            this->BorrowButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->BorrowButton->BackColor = System::Drawing::Color::Maroon;
            this->BorrowButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->BorrowButton->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
            this->BorrowButton->FlatAppearance->BorderSize = 2;
            this->BorrowButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->BorrowButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->BorrowButton->ForeColor = System::Drawing::Color::White;
            this->BorrowButton->Location = System::Drawing::Point(536, 226);
            this->BorrowButton->Name = L"BorrowButton";
            this->BorrowButton->Size = System::Drawing::Size(99, 32);
            this->BorrowButton->TabIndex = 32;
            this->BorrowButton->Text = L"Borrow";
            this->BorrowButton->UseVisualStyleBackColor = false;
            // 
            // textBox3
            // 
            this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox3->Location = System::Drawing::Point(522, 171);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(222, 20);
            this->textBox3->TabIndex = 25;
            // 
            // textBox2
            // 
            this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox2->Location = System::Drawing::Point(501, 145);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(243, 20);
            this->textBox2->TabIndex = 24;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Location = System::Drawing::Point(473, 119);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(271, 20);
            this->textBox1->TabIndex = 23;
            // 
            // NameR
            // 
            this->NameR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->NameR->AutoSize = true;
            this->NameR->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->NameR->Location = System::Drawing::Point(408, 121);
            this->NameR->Name = L"NameR";
            this->NameR->Size = System::Drawing::Size(59, 18);
            this->NameR->TabIndex = 20;
            this->NameR->Text = L"Name:";
            // 
            // ReturnMsg
            // 
            this->ReturnMsg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->ReturnMsg->AutoEllipsis = true;
            this->ReturnMsg->AutoSize = true;
            this->ReturnMsg->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ReturnMsg->Location = System::Drawing::Point(25, 88);
            this->ReturnMsg->Name = L"ReturnMsg";
            this->ReturnMsg->Size = System::Drawing::Size(231, 18);
            this->ReturnMsg->TabIndex = 6;
            this->ReturnMsg->Text = L"State the amount to borrow:";
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(156, 52);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(122, 18);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Date and Time";
            // 
            // DateandTimeR
            // 
            this->DateandTimeR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->DateandTimeR->AutoSize = true;
            this->DateandTimeR->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DateandTimeR->Location = System::Drawing::Point(23, 52);
            this->DateandTimeR->Name = L"DateandTimeR";
            this->DateandTimeR->Size = System::Drawing::Size(127, 18);
            this->DateandTimeR->TabIndex = 4;
            this->DateandTimeR->Text = L"Date and Time:";
            // 
            // ReturnLabel
            // 
            this->ReturnLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->ReturnLabel->AutoSize = true;
            this->ReturnLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ReturnLabel->ForeColor = System::Drawing::Color::Maroon;
            this->ReturnLabel->Location = System::Drawing::Point(15, 17);
            this->ReturnLabel->Name = L"ReturnLabel";
            this->ReturnLabel->Size = System::Drawing::Size(177, 24);
            this->ReturnLabel->TabIndex = 0;
            this->ReturnLabel->Text = L"Borrowing Form";
            // 
            // HistoryTab
            // 
            this->HistoryTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->HistoryTab->Controls->Add(this->Logs);
            this->HistoryTab->Controls->Add(this->HistoryLabel);
            this->HistoryTab->Location = System::Drawing::Point(0, 138);
            this->HistoryTab->Name = L"HistoryTab";
            this->HistoryTab->Size = System::Drawing::Size(788, 350);
            this->HistoryTab->TabIndex = 5;
            // 
            // Logs
            // 
            this->Logs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Logs->Font = (gcnew System::Drawing::Font(L"Courier New", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Logs->Location = System::Drawing::Point(21, 72);
            this->Logs->Multiline = true;
            this->Logs->Name = L"Logs";
            this->Logs->ReadOnly = true;
            this->Logs->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->Logs->Size = System::Drawing::Size(739, 254);
            this->Logs->TabIndex = 1;
            // 
            // HistoryLabel
            // 
            this->HistoryLabel->AutoSize = true;
            this->HistoryLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->HistoryLabel->ForeColor = System::Drawing::Color::Maroon;
            this->HistoryLabel->Location = System::Drawing::Point(15, 17);
            this->HistoryLabel->Name = L"HistoryLabel";
            this->HistoryLabel->Size = System::Drawing::Size(398, 40);
            this->HistoryLabel->TabIndex = 0;
            this->HistoryLabel->Text = L"Borrow/Return History";
            // 
            // textBox12
            // 
            this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox12->Location = System::Drawing::Point(134, 49);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(271, 20);
            this->textBox12->TabIndex = 25;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(36, 51);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(91, 18);
            this->label2->TabIndex = 24;
            this->label2->Text = L"Borrow Id:";
            // 
            // textBox13
            // 
            this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox13->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->textBox13->Location = System::Drawing::Point(29, 82);
            this->textBox13->Multiline = true;
            this->textBox13->Name = L"textBox13";
            this->textBox13->ReadOnly = true;
            this->textBox13->Size = System::Drawing::Size(715, 208);
            this->textBox13->TabIndex = 26;
            // 
            // ReturnButton
            // 
            this->ReturnButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->ReturnButton->BackColor = System::Drawing::Color::Maroon;
            this->ReturnButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ReturnButton->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
            this->ReturnButton->FlatAppearance->BorderSize = 2;
            this->ReturnButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ReturnButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ReturnButton->ForeColor = System::Drawing::Color::White;
            this->ReturnButton->Location = System::Drawing::Point(637, 296);
            this->ReturnButton->Name = L"ReturnButton";
            this->ReturnButton->Size = System::Drawing::Size(107, 32);
            this->ReturnButton->TabIndex = 27;
            this->ReturnButton->Text = L"Return All";
            this->ReturnButton->UseVisualStyleBackColor = false;
            // 
            // Tambor
            // 
            this->Tambor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Tambor->AutoSize = true;
            this->Tambor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Tambor->Location = System::Drawing::Point(25, 149);
            this->Tambor->Name = L"Tambor";
            this->Tambor->Size = System::Drawing::Size(113, 18);
            this->Tambor->TabIndex = 8;
            this->Tambor->Text = L"Walis Tambo:";
            // 
            // DustPanr
            // 
            this->DustPanr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->DustPanr->AutoSize = true;
            this->DustPanr->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DustPanr->Location = System::Drawing::Point(25, 178);
            this->DustPanr->Name = L"DustPanr";
            this->DustPanr->Size = System::Drawing::Size(85, 18);
            this->DustPanr->TabIndex = 9;
            this->DustPanr->Text = L"Dust Pan:";
            // 
            // Timbar
            // 
            this->Timbar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Timbar->AutoSize = true;
            this->Timbar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Timbar->Location = System::Drawing::Point(25, 204);
            this->Timbar->Name = L"Timbar";
            this->Timbar->Size = System::Drawing::Size(70, 18);
            this->Timbar->TabIndex = 10;
            this->Timbar->Text = L"Bucket:";
            // 
            // Mopr
            // 
            this->Mopr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Mopr->AutoSize = true;
            this->Mopr->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Mopr->Location = System::Drawing::Point(25, 228);
            this->Mopr->Name = L"Mopr";
            this->Mopr->Size = System::Drawing::Size(46, 18);
            this->Mopr->TabIndex = 11;
            this->Mopr->Text = L"Mop:";
            // 
            // Scissorr
            // 
            this->Scissorr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Scissorr->AutoSize = true;
            this->Scissorr->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Scissorr->Location = System::Drawing::Point(25, 254);
            this->Scissorr->Name = L"Scissorr";
            this->Scissorr->Size = System::Drawing::Size(170, 18);
            this->Scissorr->TabIndex = 12;
            this->Scissorr->Text = L"Gardening Scissors:";
            // 
            // Shovelr
            // 
            this->Shovelr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Shovelr->AutoSize = true;
            this->Shovelr->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Shovelr->Location = System::Drawing::Point(25, 279);
            this->Shovelr->Name = L"Shovelr";
            this->Shovelr->Size = System::Drawing::Size(67, 18);
            this->Shovelr->TabIndex = 13;
            this->Shovelr->Text = L"Shovel:";
            // 
            // Pandiligr
            // 
            this->Pandiligr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Pandiligr->AutoSize = true;
            this->Pandiligr->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Pandiligr->Location = System::Drawing::Point(25, 306);
            this->Pandiligr->Name = L"Pandiligr";
            this->Pandiligr->Size = System::Drawing::Size(121, 18);
            this->Pandiligr->TabIndex = 14;
            this->Pandiligr->Text = L"Watering Can:";
            // 
            // textBox5
            // 
            this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox5->Location = System::Drawing::Point(144, 150);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(233, 20);
            this->textBox5->TabIndex = 19;
            // 
            // ProgramR
            // 
            this->ProgramR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ProgramR->AutoSize = true;
            this->ProgramR->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ProgramR->Location = System::Drawing::Point(408, 145);
            this->ProgramR->Name = L"ProgramR";
            this->ProgramR->Size = System::Drawing::Size(82, 18);
            this->ProgramR->TabIndex = 21;
            this->ProgramR->Text = L"Program:";
            // 
            // DesigR
            // 
            this->DesigR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->DesigR->AutoSize = true;
            this->DesigR->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DesigR->Location = System::Drawing::Point(408, 170);
            this->DesigR->Name = L"DesigR";
            this->DesigR->Size = System::Drawing::Size(108, 18);
            this->DesigR->TabIndex = 22;
            this->DesigR->Text = L"Designation:";
            // 
            // textBox6
            // 
            this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox6->Location = System::Drawing::Point(116, 176);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(261, 20);
            this->textBox6->TabIndex = 26;
            // 
            // textBox7
            // 
            this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox7->Location = System::Drawing::Point(101, 202);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(276, 20);
            this->textBox7->TabIndex = 27;
            // 
            // textBox8
            // 
            this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox8->Location = System::Drawing::Point(77, 230);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(300, 20);
            this->textBox8->TabIndex = 28;
            // 
            // textBox9
            // 
            this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox9->Location = System::Drawing::Point(202, 255);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(175, 20);
            this->textBox9->TabIndex = 29;
            // 
            // textBox10
            // 
            this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox10->Location = System::Drawing::Point(98, 280);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(279, 20);
            this->textBox10->TabIndex = 30;
            // 
            // textBox11
            // 
            this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox11->Location = System::Drawing::Point(152, 303);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(225, 20);
            this->textBox11->TabIndex = 31;
            // 
            // textBox4
            // 
            this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBox4->Location = System::Drawing::Point(154, 120);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(223, 20);
            this->textBox4->TabIndex = 18;
            // 
            // Tingtingr
            // 
            this->Tingtingr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Tingtingr->AutoSize = true;
            this->Tingtingr->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Tingtingr->Location = System::Drawing::Point(25, 119);
            this->Tingtingr->Name = L"Tingtingr";
            this->Tingtingr->Size = System::Drawing::Size(123, 18);
            this->Tingtingr->TabIndex = 7;
            this->Tingtingr->Text = L"Walis Tingting:";
            // 
            // MainPage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(788, 488);
            this->Controls->Add(this->ButtonPanel);
            this->Controls->Add(this->TopBG);
            this->Controls->Add(this->HomeTab);
            this->Controls->Add(this->HistoryTab);
            this->Controls->Add(this->BorrowTab);
            this->Controls->Add(this->ReturnTab);
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
            this->HomeTab->ResumeLayout(false);
            this->HomeTab->PerformLayout();
            this->DashboardTable->ResumeLayout(false);
            this->DashboardTable->PerformLayout();
            this->ReturnTab->ResumeLayout(false);
            this->ReturnTab->PerformLayout();
            this->BorrowTab->ResumeLayout(false);
            this->BorrowTab->PerformLayout();
            this->HistoryTab->ResumeLayout(false);
            this->HistoryTab->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

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
    HomeTab->BringToFront();
}
private: System::Void BorrowBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Maroon;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
    BorrowTab->BringToFront();
}
private: System::Void ReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Maroon;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
    ReturnTab->BringToFront();
}
private: System::Void HistoryBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Maroon;
    HistoryTab->BringToFront();
}
};
}
