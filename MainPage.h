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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->DashboardBtn = (gcnew System::Windows::Forms::Button());
			this->BRBtn = (gcnew System::Windows::Forms::Button());
			this->LogBtn = (gcnew System::Windows::Forms::Button());
			this->HomeBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->ExitBtn);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(790, 49);
			this->panel1->TabIndex = 0;
			// 
			// ExitBtn
			// 
			this->ExitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExitBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitBtn.Image")));
			this->ExitBtn->Location = System::Drawing::Point(744, 9);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(38, 28);
			this->ExitBtn->TabIndex = 2;
			this->ExitBtn->UseVisualStyleBackColor = true;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MainPage::ExitBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(49, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(497, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PUP-Taguig CWTS Inventory Management System";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->DashboardBtn, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->BRBtn, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->LogBtn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->HomeBtn, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(1, 48);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(787, 62);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// DashboardBtn
			// 
			this->DashboardBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DashboardBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DashboardBtn->ForeColor = System::Drawing::Color::Maroon;
			this->DashboardBtn->Location = System::Drawing::Point(591, 3);
			this->DashboardBtn->Name = L"DashboardBtn";
			this->DashboardBtn->Size = System::Drawing::Size(193, 56);
			this->DashboardBtn->TabIndex = 3;
			this->DashboardBtn->Text = L"Dashboard";
			this->DashboardBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->DashboardBtn->UseVisualStyleBackColor = true;
			// 
			// BRBtn
			// 
			this->BRBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BRBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BRBtn->ForeColor = System::Drawing::Color::Maroon;
			this->BRBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->BRBtn->Location = System::Drawing::Point(395, 3);
			this->BRBtn->Name = L"BRBtn";
			this->BRBtn->Size = System::Drawing::Size(190, 56);
			this->BRBtn->TabIndex = 2;
			this->BRBtn->Text = L"Borrow/Return";
			this->BRBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->BRBtn->UseVisualStyleBackColor = true;
			// 
			// LogBtn
			// 
			this->LogBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LogBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogBtn->ForeColor = System::Drawing::Color::Maroon;
			this->LogBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogBtn.Image")));
			this->LogBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->LogBtn->Location = System::Drawing::Point(199, 3);
			this->LogBtn->Name = L"LogBtn";
			this->LogBtn->Size = System::Drawing::Size(190, 56);
			this->LogBtn->TabIndex = 1;
			this->LogBtn->Text = L"Log";
			this->LogBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->LogBtn->UseVisualStyleBackColor = true;
			// 
			// HomeBtn
			// 
			this->HomeBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->HomeBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HomeBtn->ForeColor = System::Drawing::Color::Maroon;
			this->HomeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomeBtn.Image")));
			this->HomeBtn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->HomeBtn->Location = System::Drawing::Point(3, 3);
			this->HomeBtn->Name = L"HomeBtn";
			this->HomeBtn->Size = System::Drawing::Size(190, 56);
			this->HomeBtn->TabIndex = 0;
			this->HomeBtn->Text = L"Home";
			this->HomeBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->HomeBtn->UseVisualStyleBackColor = true;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 488);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
