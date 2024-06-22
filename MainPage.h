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





    private: System::Windows::Forms::Panel^ ReturnPage;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::Panel^ panel3;



















    private: System::Windows::Forms::Label^ label77;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::Label^ Borrowingtitle;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Label^ label75;
    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label73;
    private: System::Windows::Forms::Label^ label74;
    private: System::Windows::Forms::Label^ label76;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label78;




















































































































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
            this->ReturnPage = (gcnew System::Windows::Forms::Panel());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->Borrowingtitle = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label77 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label78 = (gcnew System::Windows::Forms::Label());
            this->TopBG->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
            this->HomePanel->SuspendLayout();
            this->ReturningPanel->SuspendLayout();
            this->HistoryPanel->SuspendLayout();
            this->ButtonPanel->SuspendLayout();
            this->BorrowingPanel->SuspendLayout();
            this->ReturnPage->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->tabControl1->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
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
            // ReturnPage
            // 
            this->ReturnPage->Controls->Add(this->tabControl1);
            this->ReturnPage->Location = System::Drawing::Point(0, 142);
            this->ReturnPage->Name = L"ReturnPage";
            this->ReturnPage->Size = System::Drawing::Size(789, 345);
            this->ReturnPage->TabIndex = 4;
            this->ReturnPage->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainPage::ReturnPage_Paint);
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->Borrowingtitle);
            this->tabPage4->Controls->Add(this->panel2);
            this->tabPage4->Controls->Add(this->panel1);
            this->tabPage4->Location = System::Drawing::Point(4, 22);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(781, 316);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"History Page";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::LightGray;
            this->panel1->Controls->Add(this->label68);
            this->panel1->Controls->Add(this->label67);
            this->panel1->Controls->Add(this->label66);
            this->panel1->Controls->Add(this->label65);
            this->panel1->Controls->Add(this->label64);
            this->panel1->Controls->Add(this->label63);
            this->panel1->Controls->Add(this->label62);
            this->panel1->Controls->Add(this->label61);
            this->panel1->Location = System::Drawing::Point(3, 29);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(775, 137);
            this->panel1->TabIndex = 0;
            // 
            // label61
            // 
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->Location = System::Drawing::Point(11, 8);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(54, 16);
            this->label61->TabIndex = 0;
            this->label61->Text = L"Name :";
            // 
            // label62
            // 
            this->label62->AutoSize = true;
            this->label62->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label62->Location = System::Drawing::Point(192, 8);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(124, 16);
            this->label62->TabIndex = 1;
            this->label62->Text = L"Course and Year :";
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->Location = System::Drawing::Point(389, 8);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(62, 16);
            this->label63->TabIndex = 2;
            this->label63->Text = L"Time-in :";
            // 
            // label64
            // 
            this->label64->AutoSize = true;
            this->label64->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->Location = System::Drawing::Point(586, 8);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(70, 16);
            this->label64->TabIndex = 3;
            this->label64->Text = L"Time-out :";
            // 
            // label65
            // 
            this->label65->AutoSize = true;
            this->label65->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->Location = System::Drawing::Point(215, 44);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(119, 16);
            this->label65->TabIndex = 4;
            this->label65->Text = L"Amount Returned";
            // 
            // label66
            // 
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->Location = System::Drawing::Point(64, 44);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(78, 16);
            this->label66->TabIndex = 5;
            this->label66->Text = L"Item Name";
            // 
            // label67
            // 
            this->label67->AutoSize = true;
            this->label67->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->Location = System::Drawing::Point(405, 44);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(122, 16);
            this->label67->TabIndex = 6;
            this->label67->Text = L"Amount Borrowed";
            // 
            // label68
            // 
            this->label68->AutoSize = true;
            this->label68->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->Location = System::Drawing::Point(615, 44);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(63, 16);
            this->label68->TabIndex = 6;
            this->label68->Text = L"Remarks";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::LightGray;
            this->panel2->Controls->Add(this->label69);
            this->panel2->Controls->Add(this->label70);
            this->panel2->Controls->Add(this->label75);
            this->panel2->Controls->Add(this->label71);
            this->panel2->Controls->Add(this->label72);
            this->panel2->Controls->Add(this->label73);
            this->panel2->Controls->Add(this->label74);
            this->panel2->Controls->Add(this->label76);
            this->panel2->Location = System::Drawing::Point(3, 172);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(775, 137);
            this->panel2->TabIndex = 7;
            // 
            // label76
            // 
            this->label76->AutoSize = true;
            this->label76->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label76->Location = System::Drawing::Point(11, 8);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(54, 16);
            this->label76->TabIndex = 0;
            this->label76->Text = L"Name :";
            // 
            // label74
            // 
            this->label74->AutoSize = true;
            this->label74->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label74->Location = System::Drawing::Point(192, 8);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(124, 16);
            this->label74->TabIndex = 1;
            this->label74->Text = L"Course and Year :";
            // 
            // label73
            // 
            this->label73->AutoSize = true;
            this->label73->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label73->Location = System::Drawing::Point(389, 8);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(62, 16);
            this->label73->TabIndex = 2;
            this->label73->Text = L"Time-in :";
            // 
            // label72
            // 
            this->label72->AutoSize = true;
            this->label72->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->Location = System::Drawing::Point(586, 8);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(70, 16);
            this->label72->TabIndex = 3;
            this->label72->Text = L"Time-out :";
            // 
            // label71
            // 
            this->label71->AutoSize = true;
            this->label71->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->Location = System::Drawing::Point(215, 44);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(119, 16);
            this->label71->TabIndex = 4;
            this->label71->Text = L"Amount Returned";
            // 
            // label75
            // 
            this->label75->AutoSize = true;
            this->label75->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label75->Location = System::Drawing::Point(64, 44);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(78, 16);
            this->label75->TabIndex = 5;
            this->label75->Text = L"Item Name";
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->Location = System::Drawing::Point(405, 44);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(122, 16);
            this->label70->TabIndex = 6;
            this->label70->Text = L"Amount Borrowed";
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->Location = System::Drawing::Point(615, 44);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(63, 16);
            this->label69->TabIndex = 6;
            this->label69->Text = L"Remarks";
            // 
            // Borrowingtitle
            // 
            this->Borrowingtitle->AutoSize = true;
            this->Borrowingtitle->BackColor = System::Drawing::Color::Transparent;
            this->Borrowingtitle->Dock = System::Windows::Forms::DockStyle::Top;
            this->Borrowingtitle->Font = (gcnew System::Drawing::Font(L"Summer Dream Sans Demo", 11.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Borrowingtitle->Location = System::Drawing::Point(3, 3);
            this->Borrowingtitle->Name = L"Borrowingtitle";
            this->Borrowingtitle->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->Borrowingtitle->Size = System::Drawing::Size(193, 22);
            this->Borrowingtitle->TabIndex = 7;
            this->Borrowingtitle->Text = L"Borrowing History";
            this->Borrowingtitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->panel4);
            this->tabPage2->Controls->Add(this->label36);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(781, 316);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Borrowing Page";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->label17);
            this->tabPage1->Controls->Add(this->label15);
            this->tabPage1->Controls->Add(this->label14);
            this->tabPage1->Controls->Add(this->label13);
            this->tabPage1->Controls->Add(this->label12);
            this->tabPage1->Controls->Add(this->label11);
            this->tabPage1->Controls->Add(this->label10);
            this->tabPage1->Controls->Add(this->label9);
            this->tabPage1->Controls->Add(this->label8);
            this->tabPage1->Controls->Add(this->label16);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->label2);
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Controls->Add(this->pictureBox8);
            this->tabPage1->Controls->Add(this->pictureBox7);
            this->tabPage1->Controls->Add(this->pictureBox6);
            this->tabPage1->Controls->Add(this->pictureBox5);
            this->tabPage1->Controls->Add(this->pictureBox4);
            this->tabPage1->Controls->Add(this->pictureBox3);
            this->tabPage1->Controls->Add(this->pictureBox2);
            this->tabPage1->Controls->Add(this->pictureBox1);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(781, 316);
            this->tabPage1->TabIndex = 4;
            this->tabPage1->Text = L"Home";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(17, 9);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(125, 125);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(198, 9);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(125, 125);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(395, 9);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(125, 125);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox3->TabIndex = 2;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(592, 9);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(125, 125);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox4->TabIndex = 3;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(17, 162);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(125, 125);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox5->TabIndex = 4;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(198, 162);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(125, 125);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox6->TabIndex = 5;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(395, 162);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(125, 125);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox7->TabIndex = 6;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(592, 162);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(125, 125);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
            this->pictureBox8->TabIndex = 7;
            this->pictureBox8->TabStop = false;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(14, 137);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(90, 16);
            this->label1->TabIndex = 8;
            this->label1->Text = L"Walis Tambo";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(121, 137);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(21, 16);
            this->label2->TabIndex = 9;
            this->label2->Text = L"36";
            this->label2->Click += gcnew System::EventHandler(this, &MainPage::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(195, 137);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(62, 16);
            this->label3->TabIndex = 10;
            this->label3->Text = L"Dust Pan\r\n";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(302, 137);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(21, 16);
            this->label4->TabIndex = 11;
            this->label4->Text = L"67\r\n";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(392, 137);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(36, 16);
            this->label5->TabIndex = 12;
            this->label5->Text = L"Mop\r\n";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(506, 137);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(14, 16);
            this->label6->TabIndex = 13;
            this->label6->Text = L"6\r\n";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(589, 290);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(97, 16);
            this->label16->TabIndex = 14;
            this->label16->Text = L"Watering Can";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(589, 137);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(111, 16);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Garden Scissors\r\n";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(703, 137);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(14, 16);
            this->label9->TabIndex = 15;
            this->label9->Text = L"6";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(14, 290);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(98, 16);
            this->label10->TabIndex = 16;
            this->label10->Text = L"Walis Tingting";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(121, 290);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(21, 16);
            this->label11->TabIndex = 17;
            this->label11->Text = L"32";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(195, 290);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(51, 16);
            this->label12->TabIndex = 18;
            this->label12->Text = L"Bucket";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(302, 290);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(21, 16);
            this->label13->TabIndex = 19;
            this->label13->Text = L"54";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(392, 290);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(49, 16);
            this->label14->TabIndex = 20;
            this->label14->Text = L"Shovel";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(506, 290);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(14, 16);
            this->label15->TabIndex = 21;
            this->label15->Text = L"4";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(703, 290);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(14, 16);
            this->label17->TabIndex = 22;
            this->label17->Text = L"3";
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Location = System::Drawing::Point(0, 3);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(789, 342);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->panel3);
            this->tabPage3->Controls->Add(this->label77);
            this->tabPage3->Location = System::Drawing::Point(4, 22);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(781, 316);
            this->tabPage3->TabIndex = 5;
            this->tabPage3->Text = L"Returing Page";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::LightGray;
            this->panel3->Controls->Add(this->label40);
            this->panel3->Controls->Add(this->label41);
            this->panel3->Controls->Add(this->label42);
            this->panel3->Controls->Add(this->label43);
            this->panel3->Controls->Add(this->label44);
            this->panel3->Controls->Add(this->label45);
            this->panel3->Controls->Add(this->label46);
            this->panel3->Controls->Add(this->label47);
            this->panel3->Controls->Add(this->label48);
            this->panel3->Controls->Add(this->label49);
            this->panel3->Controls->Add(this->label50);
            this->panel3->Controls->Add(this->label51);
            this->panel3->Controls->Add(this->label52);
            this->panel3->Controls->Add(this->label53);
            this->panel3->Controls->Add(this->label54);
            this->panel3->Controls->Add(this->label55);
            this->panel3->Controls->Add(this->label56);
            this->panel3->Controls->Add(this->label57);
            this->panel3->Controls->Add(this->label58);
            this->panel3->Controls->Add(this->label59);
            this->panel3->Controls->Add(this->label60);
            this->panel3->Controls->Add(this->label78);
            this->panel3->Location = System::Drawing::Point(3, 30);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(773, 281);
            this->panel3->TabIndex = 9;
            // 
            // label77
            // 
            this->label77->AutoSize = true;
            this->label77->BackColor = System::Drawing::Color::Transparent;
            this->label77->Dock = System::Windows::Forms::DockStyle::Top;
            this->label77->Font = (gcnew System::Drawing::Font(L"Summer Dream Sans Demo", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label77->Location = System::Drawing::Point(3, 3);
            this->label77->Name = L"label77";
            this->label77->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label77->Size = System::Drawing::Size(160, 22);
            this->label77->TabIndex = 10;
            this->label77->Text = L"Return Tracker";
            this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::LightGray;
            this->panel4->Controls->Add(this->label39);
            this->panel4->Controls->Add(this->label38);
            this->panel4->Controls->Add(this->label37);
            this->panel4->Controls->Add(this->label7);
            this->panel4->Controls->Add(this->label18);
            this->panel4->Controls->Add(this->label19);
            this->panel4->Controls->Add(this->label20);
            this->panel4->Controls->Add(this->label21);
            this->panel4->Controls->Add(this->label22);
            this->panel4->Controls->Add(this->label23);
            this->panel4->Controls->Add(this->label24);
            this->panel4->Controls->Add(this->label25);
            this->panel4->Controls->Add(this->label26);
            this->panel4->Controls->Add(this->label27);
            this->panel4->Controls->Add(this->label28);
            this->panel4->Controls->Add(this->label29);
            this->panel4->Controls->Add(this->label30);
            this->panel4->Controls->Add(this->label31);
            this->panel4->Controls->Add(this->label32);
            this->panel4->Controls->Add(this->label33);
            this->panel4->Controls->Add(this->label34);
            this->panel4->Controls->Add(this->label35);
            this->panel4->Location = System::Drawing::Point(3, 30);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(775, 281);
            this->panel4->TabIndex = 9;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label7->Location = System::Drawing::Point(389, 187);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(11, 16);
            this->label7->TabIndex = 62;
            this->label7->Text = L":";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label18->Location = System::Drawing::Point(389, 163);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(11, 16);
            this->label18->TabIndex = 61;
            this->label18->Text = L":";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label19->Location = System::Drawing::Point(389, 140);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(11, 16);
            this->label19->TabIndex = 60;
            this->label19->Text = L":";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label20->Location = System::Drawing::Point(389, 115);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(11, 16);
            this->label20->TabIndex = 59;
            this->label20->Text = L":";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label21->Location = System::Drawing::Point(389, 90);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(11, 16);
            this->label21->TabIndex = 58;
            this->label21->Text = L":";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label22->Location = System::Drawing::Point(389, 60);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(11, 16);
            this->label22->TabIndex = 57;
            this->label22->Text = L":";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label23->Location = System::Drawing::Point(389, 36);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(11, 16);
            this->label23->TabIndex = 56;
            this->label23->Text = L":";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label24->Location = System::Drawing::Point(389, 13);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(11, 16);
            this->label24->TabIndex = 55;
            this->label24->Text = L":";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(3, 256);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(226, 16);
            this->label25->TabIndex = 54;
            this->label25->Text = L"Amount of Shovel to be borrowed ";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(3, 232);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(228, 16);
            this->label26->TabIndex = 53;
            this->label26->Text = L"Amount of Bucket to be borrowed ";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(3, 208);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(288, 16);
            this->label27->TabIndex = 52;
            this->label27->Text = L"Amount of Garden Scissors to be borrowed ";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(3, 184);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(213, 16);
            this->label28->TabIndex = 51;
            this->label28->Text = L"Amount of Mop to be borrowed ";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(3, 137);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(274, 16);
            this->label29->TabIndex = 50;
            this->label29->Text = L"Amount of Watering Can to be borrowed ";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(3, 161);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(239, 16);
            this->label30->TabIndex = 49;
            this->label30->Text = L"Amount of Dust Pan to be borrowed ";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(3, 112);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(275, 16);
            this->label31->TabIndex = 48;
            this->label31->Text = L"Amount of Walis Tingting to be borrowed ";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(3, 88);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(267, 16);
            this->label32->TabIndex = 47;
            this->label32->Text = L"Amount of Walis Tambo to be borrowed ";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(3, 57);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(116, 16);
            this->label33->TabIndex = 46;
            this->label33->Text = L"Year and Course";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(3, 33);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(82, 16);
            this->label34->TabIndex = 45;
            this->label34->Text = L"Enter Name";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label35->Location = System::Drawing::Point(3, 10);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(54, 16);
            this->label35->TabIndex = 44;
            this->label35->Text = L"Time-in";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->BackColor = System::Drawing::Color::Transparent;
            this->label36->Dock = System::Windows::Forms::DockStyle::Top;
            this->label36->Font = (gcnew System::Drawing::Font(L"Summer Dream Sans Demo", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(3, 3);
            this->label36->Name = L"label36";
            this->label36->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label36->Size = System::Drawing::Size(169, 22);
            this->label36->TabIndex = 10;
            this->label36->Text = L"Borrowing Form";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label37->Location = System::Drawing::Point(389, 211);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(11, 16);
            this->label37->TabIndex = 63;
            this->label37->Text = L":";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label38->Location = System::Drawing::Point(389, 235);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(11, 16);
            this->label38->TabIndex = 64;
            this->label38->Text = L":";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label39->Location = System::Drawing::Point(389, 259);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(11, 16);
            this->label39->TabIndex = 65;
            this->label39->Text = L":";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label40->Location = System::Drawing::Point(389, 259);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(11, 16);
            this->label40->TabIndex = 87;
            this->label40->Text = L":";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label41->Location = System::Drawing::Point(389, 235);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(11, 16);
            this->label41->TabIndex = 86;
            this->label41->Text = L":";
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label42->Location = System::Drawing::Point(389, 211);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(11, 16);
            this->label42->TabIndex = 85;
            this->label42->Text = L":";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label43->Location = System::Drawing::Point(389, 187);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(11, 16);
            this->label43->TabIndex = 84;
            this->label43->Text = L":";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label44->Location = System::Drawing::Point(389, 163);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(11, 16);
            this->label44->TabIndex = 83;
            this->label44->Text = L":";
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label45->Location = System::Drawing::Point(389, 140);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(11, 16);
            this->label45->TabIndex = 82;
            this->label45->Text = L":";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label46->Location = System::Drawing::Point(389, 115);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(11, 16);
            this->label46->TabIndex = 81;
            this->label46->Text = L":";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label47->Location = System::Drawing::Point(389, 90);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(11, 16);
            this->label47->TabIndex = 80;
            this->label47->Text = L":";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label48->Location = System::Drawing::Point(389, 60);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(11, 16);
            this->label48->TabIndex = 79;
            this->label48->Text = L":";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label49->Location = System::Drawing::Point(389, 36);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(11, 16);
            this->label49->TabIndex = 78;
            this->label49->Text = L":";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label50->Location = System::Drawing::Point(389, 13);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(11, 16);
            this->label50->TabIndex = 77;
            this->label50->Text = L":";
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(3, 256);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(178, 16);
            this->label51->TabIndex = 76;
            this->label51->Text = L"Amount of Shovel returned";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(3, 232);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(180, 16);
            this->label52->TabIndex = 75;
            this->label52->Text = L"Amount of Bucket returned";
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(3, 208);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(240, 16);
            this->label53->TabIndex = 74;
            this->label53->Text = L"Amount of Garden Scissors returned";
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(3, 184);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(165, 16);
            this->label54->TabIndex = 73;
            this->label54->Text = L"Amount of Mop returned";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->Location = System::Drawing::Point(3, 137);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(226, 16);
            this->label55->TabIndex = 72;
            this->label55->Text = L"Amount of Watering Can returned";
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(3, 161);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(191, 16);
            this->label56->TabIndex = 71;
            this->label56->Text = L"Amount of Dust Pan returned";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(3, 112);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(227, 16);
            this->label57->TabIndex = 70;
            this->label57->Text = L"Amount of Walis Tingting returned";
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(3, 88);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(219, 16);
            this->label58->TabIndex = 69;
            this->label58->Text = L"Amount of Walis Tambo returned";
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(3, 57);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(116, 16);
            this->label59->TabIndex = 68;
            this->label59->Text = L"Year and Course";
            // 
            // label60
            // 
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->Location = System::Drawing::Point(3, 33);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(82, 16);
            this->label60->TabIndex = 67;
            this->label60->Text = L"Enter Name";
            // 
            // label78
            // 
            this->label78->AutoSize = true;
            this->label78->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label78->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label78->Location = System::Drawing::Point(3, 10);
            this->label78->Name = L"label78";
            this->label78->Size = System::Drawing::Size(62, 16);
            this->label78->TabIndex = 66;
            this->label78->Text = L"Time-out";
            // 
            // MainPage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(788, 488);
            this->Controls->Add(this->ReturnPage);
            this->Controls->Add(this->ButtonPanel);
            this->Controls->Add(this->TopBG);
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
            this->ReturnPage->ResumeLayout(false);
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->tabControl1->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
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
private: System::Void ReturnPage_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void BorrowingPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
