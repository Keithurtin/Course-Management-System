#pragma once
#include <msclr/marshal_cppstd.h>
#include "allStruct.h"
#include "account.h"
#include "mainScreen.h"

namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginScreen
	/// </summary>
	public ref class loginScreen : public System::Windows::Forms::Form{
	public:
		Account* accountList;
		bool login = false;
		Account* curAccount;

	public:
		loginScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void getData(Account* accountList0)
		{
			accountList = accountList0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ username;
	protected:
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ loginButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginScreen::typeid));
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->username->BackColor = System::Drawing::Color::White;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->username->Location = System::Drawing::Point(381, 168);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(445, 55);
			this->username->TabIndex = 0;
			this->username->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginScreen::username_KeyDown);
			// 
			// password
			// 
			this->password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->password->Location = System::Drawing::Point(381, 273);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(445, 55);
			this->password->TabIndex = 1;
			this->password->UseSystemPasswordChar = true;
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginScreen::password_KeyDown);
			// 
			// loginButton
			// 
			this->loginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->loginButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->loginButton->Location = System::Drawing::Point(381, 401);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(445, 66);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &loginScreen::loginButton_Click);
			// 
			// loginScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(882, 493);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->MaximumSize = System::Drawing::Size(900, 540);
			this->MinimumSize = System::Drawing::Size(900, 540);
			this->Name = L"loginScreen";
			this->Text = L"loginScreen";
			this->Load += gcnew System::EventHandler(this, &loginScreen::loginScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::String^ convertString(string st) {
			return gcnew System::String(st.c_str());
		}

	private: 
		string convertToString(System::String^ st){
			return msclr::interop::marshal_as<std::string>(st);
		}

	private: 
		System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
			curAccount = takeAccount(accountList, convertToString(username->Text), convertToString(password->Text));
			if (curAccount){
				login = true;
				Close();
			}
			else
				MessageBox::Show("Invalid login, please try again!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

	private: 
		System::Void loginScreen_Load(System::Object^ sender, System::EventArgs^ e) {
			username->Focus();
		}

	private:
		System::Void username_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab) {
				password->Focus();
			}
		}

	private:
		System::Void password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter) {
				loginButton->PerformClick();
			}
		}
};
}
