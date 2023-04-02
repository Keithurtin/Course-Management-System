#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include "account.h"
#include "allStruct.h"
#include "loginScreen.h"
#include "schoolYear.h"

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
		SchoolYear* schoolYearList;

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
	private: System::Windows::Forms::Button^ confirmChangePass;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ menuPanel;

	private: System::Windows::Forms::Button^ newButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ newSchoolYear;
	private: System::Windows::Forms::Panel^ schoolYearPanel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ startYear;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ endYear;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ addClassButton;

	private: System::Windows::Forms::TextBox^ newClass;
	private: System::Windows::Forms::ListBox^ listClass;









	private: System::Windows::Forms::Label^ label8;




		   
	public:
		mainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void getData(Account* account, SchoolYear* schoolYear)
		{
			curAccount = account;
			schoolYearList = schoolYear;
		}

		void returnData(Account* &account, SchoolYear* &schoolYear)
		{
			account = curAccount;
			schoolYear = schoolYearList;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fullnameLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->changePassButton = (gcnew System::Windows::Forms::Button());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->socialIDLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DoBLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
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
			this->confirmChangePass = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuPanel = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->newButton = (gcnew System::Windows::Forms::Button());
			this->newSchoolYear = (gcnew System::Windows::Forms::Button());
			this->schoolYearPanel = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->listClass = (gcnew System::Windows::Forms::ListBox());
			this->addClassButton = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->newClass = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->startYear = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->endYear = (gcnew System::Windows::Forms::TextBox());
			this->staffPanel->SuspendLayout();
			this->profilePanel->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->changePassPanel->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->menuPanel->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->schoolYearPanel->SuspendLayout();
			this->panel6->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
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
			this->staffPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->profileButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->profileButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->profileButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->profileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->profileButton->Location = System::Drawing::Point(669, 2);
			this->profileButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->menuButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->menuButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->menuButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->menuButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->menuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Bold));
			this->menuButton->Location = System::Drawing::Point(3, 2);
			this->menuButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuButton->Name = L"menuButton";
			this->menuButton->Size = System::Drawing::Size(49, 48);
			this->menuButton->TabIndex = 1;
			this->menuButton->Text = L"---\r\n---\r\n---";
			this->menuButton->UseVisualStyleBackColor = true;
			this->menuButton->Click += gcnew System::EventHandler(this, &mainScreen::menuButton_Click);
			// 
			// profilePanel
			// 
			this->profilePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->profilePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->profilePanel->Controls->Add(this->button1);
			this->profilePanel->Controls->Add(this->tableLayoutPanel1);
			this->profilePanel->Location = System::Drawing::Point(147, 133);
			this->profilePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->button1->Location = System::Drawing::Point(67, 430);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(485, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"CLOSE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainScreen::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.92076F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.07924F)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->fullnameLabel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->usernameLabel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->changePassButton, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->logoutButton, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->socialIDLabel, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->DoBLabel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->genderLabel, 1, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(67, 2);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(485, 402);
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
			// fullnameLabel
			// 
			this->fullnameLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->fullnameLabel->AutoSize = true;
			this->fullnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->fullnameLabel->ForeColor = System::Drawing::Color::White;
			this->fullnameLabel->Location = System::Drawing::Point(303, 80);
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
			this->usernameLabel->Location = System::Drawing::Point(282, 18);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(162, 26);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"usernameLabel";
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
			this->changePassButton->Location = System::Drawing::Point(31, 313);
			this->changePassButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->changePassButton->Name = L"changePassButton";
			this->changePassButton->Size = System::Drawing::Size(179, 85);
			this->changePassButton->TabIndex = 1;
			this->changePassButton->Text = L"CHANGE PASSWORD";
			this->changePassButton->UseVisualStyleBackColor = true;
			this->changePassButton->Click += gcnew System::EventHandler(this, &mainScreen::changePassButton_Click);
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
			this->logoutButton->Location = System::Drawing::Point(282, 313);
			this->logoutButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(163, 86);
			this->logoutButton->TabIndex = 1;
			this->logoutButton->Text = L"LOG OUT";
			this->logoutButton->UseVisualStyleBackColor = true;
			this->logoutButton->Click += gcnew System::EventHandler(this, &mainScreen::logoutButton_Click);
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
			// DoBLabel
			// 
			this->DoBLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->DoBLabel->AutoSize = true;
			this->DoBLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->DoBLabel->ForeColor = System::Drawing::Color::White;
			this->DoBLabel->Location = System::Drawing::Point(309, 204);
			this->DoBLabel->Name = L"DoBLabel";
			this->DoBLabel->Size = System::Drawing::Size(108, 26);
			this->DoBLabel->TabIndex = 0;
			this->DoBLabel->Text = L"DoBLabel";
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
			// genderLabel
			// 
			this->genderLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->genderLabel->AutoSize = true;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->genderLabel->ForeColor = System::Drawing::Color::White;
			this->genderLabel->Location = System::Drawing::Point(297, 142);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(132, 26);
			this->genderLabel->TabIndex = 0;
			this->genderLabel->Text = L"genderLabel";
			// 
			// changePassPanel
			// 
			this->changePassPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->changePassPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->changePassPanel->Controls->Add(this->tableLayoutPanel2);
			this->changePassPanel->Location = System::Drawing::Point(147, 133);
			this->changePassPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->changePassPanel->Name = L"changePassPanel";
			this->changePassPanel->Size = System::Drawing::Size(636, 534);
			this->changePassPanel->TabIndex = 5;
			this->changePassPanel->Visible = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->panel2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel3, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 3);
			this->tableLayoutPanel2->Location = System::Drawing::Point(69, 50);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->panel2->Location = System::Drawing::Point(3, 91);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(490, 82);
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
			this->label10->Location = System::Drawing::Point(3, 57);
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
			this->newPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(490, 82);
			this->panel1->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(3, 57);
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
			this->oldPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->panel3->Location = System::Drawing::Point(3, 180);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(490, 82);
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
			this->label8->Size = System::Drawing::Size(194, 26);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Confirm password:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(3, 57);
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
			this->newPassCF->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newPassCF->Name = L"newPassCF";
			this->newPassCF->Size = System::Drawing::Size(473, 25);
			this->newPassCF->TabIndex = 1;
			this->newPassCF->UseSystemPasswordChar = true;
			this->newPassCF->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::newPassCF_KeyDown);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->confirmChangePass, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button3, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 269);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(490, 129);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// confirmChangePass
			// 
			this->confirmChangePass->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->confirmChangePass->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->confirmChangePass->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->confirmChangePass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->confirmChangePass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmChangePass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmChangePass->ForeColor = System::Drawing::Color::White;
			this->confirmChangePass->Location = System::Drawing::Point(3, 38);
			this->confirmChangePass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->confirmChangePass->Name = L"confirmChangePass";
			this->confirmChangePass->Size = System::Drawing::Size(200, 52);
			this->confirmChangePass->TabIndex = 3;
			this->confirmChangePass->Text = L"CONFIRM";
			this->confirmChangePass->UseVisualStyleBackColor = true;
			this->confirmChangePass->Click += gcnew System::EventHandler(this, &mainScreen::confirmChangePass_Click);
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
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"CANCEL";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainScreen::button3_Click);
			// 
			// menuPanel
			// 
			this->menuPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->menuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->menuPanel->Controls->Add(this->tableLayoutPanel4);
			this->menuPanel->Location = System::Drawing::Point(0, 47);
			this->menuPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(135, 720);
			this->menuPanel->TabIndex = 6;
			this->menuPanel->Visible = false;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->newButton, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->newSchoolYear, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 2);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 4;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(135, 285);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// newButton
			// 
			this->newButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->newButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->newButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->newButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->newButton->ForeColor = System::Drawing::Color::White;
			this->newButton->Location = System::Drawing::Point(3, 2);
			this->newButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(129, 64);
			this->newButton->TabIndex = 0;
			this->newButton->Text = L"New";
			this->newButton->UseVisualStyleBackColor = false;
			this->newButton->Click += gcnew System::EventHandler(this, &mainScreen::newButton_Click);
			// 
			// newSchoolYear
			// 
			this->newSchoolYear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->newSchoolYear->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->newSchoolYear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newSchoolYear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newSchoolYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->newSchoolYear->ForeColor = System::Drawing::Color::White;
			this->newSchoolYear->Location = System::Drawing::Point(10, 70);
			this->newSchoolYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newSchoolYear->Name = L"newSchoolYear";
			this->newSchoolYear->Size = System::Drawing::Size(115, 77);
			this->newSchoolYear->TabIndex = 1;
			this->newSchoolYear->Text = L"School year\r\nand\r\nClass";
			this->newSchoolYear->UseVisualStyleBackColor = true;
			this->newSchoolYear->Visible = false;
			this->newSchoolYear->Click += gcnew System::EventHandler(this, &mainScreen::newSchoolYear_Click);
			// 
			// schoolYearPanel
			// 
			this->schoolYearPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->schoolYearPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->schoolYearPanel->Controls->Add(this->panel6);
			this->schoolYearPanel->Controls->Add(this->tableLayoutPanel5);
			this->schoolYearPanel->Location = System::Drawing::Point(147, 133);
			this->schoolYearPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->schoolYearPanel->Name = L"schoolYearPanel";
			this->schoolYearPanel->Size = System::Drawing::Size(636, 534);
			this->schoolYearPanel->TabIndex = 7;
			this->schoolYearPanel->Visible = false;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->listClass);
			this->panel6->Controls->Add(this->addClassButton);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->newClass);
			this->panel6->Location = System::Drawing::Point(3, 97);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(626, 432);
			this->panel6->TabIndex = 3;
			// 
			// listClass
			// 
			this->listClass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listClass->FormattingEnabled = true;
			this->listClass->ItemHeight = 26;
			this->listClass->Location = System::Drawing::Point(11, 99);
			this->listClass->Name = L"listClass";
			this->listClass->Size = System::Drawing::Size(596, 290);
			this->listClass->TabIndex = 3;
			// 
			// addClassButton
			// 
			this->addClassButton->BackColor = System::Drawing::Color::White;
			this->addClassButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->addClassButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->addClassButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->addClassButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addClassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->addClassButton->Location = System::Drawing::Point(516, 26);
			this->addClassButton->Name = L"addClassButton";
			this->addClassButton->Size = System::Drawing::Size(91, 42);
			this->addClassButton->TabIndex = 2;
			this->addClassButton->Text = L"Add";
			this->addClassButton->UseVisualStyleBackColor = false;
			this->addClassButton->Click += gcnew System::EventHandler(this, &mainScreen::addClassButton_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(6, 4);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(112, 26);
			this->label14->TabIndex = 0;
			this->label14->Text = L"New class";
			// 
			// newClass
			// 
			this->newClass->BackColor = System::Drawing::Color::White;
			this->newClass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->newClass->ForeColor = System::Drawing::Color::Black;
			this->newClass->Location = System::Drawing::Point(11, 32);
			this->newClass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newClass->Name = L"newClass";
			this->newClass->Size = System::Drawing::Size(478, 25);
			this->newClass->TabIndex = 1;
			this->newClass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::newClass_KeyDown);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->panel4, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->panel5, 1, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 0);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->Size = System::Drawing::Size(629, 97);
			this->tableLayoutPanel5->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->startYear);
			this->panel4->Location = System::Drawing::Point(3, 2);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(308, 94);
			this->panel4->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(3, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(106, 26);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Start year";
			// 
			// startYear
			// 
			this->startYear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->startYear->BackColor = System::Drawing::Color::White;
			this->startYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->startYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->startYear->ForeColor = System::Drawing::Color::Black;
			this->startYear->Location = System::Drawing::Point(8, 30);
			this->startYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startYear->Name = L"startYear";
			this->startYear->Size = System::Drawing::Size(167, 25);
			this->startYear->TabIndex = 1;
			this->startYear->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::startYear_KeyDown);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->endYear);
			this->panel5->Location = System::Drawing::Point(317, 2);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(309, 94);
			this->panel5->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(0, 2);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 26);
			this->label12->TabIndex = 0;
			this->label12->Text = L"End year";
			// 
			// endYear
			// 
			this->endYear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->endYear->BackColor = System::Drawing::Color::White;
			this->endYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->endYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->endYear->ForeColor = System::Drawing::Color::Black;
			this->endYear->Location = System::Drawing::Point(5, 29);
			this->endYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->endYear->Name = L"endYear";
			this->endYear->Size = System::Drawing::Size(167, 25);
			this->endYear->TabIndex = 1;
			this->endYear->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::endYear_KeyDown);
			// 
			// mainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->ClientSize = System::Drawing::Size(885, 767);
			this->Controls->Add(this->menuPanel);
			this->Controls->Add(this->staffPanel);
			this->Controls->Add(this->schoolYearPanel);
			this->Controls->Add(this->profilePanel);
			this->Controls->Add(this->changePassPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(903, 814);
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
			this->menuPanel->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->schoolYearPanel->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
		void hideAll() {
			if (changePassPanel->Visible) button3->PerformClick();
			if (profilePanel->Visible) profilePanel->Hide();
			if (menuPanel->Visible) menuPanel->Hide();
		}

	private:
		System::Void mainScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		}

	private:
		System::String^ intToString(int x) {
			return System::Convert::ToString(x);
		}

	private:
		int stringToInt(System::String^ s) {
			return System::Convert::ToInt16(s);
		}

	private:
		System::Void profileButton_Click(System::Object^ sender, System::EventArgs^ e) {
			hideAll();
			if (!profilePanel->Visible)
				profilePanel->Show();
			usernameLabel->Text = convertString(curAccount->username);
			fullnameLabel->Text = convertString(curAccount->lastName + " " + curAccount->firstName);
			genderLabel->Text = convertString(curAccount->Gender);

			String^ day = intToString(curAccount->dateOfBirth.day);
			if (curAccount->dateOfBirth.day < 10) day = "0" + day;
			String^ month = intToString(curAccount->dateOfBirth.month);
			if (curAccount->dateOfBirth.month < 10) month = "0" + month;
			String^ year = intToString(curAccount->dateOfBirth.year);

			DoBLabel->Text = day + "/" + month + "/" + year;
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
			newPass->Text = "";
			oldPass->Text = "";
			newPassCF->Text = "";
		}

	private: 
		System::Void newPassCF_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter)
				confirmChangePass->PerformClick();
		}

	private: 
		System::Void confirmChangePass_Click(System::Object^ sender, System::EventArgs^ e) {
			if (oldPass->Text != convertString(curAccount->password)) {
				MessageBox::Show("Incorrect password!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				oldPass->Text = "";
				oldPass->Focus();
				return;
			}

			if (newPass->Text == "") {
				MessageBox::Show("Please input your new password!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				newPass->Focus();
				return;
			}

			if (newPass->Text != newPassCF->Text) {
				MessageBox::Show("Passwords did not match!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				newPassCF->Text = "";
				newPassCF->Focus();
				return;
			}

			MessageBox::Show("Password changed!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			curAccount->password = convertToString(newPass->Text);
			changePassPanel->Hide();
			profilePanel->Show();
		}

	private: 
		System::Void menuButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!menuPanel->Visible) {
				hideAll();
				menuPanel->Show();
			}
			else
				menuPanel->Hide();
		}

	private: 
		System::Void newButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!newSchoolYear->Visible)
				newSchoolYear->Show();
			else
				newSchoolYear->Hide();
		}

	private: 
		System::Void newSchoolYear_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!schoolYearPanel->Visible) {
				schoolYearPanel->Show();
				startYear->Focus();
			}
			else
				schoolYearPanel->Hide();
		}

	private: 
		System::Void addClassButton_Click(System::Object^ sender, System::EventArgs^ e) {
			listClass->Items->Clear();
			newClass->Focus();;
			SchoolYear* curYear;
			SchoolYear* list = schoolYearList;
			curYear = takeYear(schoolYearList, stringToInt(startYear->Text), stringToInt(endYear->Text));
			if (!curYear) {
				curYear = new SchoolYear;
				curYear->startYear = stringToInt(startYear->Text);
				curYear->endYear = stringToInt(endYear->Text);
				addSchoolYear(list, curYear);
			}

			Class* curClass = new Class;
			curClass->name = convertToString(newClass->Text);
			addClass(curYear->classroom, curClass, curYear->numOfClass);

			Class* cur = curYear->classroom;
			for (int i = 0; i < curYear->numOfClass; i++) {
				listClass->Items->Add(convertString(cur->name));
				cur = cur->pNext;
			}
			newClass->Text = "";
		}
	private: 
		System::Void newClass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter)
				addClassButton->PerformClick();
		}

	private: 
		System::Void startYear_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				endYear->Focus();
		}


	private: 
		System::Void endYear_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				newClass->Focus();
		}
};
}
