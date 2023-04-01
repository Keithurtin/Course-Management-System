#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include "account.h"
#include "allStruct.h"
#include "loginScreen.h"

namespace UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace std;

	/// <summary>
	/// Summary for mainScreen
	/// </summary>
	public ref class mainScreen : public System::Windows::Forms::Form {
	public:
		Account* curAccount;
		bool logout = false;

	public:

	private: System::Windows::Forms::Panel^ changePassPanel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ oldPass;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ newPass;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ newPassCF;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label8;




		   
	public:
		mainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void getData(Account* account)
		{
			curAccount = account;
		}

		void returnData(Account* &account)
		{
			account = curAccount;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ staffPanel;

	protected:












	private: System::Windows::Forms::Button^ profileButton;



	private: System::Windows::Forms::Button^ menuButton;

	private: System::Windows::Forms::Panel^ profilePanel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Button^ changePassButton;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ fullnameLabel;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ genderLabel;
	private: System::Windows::Forms::Label^ DoBLabel;
	private: System::Windows::Forms::Label^ socialIDLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ logoutButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;













	protected:

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
			this->staffPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->profileButton = (gcnew System::Windows::Forms::Button());
			this->menuButton = (gcnew System::Windows::Forms::Button());
			this->profilePanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->changePassButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fullnameLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->DoBLabel = (gcnew System::Windows::Forms::Label());
			this->socialIDLabel = (gcnew System::Windows::Forms::Label());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->changePassPanel = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->newPass = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->oldPass = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->newPassCF = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->staffPanel->SuspendLayout();
			this->profilePanel->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->changePassPanel->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// staffPanel
			// 
			this->staffPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->staffPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->staffPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->staffPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->staffPanel->ColumnCount = 3;
			this->staffPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->staffPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->staffPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->staffPanel->Controls->Add(this->profileButton, 2, 0);
			this->staffPanel->Controls->Add(this->menuButton, 0, 0);
			this->staffPanel->ForeColor = System::Drawing::Color::White;
			this->staffPanel->Location = System::Drawing::Point(-3, -1);
			this->staffPanel->Name = L"staffPanel";
			this->staffPanel->RowCount = 1;
			this->staffPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->staffPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->staffPanel->Size = System::Drawing::Size(888, 52);
			this->staffPanel->TabIndex = 1;
			// 
			// profileButton
			// 
			this->profileButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->profileButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->profileButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->profileButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->profileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->profileButton->Location = System::Drawing::Point(669, 3);
			this->profileButton->Name = L"profileButton";
			this->profileButton->Size = System::Drawing::Size(216, 46);
			this->profileButton->TabIndex = 0;
			this->profileButton->Text = L"PROFILE";
			this->profileButton->UseVisualStyleBackColor = true;
			this->profileButton->Click += gcnew System::EventHandler(this, &mainScreen::profileButton_Click);
			// 
			// menuButton
			// 
			this->menuButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->menuButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->menuButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->menuButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5));
			this->menuButton->Location = System::Drawing::Point(3, 3);
			this->menuButton->Name = L"menuButton";
			this->menuButton->Size = System::Drawing::Size(52, 46);
			this->menuButton->TabIndex = 1;
			this->menuButton->Text = L"___\r\n___\r\n___\r\n";
			this->menuButton->UseVisualStyleBackColor = true;
			// 
			// profilePanel
			// 
			this->profilePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->profilePanel->Controls->Add(this->button1);
			this->profilePanel->Controls->Add(this->tableLayoutPanel1);
			this->profilePanel->Location = System::Drawing::Point(146, 133);
			this->profilePanel->Name = L"profilePanel";
			this->profilePanel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->profilePanel->Size = System::Drawing::Size(636, 534);
			this->profilePanel->TabIndex = 4;
			this->profilePanel->Visible = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(66, 429);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(486, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"CLOSE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainScreen::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.92076F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.07924F)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->changePassButton, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->fullnameLabel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->usernameLabel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->genderLabel, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->DoBLabel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->socialIDLabel, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->logoutButton, 1, 5);
			this->tableLayoutPanel1->Location = System::Drawing::Point(66, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(486, 402);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(64, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 26);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Full name:";
			// 
			// changePassButton
			// 
			this->changePassButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->changePassButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->changePassButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->changePassButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->changePassButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->changePassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changePassButton->ForeColor = System::Drawing::Color::White;
			this->changePassButton->Location = System::Drawing::Point(32, 313);
			this->changePassButton->Name = L"changePassButton";
			this->changePassButton->Size = System::Drawing::Size(178, 85);
			this->changePassButton->TabIndex = 1;
			this->changePassButton->Text = L"CHANGE PASSWORD";
			this->changePassButton->UseVisualStyleBackColor = true;
			this->changePassButton->Click += gcnew System::EventHandler(this, &mainScreen::changePassButton_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(61, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(76, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Gender:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(56, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 26);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Day of birth:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(68, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 26);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Social ID:";
			// 
			// fullnameLabel
			// 
			this->fullnameLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->fullnameLabel->AutoSize = true;
			this->fullnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->fullnameLabel->ForeColor = System::Drawing::Color::White;
			this->fullnameLabel->Location = System::Drawing::Point(304, 80);
			this->fullnameLabel->Name = L"fullnameLabel";
			this->fullnameLabel->Size = System::Drawing::Size(120, 26);
			this->fullnameLabel->TabIndex = 0;
			this->fullnameLabel->Text = L"nameLabel";
			// 
			// usernameLabel
			// 
			this->usernameLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->usernameLabel->ForeColor = System::Drawing::Color::White;
			this->usernameLabel->Location = System::Drawing::Point(283, 18);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(162, 26);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"usernameLabel";
			// 
			// genderLabel
			// 
			this->genderLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->genderLabel->AutoSize = true;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->genderLabel->ForeColor = System::Drawing::Color::White;
			this->genderLabel->Location = System::Drawing::Point(298, 142);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(132, 26);
			this->genderLabel->TabIndex = 0;
			this->genderLabel->Text = L"genderLabel";
			// 
			// DoBLabel
			// 
			this->DoBLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DoBLabel->AutoSize = true;
			this->DoBLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->DoBLabel->ForeColor = System::Drawing::Color::White;
			this->DoBLabel->Location = System::Drawing::Point(310, 204);
			this->DoBLabel->Name = L"DoBLabel";
			this->DoBLabel->Size = System::Drawing::Size(108, 26);
			this->DoBLabel->TabIndex = 0;
			this->DoBLabel->Text = L"DoBLabel";
			// 
			// socialIDLabel
			// 
			this->socialIDLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->socialIDLabel->AutoSize = true;
			this->socialIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->socialIDLabel->ForeColor = System::Drawing::Color::White;
			this->socialIDLabel->Location = System::Drawing::Point(292, 266);
			this->socialIDLabel->Name = L"socialIDLabel";
			this->socialIDLabel->Size = System::Drawing::Size(143, 26);
			this->socialIDLabel->TabIndex = 0;
			this->socialIDLabel->Text = L"socialIDLabel";
			// 
			// logoutButton
			// 
			this->logoutButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logoutButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->logoutButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->logoutButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->logoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutButton->ForeColor = System::Drawing::Color::White;
			this->logoutButton->Location = System::Drawing::Point(283, 313);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(162, 86);
			this->logoutButton->TabIndex = 1;
			this->logoutButton->Text = L"LOG OUT";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &mainScreen::logoutButton_Click);
			// 
			// changePassPanel
			// 
			this->changePassPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->changePassPanel->Controls->Add(this->tableLayoutPanel2);
			this->changePassPanel->Location = System::Drawing::Point(146, 133);
			this->changePassPanel->Name = L"changePassPanel";
			this->changePassPanel->Size = System::Drawing::Size(636, 534);
			this->changePassPanel->TabIndex = 5;
			this->changePassPanel->Visible = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->panel2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel3, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 3);
			this->tableLayoutPanel2->Location = System::Drawing::Point(70, 50);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 22.22222F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(496, 405);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->newPass);
			this->panel2->Location = System::Drawing::Point(3, 93);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(490, 84);
			this->panel2->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(0, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(161, 26);
			this->label7->TabIndex = 0;
			this->label7->Text = L"New password:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(2, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(476, 16);
			this->label10->TabIndex = 2;
			this->label10->Text = L"___________________________________________________________________";
			// 
			// newPass
			// 
			this->newPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->newPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->newPass->ForeColor = System::Drawing::Color::White;
			this->newPass->Location = System::Drawing::Point(5, 33);
			this->newPass->Name = L"newPass";
			this->newPass->Size = System::Drawing::Size(473, 25);
			this->newPass->TabIndex = 1;
			this->newPass->UseSystemPasswordChar = true;
			this->newPass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::newPass_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->oldPass);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(490, 84);
			this->panel1->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(2, 56);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(476, 16);
			this->label9->TabIndex = 2;
			this->label9->Text = L"___________________________________________________________________";
			// 
			// oldPass
			// 
			this->oldPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->oldPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->oldPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->oldPass->ForeColor = System::Drawing::Color::White;
			this->oldPass->Location = System::Drawing::Point(5, 33);
			this->oldPass->Name = L"oldPass";
			this->oldPass->Size = System::Drawing::Size(473, 25);
			this->oldPass->TabIndex = 1;
			this->oldPass->UseSystemPasswordChar = true;
			this->oldPass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::oldPass_KeyDown);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(0, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 26);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Old password:";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->newPassCF);
			this->panel3->Location = System::Drawing::Point(3, 183);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(490, 84);
			this->panel3->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 26);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Confirm new password:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(2, 56);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(476, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"___________________________________________________________________";
			// 
			// newPassCF
			// 
			this->newPassCF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->newPassCF->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newPassCF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->newPassCF->ForeColor = System::Drawing::Color::White;
			this->newPassCF->Location = System::Drawing::Point(5, 33);
			this->newPassCF->Name = L"newPassCF";
			this->newPassCF->Size = System::Drawing::Size(473, 25);
			this->newPassCF->TabIndex = 1;
			this->newPassCF->UseSystemPasswordChar = true;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->button4, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button3, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 273);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(490, 129);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(287, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"CANCEL";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainScreen::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(3, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 52);
			this->button4->TabIndex = 3;
			this->button4->Text = L"CONFIRM";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// mainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->ClientSize = System::Drawing::Size(885, 767);
			this->Controls->Add(this->staffPanel);
			this->Controls->Add(this->changePassPanel);
			this->Controls->Add(this->profilePanel);
			this->Name = L"mainScreen";
			this->Text = L"mainScreen";
			this->Load += gcnew System::EventHandler(this, &mainScreen::mainScreen_Load);
			this->staffPanel->ResumeLayout(false);
			this->profilePanel->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->changePassPanel->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::String^ convertString(string st) {
			return gcnew System::String(st.c_str());
		}

	private:
		string convertToString(System::String^ st) {
			return msclr::interop::marshal_as<std::string>(st);
		}

	private:
		System::Void mainScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		}

	private:
		System::String^ intToString(int x) {
			return System::Convert::ToString(x);
		}

	private:
		System::Void profileButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!profilePanel->Visible)
				profilePanel->Show();
			usernameLabel->Text = convertString(curAccount->username);
			fullnameLabel->Text = convertString(curAccount->lastName + " " + curAccount->firstName);
			genderLabel->Text = convertString(curAccount->Gender);
			DoBLabel->Text = intToString(curAccount->dateOfBirth.day) + "/" + intToString(curAccount->dateOfBirth.month) + "/" + intToString(curAccount->dateOfBirth.year);
			socialIDLabel->Text = convertString(curAccount->socialID);
		}

	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			profilePanel->Hide();
		}

	private: 
		System::Void changePassButton_Click(System::Object^ sender, System::EventArgs^ e) {
			profilePanel->Hide();
			changePassPanel->Show();
		}

	private: 
		System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
			logout = true;
			Close();
		}

	private: 
		System::Void oldPass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				newPass->Focus();
		}

	private: 
		System::Void newPass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				newPassCF->Focus();
		}

	private: 
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			changePassPanel->Hide();
			profilePanel->Show();
		}
};
}
