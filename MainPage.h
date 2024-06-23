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
	private: System::Windows::Forms::Panel^ Return;
    private: System::Windows::Forms::Panel^ Borrowing;
    private: System::Windows::Forms::Panel^ DashBoard;



	private: System::Windows::Forms::Panel^ Logs;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ HistoryLabel;
	private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ ReturnButton;
    private: System::Windows::Forms::Button^ CheckBtn;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ ID;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ BorrowinLabel;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ Dateandtime;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;


















































































































































































































































































































































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
            this->Return = (gcnew System::Windows::Forms::Panel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->ID = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->ReturnButton = (gcnew System::Windows::Forms::Button());
            this->CheckBtn = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Borrowing = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->Dateandtime = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->BorrowinLabel = (gcnew System::Windows::Forms::Label());
            this->DashBoard = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->Logs = (gcnew System::Windows::Forms::Panel());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->HistoryLabel = (gcnew System::Windows::Forms::Label());
            this->TopBG->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
            this->HomePanel->SuspendLayout();
            this->ReturningPanel->SuspendLayout();
            this->HistoryPanel->SuspendLayout();
            this->ButtonPanel->SuspendLayout();
            this->BorrowingPanel->SuspendLayout();
            this->Return->SuspendLayout();
            this->Borrowing->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            this->DashBoard->SuspendLayout();
            this->Logs->SuspendLayout();
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
            // Return
            // 
            this->Return->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Return->Controls->Add(this->textBox3);
            this->Return->Controls->Add(this->ID);
            this->Return->Controls->Add(this->textBox2);
            this->Return->Controls->Add(this->ReturnButton);
            this->Return->Controls->Add(this->CheckBtn);
            this->Return->Controls->Add(this->label1);
            this->Return->Location = System::Drawing::Point(0, 138);
            this->Return->Name = L"Return";
            this->Return->Size = System::Drawing::Size(788, 350);
            this->Return->TabIndex = 2;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(150, 62);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(202, 26);
            this->textBox3->TabIndex = 15;
            // 
            // ID
            // 
            this->ID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ID->AutoSize = true;
            this->ID->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ID->Location = System::Drawing::Point(51, 66);
            this->ID->Name = L"ID";
            this->ID->Size = System::Drawing::Size(93, 18);
            this->ID->TabIndex = 14;
            this->ID->Text = L"Borrow ID:";
            // 
            // textBox2
            // 
            this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
            this->textBox2->Location = System::Drawing::Point(48, 104);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(689, 152);
            this->textBox2->TabIndex = 13;
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
            this->ReturnButton->Location = System::Drawing::Point(638, 275);
            this->ReturnButton->Name = L"ReturnButton";
            this->ReturnButton->Size = System::Drawing::Size(99, 32);
            this->ReturnButton->TabIndex = 12;
            this->ReturnButton->Text = L"Return all";
            this->ReturnButton->UseVisualStyleBackColor = false;
            // 
            // CheckBtn
            // 
            this->CheckBtn->BackColor = System::Drawing::Color::Maroon;
            this->CheckBtn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->CheckBtn->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
            this->CheckBtn->FlatAppearance->BorderSize = 2;
            this->CheckBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CheckBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CheckBtn->ForeColor = System::Drawing::Color::White;
            this->CheckBtn->Location = System::Drawing::Point(355, 58);
            this->CheckBtn->Margin = System::Windows::Forms::Padding(0);
            this->CheckBtn->Name = L"CheckBtn";
            this->CheckBtn->Size = System::Drawing::Size(86, 32);
            this->CheckBtn->TabIndex = 11;
            this->CheckBtn->Text = L"Check ID";
            this->CheckBtn->UseVisualStyleBackColor = false;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Maroon;
            this->label1->Location = System::Drawing::Point(15, 17);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(209, 37);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Return Page";
            // 
            // Borrowing
            // 
            this->Borrowing->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Borrowing->Controls->Add(this->button1);
            this->Borrowing->Controls->Add(this->tableLayoutPanel2);
            this->Borrowing->Controls->Add(this->Dateandtime);
            this->Borrowing->Controls->Add(this->label11);
            this->Borrowing->Controls->Add(this->label10);
            this->Borrowing->Controls->Add(this->tableLayoutPanel1);
            this->Borrowing->Controls->Add(this->BorrowinLabel);
            this->Borrowing->Location = System::Drawing::Point(0, 138);
            this->Borrowing->Name = L"Borrowing";
            this->Borrowing->Size = System::Drawing::Size(788, 350);
            this->Borrowing->TabIndex = 3;
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button1->BackColor = System::Drawing::Color::Maroon;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
            this->button1->FlatAppearance->BorderSize = 2;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(652, 212);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(99, 32);
            this->button1->TabIndex = 13;
            this->button1->Text = L"Submit";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                90)));
            this->tableLayoutPanel2->Controls->Add(this->textBox14, 1, 2);
            this->tableLayoutPanel2->Controls->Add(this->label14, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->textBox13, 1, 1);
            this->tableLayoutPanel2->Controls->Add(this->label13, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->textBox12, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->label12, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(48, 91);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 3;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(705, 91);
            this->tableLayoutPanel2->TabIndex = 7;
            // 
            // textBox14
            // 
            this->textBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox14->Location = System::Drawing::Point(73, 63);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(629, 26);
            this->textBox14->TabIndex = 6;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(3, 60);
            this->label14->Name = L"label14";
            this->label14->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label14->Size = System::Drawing::Size(64, 31);
            this->label14->TabIndex = 5;
            this->label14->Text = L"Designation:";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox13
            // 
            this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->Location = System::Drawing::Point(73, 33);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(629, 26);
            this->textBox13->TabIndex = 4;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(3, 30);
            this->label13->Name = L"label13";
            this->label13->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label13->Size = System::Drawing::Size(64, 30);
            this->label13->TabIndex = 3;
            this->label13->Text = L"Program:";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox12
            // 
            this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->Location = System::Drawing::Point(73, 3);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(629, 26);
            this->textBox12->TabIndex = 2;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(3, 0);
            this->label12->Name = L"label12";
            this->label12->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label12->Size = System::Drawing::Size(64, 30);
            this->label12->TabIndex = 0;
            this->label12->Text = L"Name:";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // Dateandtime
            // 
            this->Dateandtime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Dateandtime->AutoSize = true;
            this->Dateandtime->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Dateandtime->Location = System::Drawing::Point(176, 59);
            this->Dateandtime->Name = L"Dateandtime";
            this->Dateandtime->Size = System::Drawing::Size(127, 18);
            this->Dateandtime->TabIndex = 6;
            this->Dateandtime->Text = L"Date and Time:";
            // 
            // label11
            // 
            this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(43, 59);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(127, 18);
            this->label11->TabIndex = 5;
            this->label11->Text = L"Date and Time:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(45, 185);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(298, 18);
            this->label10->TabIndex = 4;
            this->label10->Text = L"State the number of items to borrow:";
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                75)));
            this->tableLayoutPanel1->Controls->Add(this->textBox11, 1, 7);
            this->tableLayoutPanel1->Controls->Add(this->label9, 0, 7);
            this->tableLayoutPanel1->Controls->Add(this->textBox10, 1, 6);
            this->tableLayoutPanel1->Controls->Add(this->label8, 0, 6);
            this->tableLayoutPanel1->Controls->Add(this->textBox9, 1, 5);
            this->tableLayoutPanel1->Controls->Add(this->label7, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->textBox8, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->label6, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->textBox7, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->label5, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->textBox6, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->label4, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->textBox5, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->textBox4, 1, 0);
            this->tableLayoutPanel1->Location = System::Drawing::Point(48, 211);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 8;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(705, 250);
            this->tableLayoutPanel1->TabIndex = 3;
            // 
            // textBox11
            // 
            this->textBox11->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->Location = System::Drawing::Point(179, 220);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(270, 26);
            this->textBox11->TabIndex = 15;
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(3, 217);
            this->label9->Name = L"label9";
            this->label9->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label9->Size = System::Drawing::Size(165, 33);
            this->label9->TabIndex = 14;
            this->label9->Text = L"Watering Can:";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox10
            // 
            this->textBox10->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->Location = System::Drawing::Point(179, 189);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(270, 26);
            this->textBox10->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(3, 186);
            this->label8->Name = L"label8";
            this->label8->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label8->Size = System::Drawing::Size(96, 31);
            this->label8->TabIndex = 12;
            this->label8->Text = L"Shovel:";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox9
            // 
            this->textBox9->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(179, 158);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(270, 26);
            this->textBox9->TabIndex = 11;
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(3, 155);
            this->label7->Name = L"label7";
            this->label7->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label7->Size = System::Drawing::Size(133, 31);
            this->label7->TabIndex = 10;
            this->label7->Text = L"Gardening Scissor:";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox8
            // 
            this->textBox8->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(179, 127);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(270, 26);
            this->textBox8->TabIndex = 9;
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(3, 124);
            this->label6->Name = L"label6";
            this->label6->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label6->Size = System::Drawing::Size(70, 31);
            this->label6->TabIndex = 8;
            this->label6->Text = L"Mop:";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox7
            // 
            this->textBox7->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(179, 96);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(270, 26);
            this->textBox7->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(3, 93);
            this->label5->Name = L"label5";
            this->label5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label5->Size = System::Drawing::Size(98, 31);
            this->label5->TabIndex = 6;
            this->label5->Text = L"Bucket:";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox6
            // 
            this->textBox6->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(179, 65);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(270, 26);
            this->textBox6->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(3, 62);
            this->label4->Name = L"label4";
            this->label4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label4->Size = System::Drawing::Size(118, 31);
            this->label4->TabIndex = 4;
            this->label4->Text = L"Dust Pan:";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox5
            // 
            this->textBox5->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(179, 34);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(270, 26);
            this->textBox5->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(3, 31);
            this->label3->Name = L"label3";
            this->label3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label3->Size = System::Drawing::Size(157, 31);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Walis Tambo:";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(3, 0);
            this->label2->Name = L"label2";
            this->label2->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->label2->Size = System::Drawing::Size(111, 31);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Walis Tingting:";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // textBox4
            // 
            this->textBox4->Dock = System::Windows::Forms::DockStyle::Left;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(179, 3);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(270, 26);
            this->textBox4->TabIndex = 1;
            // 
            // BorrowinLabel
            // 
            this->BorrowinLabel->AutoSize = true;
            this->BorrowinLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->BorrowinLabel->ForeColor = System::Drawing::Color::Maroon;
            this->BorrowinLabel->Location = System::Drawing::Point(15, 17);
            this->BorrowinLabel->Name = L"BorrowinLabel";
            this->BorrowinLabel->Size = System::Drawing::Size(268, 37);
            this->BorrowinLabel->TabIndex = 2;
            this->BorrowinLabel->Text = L"Borrowing Form";
            // 
            // DashBoard
            // 
            this->DashBoard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->DashBoard->Controls->Add(this->tableLayoutPanel3);
            this->DashBoard->Controls->Add(this->label15);
            this->DashBoard->Location = System::Drawing::Point(0, 138);
            this->DashBoard->Name = L"DashBoard";
            this->DashBoard->Size = System::Drawing::Size(788, 350);
            this->DashBoard->TabIndex = 4;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 4;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                60.0024F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                13.33253F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                13.33253F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                13.33253F)));
            this->tableLayoutPanel3->Location = System::Drawing::Point(25, 58);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 8;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(714, 280);
            this->tableLayoutPanel3->TabIndex = 2;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::Maroon;
            this->label15->Location = System::Drawing::Point(15, 17);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(188, 37);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Dashboard";
            // 
            // Logs
            // 
            this->Logs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Logs->Controls->Add(this->textBox1);
            this->Logs->Controls->Add(this->HistoryLabel);
            this->Logs->Location = System::Drawing::Point(0, 138);
            this->Logs->Name = L"Logs";
            this->Logs->Size = System::Drawing::Size(788, 350);
            this->Logs->TabIndex = 5;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(48, 57);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox1->Size = System::Drawing::Size(689, 250);
            this->textBox1->TabIndex = 1;
            // 
            // HistoryLabel
            // 
            this->HistoryLabel->AutoSize = true;
            this->HistoryLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->HistoryLabel->ForeColor = System::Drawing::Color::Maroon;
            this->HistoryLabel->Location = System::Drawing::Point(15, 17);
            this->HistoryLabel->Name = L"HistoryLabel";
            this->HistoryLabel->Size = System::Drawing::Size(365, 37);
            this->HistoryLabel->TabIndex = 0;
            this->HistoryLabel->Text = L"Return/Borrow History";
            // 
            // MainPage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(788, 488);
            this->Controls->Add(this->ButtonPanel);
            this->Controls->Add(this->TopBG);
            this->Controls->Add(this->DashBoard);
            this->Controls->Add(this->Logs);
            this->Controls->Add(this->Borrowing);
            this->Controls->Add(this->Return);
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
            this->Return->ResumeLayout(false);
            this->Return->PerformLayout();
            this->Borrowing->ResumeLayout(false);
            this->Borrowing->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->DashBoard->ResumeLayout(false);
            this->DashBoard->PerformLayout();
            this->Logs->ResumeLayout(false);
            this->Logs->PerformLayout();
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
    DashBoard->BringToFront();
}
private: System::Void BorrowBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Maroon;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
    Borrowing->BringToFront();
}
private: System::Void ReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Maroon;
	HistoryPanel->BackColor = System::Drawing::Color::Snow;
    Return->BringToFront();
}
private: System::Void HistoryBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	HomePanel->BackColor = System::Drawing::Color::Snow;
	BorrowingPanel->BackColor = System::Drawing::Color::Snow;
	ReturningPanel->BackColor = System::Drawing::Color::Snow;
	HistoryPanel->BackColor = System::Drawing::Color::Maroon;
    Logs->BringToFront();
}
};
}
