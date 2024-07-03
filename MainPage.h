#pragma once
#include<random>
#include<vector>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Text::RegularExpressions;

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
    private: System::Windows::Forms::Panel^ HomeTab;
    private: System::Windows::Forms::Label^ HomeLabell;

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
private: System::Windows::Forms::Label^ date;


private: System::Windows::Forms::Label^ DateandTimeR;


private: System::Windows::Forms::Timer^ Timer;



private: System::Windows::Forms::Label^ ReturnMsg;
private: System::Windows::Forms::TextBox^ desiginput;


















private: System::Windows::Forms::TextBox^ nameinput;



private: System::Windows::Forms::Label^ NameR;
private: System::Windows::Forms::Button^ BorrowButton;
private: System::Windows::Forms::TextBox^ idinput;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ returnpreview;

private: System::Windows::Forms::Button^ ReturnButton;
private: System::Windows::Forms::TextBox^ pandiliginput;

private: System::Windows::Forms::TextBox^ palainput;

private: System::Windows::Forms::TextBox^ scissorinput;

private: System::Windows::Forms::TextBox^ mopinput;

private: System::Windows::Forms::TextBox^ timbainput;

private: System::Windows::Forms::TextBox^ dustpaninput;

private: System::Windows::Forms::Label^ DesigR;
private: System::Windows::Forms::Label^ ProgramR;
private: System::Windows::Forms::TextBox^ tamboinput;

private: System::Windows::Forms::TextBox^ Tingtinginput;

private: System::Windows::Forms::Label^ Pandiligr;
private: System::Windows::Forms::Label^ Shovelr;
private: System::Windows::Forms::Label^ Scissorr;
private: System::Windows::Forms::Label^ Mopr;
private: System::Windows::Forms::Label^ Timbar;
private: System::Windows::Forms::Label^ DustPanr;
private: System::Windows::Forms::Label^ Tambor;
private: System::Windows::Forms::Label^ Tingtingr;
private: System::Windows::Forms::TextBox^ preview;
private: System::Windows::Forms::ComboBox^ programinput;
private: System::Windows::Forms::Label^ enterlabel;






























































































































































































































































































































































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
            this->HomeLabell = (gcnew System::Windows::Forms::Label());
            this->ReturnTab = (gcnew System::Windows::Forms::Panel());
            this->enterlabel = (gcnew System::Windows::Forms::Label());
            this->ReturnButton = (gcnew System::Windows::Forms::Button());
            this->returnpreview = (gcnew System::Windows::Forms::TextBox());
            this->idinput = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->BorrowLabel = (gcnew System::Windows::Forms::Label());
            this->BorrowTab = (gcnew System::Windows::Forms::Panel());
            this->programinput = (gcnew System::Windows::Forms::ComboBox());
            this->preview = (gcnew System::Windows::Forms::TextBox());
            this->BorrowButton = (gcnew System::Windows::Forms::Button());
            this->pandiliginput = (gcnew System::Windows::Forms::TextBox());
            this->palainput = (gcnew System::Windows::Forms::TextBox());
            this->scissorinput = (gcnew System::Windows::Forms::TextBox());
            this->mopinput = (gcnew System::Windows::Forms::TextBox());
            this->timbainput = (gcnew System::Windows::Forms::TextBox());
            this->dustpaninput = (gcnew System::Windows::Forms::TextBox());
            this->desiginput = (gcnew System::Windows::Forms::TextBox());
            this->nameinput = (gcnew System::Windows::Forms::TextBox());
            this->DesigR = (gcnew System::Windows::Forms::Label());
            this->ProgramR = (gcnew System::Windows::Forms::Label());
            this->NameR = (gcnew System::Windows::Forms::Label());
            this->tamboinput = (gcnew System::Windows::Forms::TextBox());
            this->Tingtinginput = (gcnew System::Windows::Forms::TextBox());
            this->Pandiligr = (gcnew System::Windows::Forms::Label());
            this->Shovelr = (gcnew System::Windows::Forms::Label());
            this->Scissorr = (gcnew System::Windows::Forms::Label());
            this->Mopr = (gcnew System::Windows::Forms::Label());
            this->Timbar = (gcnew System::Windows::Forms::Label());
            this->DustPanr = (gcnew System::Windows::Forms::Label());
            this->Tambor = (gcnew System::Windows::Forms::Label());
            this->Tingtingr = (gcnew System::Windows::Forms::Label());
            this->ReturnMsg = (gcnew System::Windows::Forms::Label());
            this->date = (gcnew System::Windows::Forms::Label());
            this->DateandTimeR = (gcnew System::Windows::Forms::Label());
            this->ReturnLabel = (gcnew System::Windows::Forms::Label());
            this->HistoryTab = (gcnew System::Windows::Forms::Panel());
            this->Logs = (gcnew System::Windows::Forms::TextBox());
            this->HistoryLabel = (gcnew System::Windows::Forms::Label());
            this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
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
            this->HistoryBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HistoryBtn.Image")));
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
            this->ReturnBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReturnBtn.Image")));
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
            this->BorrowBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BorrowBtn.Image")));
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
            this->HomeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomeBtn.Image")));
            this->HomeBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->HomeBtn->Location = System::Drawing::Point(0, 0);
            this->HomeBtn->Margin = System::Windows::Forms::Padding(0);
            this->HomeBtn->Name = L"HomeBtn";
            this->HomeBtn->Size = System::Drawing::Size(187, 54);
            this->HomeBtn->TabIndex = 3;
            this->HomeBtn->Text = L"Dashboard";
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
            this->HomeTab->Controls->Add(this->HomeLabell);
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
            // HomeLabell
            // 
            this->HomeLabell->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->HomeLabell->AutoSize = true;
            this->HomeLabell->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->HomeLabell->ForeColor = System::Drawing::Color::Maroon;
            this->HomeLabell->Location = System::Drawing::Point(17, 15);
            this->HomeLabell->Name = L"HomeLabell";
            this->HomeLabell->Size = System::Drawing::Size(315, 40);
            this->HomeLabell->TabIndex = 0;
            this->HomeLabell->Text = L"Home/Dashboard";
            // 
            // ReturnTab
            // 
            this->ReturnTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ReturnTab->Controls->Add(this->enterlabel);
            this->ReturnTab->Controls->Add(this->ReturnButton);
            this->ReturnTab->Controls->Add(this->returnpreview);
            this->ReturnTab->Controls->Add(this->idinput);
            this->ReturnTab->Controls->Add(this->label2);
            this->ReturnTab->Controls->Add(this->BorrowLabel);
            this->ReturnTab->Location = System::Drawing::Point(0, 138);
            this->ReturnTab->Name = L"ReturnTab";
            this->ReturnTab->Size = System::Drawing::Size(788, 350);
            this->ReturnTab->TabIndex = 3;
            // 
            // enterlabel
            // 
            this->enterlabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->enterlabel->AutoSize = true;
            this->enterlabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->enterlabel->Location = System::Drawing::Point(472, 51);
            this->enterlabel->Name = L"enterlabel";
            this->enterlabel->Size = System::Drawing::Size(255, 22);
            this->enterlabel->TabIndex = 28;
            this->enterlabel->Text = L"Press (ENTER) to check ID";
            // 
            // ReturnButton
            // 
            this->ReturnButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->ReturnButton->BackColor = System::Drawing::Color::Silver;
            this->ReturnButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ReturnButton->Enabled = false;
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
            this->ReturnButton->Click += gcnew System::EventHandler(this, &MainPage::ReturnButton_Click);
            // 
            // returnpreview
            // 
            this->returnpreview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->returnpreview->BackColor = System::Drawing::SystemColors::ScrollBar;
            this->returnpreview->Font = (gcnew System::Drawing::Font(L"Courier New", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->returnpreview->Location = System::Drawing::Point(29, 82);
            this->returnpreview->Multiline = true;
            this->returnpreview->Name = L"returnpreview";
            this->returnpreview->ReadOnly = true;
            this->returnpreview->Size = System::Drawing::Size(715, 208);
            this->returnpreview->TabIndex = 26;
            // 
            // idinput
            // 
            this->idinput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->idinput->Location = System::Drawing::Point(134, 49);
            this->idinput->Name = L"idinput";
            this->idinput->Size = System::Drawing::Size(271, 20);
            this->idinput->TabIndex = 25;
            this->idinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::idinput_KeyPress);
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
            this->BorrowTab->Controls->Add(this->programinput);
            this->BorrowTab->Controls->Add(this->preview);
            this->BorrowTab->Controls->Add(this->BorrowButton);
            this->BorrowTab->Controls->Add(this->pandiliginput);
            this->BorrowTab->Controls->Add(this->palainput);
            this->BorrowTab->Controls->Add(this->scissorinput);
            this->BorrowTab->Controls->Add(this->mopinput);
            this->BorrowTab->Controls->Add(this->timbainput);
            this->BorrowTab->Controls->Add(this->dustpaninput);
            this->BorrowTab->Controls->Add(this->desiginput);
            this->BorrowTab->Controls->Add(this->nameinput);
            this->BorrowTab->Controls->Add(this->DesigR);
            this->BorrowTab->Controls->Add(this->ProgramR);
            this->BorrowTab->Controls->Add(this->NameR);
            this->BorrowTab->Controls->Add(this->tamboinput);
            this->BorrowTab->Controls->Add(this->Tingtinginput);
            this->BorrowTab->Controls->Add(this->Pandiligr);
            this->BorrowTab->Controls->Add(this->Shovelr);
            this->BorrowTab->Controls->Add(this->Scissorr);
            this->BorrowTab->Controls->Add(this->Mopr);
            this->BorrowTab->Controls->Add(this->Timbar);
            this->BorrowTab->Controls->Add(this->DustPanr);
            this->BorrowTab->Controls->Add(this->Tambor);
            this->BorrowTab->Controls->Add(this->Tingtingr);
            this->BorrowTab->Controls->Add(this->ReturnMsg);
            this->BorrowTab->Controls->Add(this->date);
            this->BorrowTab->Controls->Add(this->DateandTimeR);
            this->BorrowTab->Controls->Add(this->ReturnLabel);
            this->BorrowTab->Location = System::Drawing::Point(0, 138);
            this->BorrowTab->Name = L"BorrowTab";
            this->BorrowTab->Size = System::Drawing::Size(816, 350);
            this->BorrowTab->TabIndex = 4;
            // 
            // programinput
            // 
            this->programinput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->programinput->FormattingEnabled = true;
            this->programinput->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
                L"Bachelor of Science in Business Administration Major in Marketing Management",
                    L"Bachelor of Science in Business Administration Major in Human Resource Management"
                    L"", L"Bachelor of Science in Education Major in English",
                    L"Bachelor of Science in Education Major in Mathematics", L"Bachelor of Science in Electronics Engineering", L"Bachelor of Science in Information Technology",
                    L"Bachelor of Science in Mechanical Engineering", L"Bachelor of Science in Office Administration", L"Bachelor of Science in Psychology",
                    L"Diploma in Information Technology", L"Diploma in Office Management Technology"
            });
            this->programinput->Location = System::Drawing::Point(496, 146);
            this->programinput->Name = L"programinput";
            this->programinput->Size = System::Drawing::Size(249, 21);
            this->programinput->TabIndex = 34;
            this->programinput->Text = L"--Select a Program--";
            this->programinput->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::programinput_SelectedIndexChanged);
            this->programinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::programinput_KeyPress);
            this->programinput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::programinput_MouseClick);
            // 
            // preview
            // 
            this->preview->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->preview->BackColor = System::Drawing::SystemColors::ControlLight;
            this->preview->Font = (gcnew System::Drawing::Font(L"Courier New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->preview->Location = System::Drawing::Point(38, 330);
            this->preview->Multiline = true;
            this->preview->Name = L"preview";
            this->preview->ReadOnly = true;
            this->preview->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->preview->Size = System::Drawing::Size(707, 10);
            this->preview->TabIndex = 33;
            // 
            // BorrowButton
            // 
            this->BorrowButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->BorrowButton->BackColor = System::Drawing::Color::DarkGray;
            this->BorrowButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->BorrowButton->Enabled = false;
            this->BorrowButton->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
            this->BorrowButton->FlatAppearance->BorderSize = 2;
            this->BorrowButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->BorrowButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->BorrowButton->ForeColor = System::Drawing::Color::White;
            this->BorrowButton->Location = System::Drawing::Point(207, 226);
            this->BorrowButton->Name = L"BorrowButton";
            this->BorrowButton->Size = System::Drawing::Size(99, 32);
            this->BorrowButton->TabIndex = 32;
            this->BorrowButton->Text = L"Borrow";
            this->BorrowButton->UseVisualStyleBackColor = false;
            this->BorrowButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::BorrowButton_MouseClick);
            // 
            // pandiliginput
            // 
            this->pandiliginput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->pandiliginput->Location = System::Drawing::Point(152, 303);
            this->pandiliginput->Name = L"pandiliginput";
            this->pandiliginput->Size = System::Drawing::Size(225, 20);
            this->pandiliginput->TabIndex = 31;
            this->pandiliginput->Text = L"0";
            this->pandiliginput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::pandiliginput_MouseClick);
            this->pandiliginput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::pandiliginput_KeyPress);
            // 
            // palainput
            // 
            this->palainput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->palainput->Location = System::Drawing::Point(98, 280);
            this->palainput->Name = L"palainput";
            this->palainput->Size = System::Drawing::Size(279, 20);
            this->palainput->TabIndex = 30;
            this->palainput->Text = L"0";
            this->palainput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::palainput_MouseClick);
            this->palainput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::palainput_KeyPress);
            // 
            // scissorinput
            // 
            this->scissorinput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->scissorinput->Location = System::Drawing::Point(202, 255);
            this->scissorinput->Name = L"scissorinput";
            this->scissorinput->Size = System::Drawing::Size(175, 20);
            this->scissorinput->TabIndex = 29;
            this->scissorinput->Text = L"0";
            this->scissorinput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::scissorinput_MouseClick);
            this->scissorinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::scissorinput_KeyPress);
            // 
            // mopinput
            // 
            this->mopinput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->mopinput->Location = System::Drawing::Point(77, 230);
            this->mopinput->Name = L"mopinput";
            this->mopinput->Size = System::Drawing::Size(300, 20);
            this->mopinput->TabIndex = 28;
            this->mopinput->Text = L"0";
            this->mopinput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::mopinput_MouseClick);
            this->mopinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::mopinput_KeyPress);
            // 
            // timbainput
            // 
            this->timbainput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->timbainput->Location = System::Drawing::Point(101, 202);
            this->timbainput->Name = L"timbainput";
            this->timbainput->Size = System::Drawing::Size(276, 20);
            this->timbainput->TabIndex = 27;
            this->timbainput->Text = L"0";
            this->timbainput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::timbainput_MouseClick);
            this->timbainput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::timbainput_KeyPress);
            // 
            // dustpaninput
            // 
            this->dustpaninput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->dustpaninput->Location = System::Drawing::Point(116, 176);
            this->dustpaninput->Name = L"dustpaninput";
            this->dustpaninput->Size = System::Drawing::Size(261, 20);
            this->dustpaninput->TabIndex = 26;
            this->dustpaninput->Text = L"0";
            this->dustpaninput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::dustpaninput_MouseClick);
            this->dustpaninput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::dustpaninput_KeyPress);
            // 
            // desiginput
            // 
            this->desiginput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->desiginput->Location = System::Drawing::Point(522, 171);
            this->desiginput->Name = L"desiginput";
            this->desiginput->Size = System::Drawing::Size(222, 20);
            this->desiginput->TabIndex = 25;
            this->desiginput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::desiginput_MouseClick);
            this->desiginput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::desiginput_KeyPress);
            // 
            // nameinput
            // 
            this->nameinput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->nameinput->Location = System::Drawing::Point(473, 119);
            this->nameinput->Name = L"nameinput";
            this->nameinput->Size = System::Drawing::Size(271, 20);
            this->nameinput->TabIndex = 23;
            this->nameinput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::nameinput_MouseClick);
            this->nameinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::nameinput_KeyPress);
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
            // tamboinput
            // 
            this->tamboinput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->tamboinput->Location = System::Drawing::Point(144, 150);
            this->tamboinput->Name = L"tamboinput";
            this->tamboinput->Size = System::Drawing::Size(233, 20);
            this->tamboinput->TabIndex = 19;
            this->tamboinput->Text = L"0";
            this->tamboinput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::tamboinput_MouseClick);
            this->tamboinput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::tamboinput_KeyPress);
            // 
            // Tingtinginput
            // 
            this->Tingtinginput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->Tingtinginput->Location = System::Drawing::Point(154, 120);
            this->Tingtinginput->Name = L"Tingtinginput";
            this->Tingtinginput->Size = System::Drawing::Size(223, 20);
            this->Tingtinginput->TabIndex = 18;
            this->Tingtinginput->Text = L"0";
            this->Tingtinginput->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainPage::Tingtinginput_MouseClick);
            this->Tingtinginput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainPage::Tingtinginput_KeyPress);
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
            // date
            // 
            this->date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->date->AutoSize = true;
            this->date->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->date->Location = System::Drawing::Point(156, 52);
            this->date->Name = L"date";
            this->date->Size = System::Drawing::Size(122, 18);
            this->date->TabIndex = 5;
            this->date->Text = L"Date and Time";
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
            this->Logs->BackColor = System::Drawing::SystemColors::ControlLight;
            this->Logs->Font = (gcnew System::Drawing::Font(L"Courier New", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
            // Timer
            // 
            this->Timer->Tick += gcnew System::EventHandler(this, &MainPage::Timer_Tick);
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
            this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
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
        String^ returntxt = "Returned.txt";
        String^ logstxt = "Logs.txt";
        String^ currtxt = "Current.txt";
        String^ previewtext;
    private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
        Timer->Start();
        HomeTab->BringToFront();
        StreamReader^ cur = File::OpenText(currtxt);
        array<String^>^ curr = {"0", "0", "0", "0", "0", "0", "0", "0"};
        String^ str;
        int ctr = 0;
        while ((str = cur->ReadLine()) != nullptr) {
            curr[ctr] = str;
            ctr++;
        }
        cur->Close();
        Tingtingleft->Text = curr[0];
        Tamboleft->Text = curr[1];
        DustPanleft->Text = curr[2];
        Timbaleft->Text = curr[3];
        Mopleft->Text = curr[4];
        Scissorleft->Text = curr[5];
        Palaleft->Text = curr[6];
        Pandiligleft->Text = curr[7];
    }
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
    private: System::Void HomeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        HomePanel->BackColor = System::Drawing::Color::Maroon;
        BorrowingPanel->BackColor = System::Drawing::Color::Snow;
        ReturningPanel->BackColor = System::Drawing::Color::Snow;
        HistoryPanel->BackColor = System::Drawing::Color::Snow;
        HomeTab->BringToFront();
        StreamReader^ cur = File::OpenText(currtxt);
        array<String^>^ curr = { "0", "0", "0", "0", "0", "0", "0", "0" };
        String^ str;
        int ctr = 0;
        while ((str = cur->ReadLine()) != nullptr) {
            curr[ctr] = str;
            ctr++;
        }
        cur->Close();
        Tingtingleft->Text = curr[0];
        Tamboleft->Text = curr[1];
        DustPanleft->Text = curr[2];
        Timbaleft->Text = curr[3];
        Mopleft->Text = curr[4];
        Scissorleft->Text = curr[5];
        Palaleft->Text = curr[6];
        Pandiligleft->Text = curr[7];
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
        StreamReader^ history = File::OpenText(logstxt);
        String^ line;
        while ((line = history->ReadLine()) != nullptr) {
            Logs->AppendText(line);
            Logs->AppendText(Environment::NewLine);
        }
        history->Close();
    }
    private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
        date->Text = System::Convert::ToString(DateTime::Now);
    }
private: System::Void Tingtinginput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        tamboinput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void tamboinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        dustpaninput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void dustpaninput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        timbainput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void timbainput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        mopinput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void mopinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        scissorinput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void scissorinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        palainput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void palainput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        pandiliginput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void pandiliginput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || (e->KeyChar >= 48 && e->KeyChar <= 57) || e->KeyChar == (int)Keys::Enter)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        nameinput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void nameinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || ((e->KeyChar >= (int)Keys::A && e->KeyChar <= (int)Keys::Z) || (e->KeyChar >= 91 && e->KeyChar <= 122)) || e->KeyChar == (int)Keys::Enter || e->KeyChar == (int)Keys::Space || e->KeyChar == 45)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        programinput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
        if (desiginput->Text == "" && (programinput->Text == "--Select a Program--" || programinput->Text == "") && nameinput->Text == "") {
            BorrowButton->Enabled = false;
            BorrowButton->BackColor = System::Drawing::Color::Silver;
        }
        else {
            BorrowButton->Enabled = true;
            BorrowButton->BackColor = System::Drawing::Color::Maroon;
        }
    }
}
private: System::Void programinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (e->KeyChar == (int)Keys::Enter) {
        desiginput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
        if (desiginput->Text == "" && (programinput->Text == "--Select a Program--" || programinput->Text == "") && nameinput->Text == "") {
            BorrowButton->Enabled = false;
            BorrowButton->BackColor = System::Drawing::Color::Silver;
        }
        else {
            BorrowButton->Enabled = true;
            BorrowButton->BackColor = System::Drawing::Color::Maroon;
        }
    }
}
private: System::Void desiginput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!(e->KeyChar == 8 || ((e->KeyChar >= (int)Keys::A && e->KeyChar <= (int)Keys::Z) || (e->KeyChar >= 91 && e->KeyChar <= 122)) || e->KeyChar == (int)Keys::Enter || e->KeyChar == (int)Keys::Space || e->KeyChar == 45)) {
        e->Handled = true;
    }
    if (e->KeyChar == (int)Keys::Enter) {
        Tingtinginput->Focus();
        e->Handled = true;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
        if (desiginput->Text == "" && (programinput->Text == "--Select a Program--" || programinput->Text == "") && nameinput->Text == "") {
            BorrowButton->Enabled = false;
            BorrowButton->BackColor = System::Drawing::Color::Silver;
        }
        else {
            BorrowButton->Enabled = true;
            BorrowButton->BackColor = System::Drawing::Color::Maroon;
        }
    }
}
private: System::Void Tingtinginput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
    if (desiginput->Text == "" && (programinput->Text == "--Select a Program--" || programinput->Text == "") && nameinput->Text == "") {
        BorrowButton->Enabled = false;
        BorrowButton->BackColor = System::Drawing::Color::Silver;
    }
    else {
        BorrowButton->Enabled = true;
        BorrowButton->BackColor = System::Drawing::Color::Maroon;
    }
}
private: System::Void tamboinput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
    if (desiginput->Text == "" && (programinput->Text == "--Select a Program--" || programinput->Text == "") && nameinput->Text == "") {
        BorrowButton->Enabled = false;
        BorrowButton->BackColor = System::Drawing::Color::Silver;
    }
    else {
        BorrowButton->Enabled = true;
        BorrowButton->BackColor = System::Drawing::Color::Maroon;
    }
}
private: System::Void dustpaninput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void timbainput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void mopinput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void scissorinput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void palainput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void pandiliginput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void nameinput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void programinput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void desiginput_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void programinput_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
    preview->Text = previewtext;
}
private: System::Void BorrowButton_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    StreamReader^ cur = File::OpenText(currtxt);
    std::vector<Int32> curr;
    int sum = 0;
    String^ str;
    while ((str = cur->ReadLine()) != nullptr) {
        curr.push_back(System::Convert::ToInt32(str));
    }
    Int32 tib = System::Convert::ToInt32(Tingtinginput->Text);
    Int32 tab = System::Convert::ToInt32(tamboinput->Text);
    Int32 dp = System::Convert::ToInt32(dustpaninput->Text);
    Int32 tim = System::Convert::ToInt32(timbainput->Text);
    Int32 mop = System::Convert::ToInt32(mopinput->Text);
    Int32 scis = System::Convert::ToInt32(scissorinput->Text);
    Int32 pala = System::Convert::ToInt32(palainput->Text);
    Int32 pan = System::Convert::ToInt32(pandiliginput->Text);
    cur->Close();

    for (int x : curr) {
        sum += x;
    }
    if (sum == 0) {
        MessageBox::Show("Failed to borrow.\r\nYou cannot borrow nothing!", "CWTS Inventory Management System");
        BorrowButton->Enabled = false;
        BorrowButton->BackColor = System::Drawing::Color::Silver;
    }
    if ((curr[0] - tib < 0) || (curr[1] - tab < 0) || (curr[2] - dp < 0) || (curr[3] - dp < 0) || (curr[4] - tim < 0) || (curr[5] - mop < 0) || (curr[6] - pala < 0) || (curr[7] - pan < 0)) {
        MessageBox::Show("Failed to borrow.\r\nSome items you have borrowed exceeded current value.\r\n(Check in dashboard to see items remaining then Try again.)", "CWTS Inventory Management System");
        BorrowButton->Enabled = false;
        BorrowButton->BackColor = System::Drawing::Color::Silver;
    }
    else {
        String^ id = System::Convert::ToString(rand()) + System::Convert::ToString(rand()) + System::Convert::ToString(rand()) + System::Convert::ToString(rand());
        StreamReader^ num = File::OpenText("Num.txt");
        String^ number;
        int nam = 0;
        while ((number = num->ReadLine()) != nullptr) {
            nam = System::Convert::ToInt32(num->ReadLine());
        }
        num->Close();
        Int64 idnum = System::Convert::ToInt64(id) + nam;
        id = System::Convert::ToString(idnum);
        MessageBox::Show("Items Borrowed Successfully!\r\nBorrow ID: " + id, "CWTS Inventory Management System");
        if (Tingtinginput->Text == "")
            Tingtinginput->Text = "0";
        if (tamboinput->Text == "")
            tamboinput->Text = "0";
        if (dustpaninput->Text == "")
            dustpaninput->Text = "0";
        if (timbainput->Text == "")
            timbainput->Text = "0";
        if (mopinput->Text == "")
            mopinput->Text = "0";
        if (scissorinput->Text == "")
            scissorinput->Text = "0";
        StreamWriter^ logs = gcnew StreamWriter(logstxt, true);
        logs->WriteLine("{0}", id);
        logs->WriteLine(DateTime::Now);
        logs->WriteLine("Action: Borrow");
        logs->WriteLine("Name: {0}", nameinput->Text);
        logs->WriteLine("Program: {0}", programinput->Text);
        logs->WriteLine("Designation: {0}", desiginput->Text);
        logs->WriteLine("Borrowed Items:");
        logs->WriteLine("Walis Tingting: {0}", Tingtinginput->Text);
        logs->WriteLine("Walis Tambo: {0}", tamboinput->Text);
        logs->WriteLine("Dust Pan: {0}", dustpaninput->Text);
        logs->WriteLine("Bucket: {0}", timbainput->Text);
        logs->WriteLine("Mop: {0}", mopinput->Text);
        logs->WriteLine("Gardening Scissor: {0}", scissorinput->Text);
        logs->WriteLine("Shovel: {0}", palainput->Text);
        logs->WriteLine("Watering Can: {0}", pandiliginput->Text);
        logs->WriteLine(" ");
        logs->Close();

        StreamWriter^ numup = gcnew StreamWriter("Num.txt");
        numup->WriteLine("{0}", System::Convert::ToString(nam + 1));
        numup->Close();

        StreamWriter^ current = gcnew StreamWriter(currtxt);
        current->WriteLine(System::Convert::ToString(curr[0] - System::Convert::ToInt32(tib)));
        current->WriteLine(System::Convert::ToString(curr[1] - System::Convert::ToInt32(tab)));
        current->WriteLine(System::Convert::ToString(curr[2] - System::Convert::ToInt32(dp)));
        current->WriteLine(System::Convert::ToString(curr[3] - System::Convert::ToInt32(tim)));
        current->WriteLine(System::Convert::ToString(curr[4] - System::Convert::ToInt32(mop)));
        current->WriteLine(System::Convert::ToString(curr[5] - System::Convert::ToInt32(scis)));
        current->WriteLine(System::Convert::ToString(curr[6] - System::Convert::ToInt32(pala)));
        current->WriteLine(System::Convert::ToString(curr[7] - System::Convert::ToInt32(pan)));
        current->Close();

        nameinput->Text = "";
        programinput->Text = "--Select Program--";
        desiginput->Text = "";
        Tingtinginput->Text = "0";
        tamboinput->Text = "0";
        dustpaninput->Text = "0";
        timbainput->Text = "0";
        mopinput->Text = "0";
        scissorinput->Text = "0";
        palainput->Text = "0";
        pandiliginput->Text = "0";
        BorrowButton->Enabled = false;
        BorrowButton->BackColor = System::Drawing::Color::Silver;
        previewtext = "Name: " + nameinput->Text + "\r\nProgram: " + programinput->Text + "\r\nDesignation: " + desiginput->Text + "\r\nNumber of items borrowed:\r\nWalis Tingting: " + Tingtinginput->Text + "\r\nWalis Tambo: " + tamboinput->Text + "\r\nDust Pan: " + dustpaninput->Text + "\r\nBucket: " + timbainput->Text + "\r\nMop: " + mopinput->Text + "\r\nGardening Scissor: " + scissorinput->Text + "\r\nShovel: " + palainput->Text + "\r\nWatering Can: " + pandiliginput->Text;
        preview->Text = previewtext;
    }
}
private: System::Void idinput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (e->KeyChar == (int)Keys::Enter) {
        e->Handled = true;
        String^ id;
        bool idFound = false, idhad = false;

        StreamReader^ retr = File::OpenText(returntxt);
        while ((id = retr->ReadLine()) != nullptr) {
            if (idinput->Text == id) {
                returnpreview->Text = "Items has been already returned!";
                idhad = true;
                ReturnButton->BackColor = System::Drawing::Color::Silver;
                ReturnButton->Enabled = false;
                break;
            }
        }
        retr->Close();

        if (!idhad) {
            StreamReader^ logs = File::OpenText(logstxt);
            int ctr = 0;
            while ((id = logs->ReadLine()) != nullptr) {
                if (idinput->Text == id) {
                    idFound = true;
                    for (int i = 0; i < 15; i++) {
                        String^ line = logs->ReadLine();
                        if (line == nullptr)
                            break;
                        returnpreview->AppendText(line);
                        returnpreview->AppendText(Environment::NewLine);
                    }
                    ReturnButton->BackColor = System::Drawing::Color::Maroon;
                    ReturnButton->Enabled = true;
                    break;
                }
            }
            if (!idFound) {
                returnpreview->Text = "Invalid ID";
            }
            logs->Close();
        }
    }
}
private: System::Void ReturnButton_Click(System::Object^ sender, System::EventArgs^ e) {
    std::vector<Int32> nums;
    array<String^>^ currnt = { "0", "0", "0", "0", "0", "0" };
    String^ id = idinput->Text;
    StreamReader^ logs = File::OpenText(logstxt);
    int ctr = 0, count = 0;
    bool idFound = false;

    while (logs->Peek() >= 0) {
        String^ line = logs->ReadLine();
        if (line == id) {
            idFound = true;
            for (int i = 0; i < 6; i++) {
                logs->ReadLine();
                currnt[i] = logs->ReadLine();
            }
            for (int i = 0; i < 9; i++) {
                line = logs->ReadLine();
                if (line != nullptr) {
                    Regex^ regex = gcnew Regex("\\d+");
                    Match^ match = regex->Match(line);
                    if (match->Success) {
                        nums.push_back(System::Convert::ToInt32(match->Value));
                        count++;
                    }
                }
            }
            break;
        }
    }
    if (nums.size() < 8) {
        for (int i = count; i < 8; i++) {
            nums.push_back(0);
        }
    }
    logs->Close();
    int allitems = 0;
    for (int x = 0; x < nums.size(); x++) {
        allitems += nums[x];
    }
    if (MessageBox::Show("Return all " + allitems + " items?", "CWTS Inventory Management System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        StreamReader^ cur = File::OpenText(currtxt);
        std::vector<Int32> curr;
        String^ str;

        while ((str = cur->ReadLine()) != nullptr) {
            curr.push_back(System::Convert::ToInt32(str));
        }
        cur->Close();

        StreamWriter^ current = gcnew StreamWriter(currtxt);
        for (int i = 0; i < nums.size(); i++) {
            current->WriteLine(System::Convert::ToString(curr[i] + nums[i]));
        }
        current->Close();

        StreamWriter^ logs = gcnew StreamWriter(logstxt, true);
        logs->WriteLine(DateTime::Now);
        logs->WriteLine("{0}", currnt[0]);
        logs->WriteLine("Action: Return");
        logs->WriteLine("Borrowed Items:");
        logs->WriteLine("Walis Tingting: {0}", nums[0]);
        logs->WriteLine("Walis Tambo: {0}", nums[1]);
        logs->WriteLine("Dust Pan: {0}", nums[2]);
        logs->WriteLine("Bucket: {0}", nums[3]);
        logs->WriteLine("Mop: {0}", nums[4]);
        logs->WriteLine("Gardening Scissor: {0}", nums[5]);
        logs->WriteLine("Shovel: {0}", nums[6]);
        logs->WriteLine("Watering Can: {0}", nums[7]);
        logs->WriteLine(" ");
        logs->Close();

        StreamWriter^ ret = gcnew StreamWriter(returntxt, true);
        ret->WriteLine("{0}", id);
        ret->Close();

        MessageBox::Show(allitems + " items have been returned successfully!", "CWTS Inventory Management System");

        ReturnButton->BackColor = System::Drawing::Color::Silver;
        ReturnButton->Enabled = false;
    }
}
};
}
