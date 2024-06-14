#pragma once


#include "MainPage.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginWindow
	/// </summary>
	public ref class LoginWindow : public System::Windows::Forms::Form
	{
	public:
		LoginWindow(void)
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
		~LoginWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginTitle;
	private: System::Windows::Forms::TextBox^ UserEdit;

	private: System::Windows::Forms::Label^ Userlabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ PasswordEdit;

	private: System::Windows::Forms::CheckBox^ ShowPassword;


	private: System::Windows::Forms::Button^ LoginButton;

	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ Errorlabel;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginWindow::typeid));
			this->LoginTitle = (gcnew System::Windows::Forms::Label());
			this->UserEdit = (gcnew System::Windows::Forms::TextBox());
			this->Userlabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PasswordEdit = (gcnew System::Windows::Forms::TextBox());
			this->ShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->Errorlabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LoginTitle
			// 
			this->LoginTitle->AutoSize = true;
			this->LoginTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginTitle->ForeColor = System::Drawing::Color::Maroon;
			this->LoginTitle->Location = System::Drawing::Point(282, 166);
			this->LoginTitle->Name = L"LoginTitle";
			this->LoginTitle->Size = System::Drawing::Size(293, 15);
			this->LoginTitle->TabIndex = 0;
			this->LoginTitle->Text = L"PUP-Taguig CWTS Inventory Management Program";
			// 
			// UserEdit
			// 
			this->UserEdit->BackColor = System::Drawing::SystemColors::Menu;
			this->UserEdit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserEdit->Location = System::Drawing::Point(283, 220);
			this->UserEdit->Name = L"UserEdit";
			this->UserEdit->Size = System::Drawing::Size(292, 19);
			this->UserEdit->TabIndex = 1;
			this->UserEdit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginWindow::UserEdit_KeyPress);
			// 
			// Userlabel
			// 
			this->Userlabel->AutoSize = true;
			this->Userlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Userlabel->Location = System::Drawing::Point(280, 200);
			this->Userlabel->Name = L"Userlabel";
			this->Userlabel->Size = System::Drawing::Size(73, 17);
			this->Userlabel->TabIndex = 2;
			this->Userlabel->Text = L"Username";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(285, 240);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(289, 2);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(284, 292);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(289, 2);
			this->panel2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(279, 252);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Password";
			// 
			// PasswordEdit
			// 
			this->PasswordEdit->BackColor = System::Drawing::SystemColors::Menu;
			this->PasswordEdit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordEdit->Location = System::Drawing::Point(282, 272);
			this->PasswordEdit->Name = L"PasswordEdit";
			this->PasswordEdit->Size = System::Drawing::Size(292, 19);
			this->PasswordEdit->TabIndex = 4;
			this->PasswordEdit->UseSystemPasswordChar = true;
			this->PasswordEdit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginWindow::PasswordEdit_KeyPress);
			// 
			// ShowPassword
			// 
			this->ShowPassword->AutoSize = true;
			this->ShowPassword->Location = System::Drawing::Point(286, 303);
			this->ShowPassword->Name = L"ShowPassword";
			this->ShowPassword->Size = System::Drawing::Size(102, 17);
			this->ShowPassword->TabIndex = 7;
			this->ShowPassword->Text = L"Show Password";
			this->ShowPassword->UseVisualStyleBackColor = true;
			this->ShowPassword->CheckedChanged += gcnew System::EventHandler(this, &LoginWindow::ShowPassword_CheckedChanged);
			// 
			// LoginButton
			// 
			this->LoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LoginButton->FlatAppearance->BorderSize = 2;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::Maroon;
			this->LoginButton->Location = System::Drawing::Point(331, 326);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(99, 32);
			this->LoginButton->TabIndex = 8;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &LoginWindow::LoginButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::Maroon;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->ExitButton->FlatAppearance->BorderSize = 2;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::White;
			this->ExitButton->Location = System::Drawing::Point(436, 326);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(99, 32);
			this->ExitButton->TabIndex = 10;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &LoginWindow::ExitButton_Click);
			// 
			// Errorlabel
			// 
			this->Errorlabel->AutoSize = true;
			this->Errorlabel->ForeColor = System::Drawing::Color::Red;
			this->Errorlabel->Location = System::Drawing::Point(281, 187);
			this->Errorlabel->Name = L"Errorlabel";
			this->Errorlabel->Size = System::Drawing::Size(170, 13);
			this->Errorlabel->TabIndex = 11;
			this->Errorlabel->Text = L"Incorrect Username and Password";
			this->Errorlabel->Visible = false;
			// 
			// LoginWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(838, 441);
			this->Controls->Add(this->Errorlabel);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->ShowPassword);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PasswordEdit);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Userlabel);
			this->Controls->Add(this->UserEdit);
			this->Controls->Add(this->LoginTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginWindow";
			this->Text = L"LoginWindow";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginWindow::LoginWindow_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginWindow::LoginWindow_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginWindow::LoginWindow_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (UserEdit->Text == "admin" && PasswordEdit->Text == "pass") { 
		this->Hide();
		MainPage mainp;
		mainp.ShowDialog();
		this->Close();
	}
	else
		Errorlabel->Visible = true;
}
private: System::Void ShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (ShowPassword->Checked)
		PasswordEdit->UseSystemPasswordChar = 0;
	else
		PasswordEdit->UseSystemPasswordChar = true;
}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   bool dragging;
	   Point offset;
private: System::Void LoginWindow_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void LoginWindow_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void LoginWindow_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging) {
		Point CurrentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(CurrentScreenPosition.X - offset.X, CurrentScreenPosition.Y - offset.Y);
	}
}
private: System::Void UserEdit_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (int)Keys::Enter) {
		PasswordEdit->Focus();
	}
}
private: System::Void PasswordEdit_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (int)Keys::Enter) {
		LoginButton->PerformClick();
	}
}
};
}
