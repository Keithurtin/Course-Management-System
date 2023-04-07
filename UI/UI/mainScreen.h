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
		Account* curAccount = nullptr;
		bool logout = false;
		SchoolYear* schoolYearList = nullptr;
		Class* classList = nullptr;

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

	private: System::Windows::Forms::Button^ newSchoolYear;
	private: System::Windows::Forms::Panel^ schoolYearPanel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ startYear;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ endYear;
	private: System::Windows::Forms::Panel^ classPanel;


	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ className;




	private: System::Windows::Forms::Panel^ studentPanel;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ cancelAddSchoolYear;
	private: System::Windows::Forms::Button^ addSchoolYearButton;


	private: System::Windows::Forms::Button^ newClass;
	private: System::Windows::Forms::Button^ newStudent;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ addClassButton;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ studentNo;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ studentID;
	private: System::Windows::Forms::TextBox^ studentLName;
	private: System::Windows::Forms::TextBox^ studentFName;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::CheckBox^ Female;
	private: System::Windows::Forms::CheckBox^ Male;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label21;


	private: System::Windows::Forms::TextBox^ studentSocialID;




	private: System::Windows::Forms::Button^ cancelStudentButton;

	private: System::Windows::Forms::Button^ clearStudentButton;
	private: System::Windows::Forms::Button^ addStudentFromFile;


	private: System::Windows::Forms::Button^ addStudentButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Button^ viewButton;

	private: System::Windows::Forms::Button^ newSemester;
	private: System::Windows::Forms::Panel^ semesterPanel;
	private: System::Windows::Forms::ComboBox^ studentClassBox;
	private: System::Windows::Forms::DateTimePicker^ smesterStartDay;

	private: System::Windows::Forms::ComboBox^ schoolYearBox;
	private: System::Windows::Forms::Label^ label26;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ semesterNo;
	private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::DateTimePicker^ studentDoB;

private: System::Windows::Forms::Button^ newCourse;

private: System::Windows::Forms::DateTimePicker^ semesterEndDay;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ semesterDone;

private: System::Windows::Forms::ListBox^ courseList;
private: System::Windows::Forms::Panel^ coursePanel;
private: System::Windows::Forms::TextBox^ courseName;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ courseID;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ courseClassName;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Button^ courseClose;


private: System::Windows::Forms::Button^ importCourseStud;
private: System::Windows::Forms::ComboBox^ courseSSBox;
private: System::Windows::Forms::ComboBox^ courseDayBox;
private: System::Windows::Forms::TextBox^ courseTeacher;
private: System::Windows::Forms::Label^ label30;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label32;

private: System::Windows::Forms::Label^ label31;

private: System::Windows::Forms::NumericUpDown^ courseMaxStud;
private: System::Windows::Forms::NumericUpDown^ courseCredits;
private: System::Windows::Forms::Button^ viewCourse;
private: System::Windows::Forms::Button^ viewClass;
private: System::Windows::Forms::Panel^ viewClassPanel;
private: System::Windows::Forms::ListBox^ classListBox;

private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ viewStudentClass;
private: System::Windows::Forms::ListView^ studentListView;

private: System::Windows::Forms::ColumnHeader^ NoCol;
private: System::Windows::Forms::ColumnHeader^ studentIDCol;

private: System::Windows::Forms::ColumnHeader^ NameCol;

private: System::Windows::Forms::ColumnHeader^ GenderCol;
private: System::Windows::Forms::ColumnHeader^ DoBCol;
private: System::Windows::Forms::ColumnHeader^ socialIDCol;
private: System::Windows::Forms::Panel^ viewStudentPanel;

private: System::Windows::Forms::Button^ button5;



















	private: System::Windows::Forms::Label^ label8;




		   
	public:
		mainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void getData(Account* account, SchoolYear* schoolYear, Class* classes)
		{
			curAccount = account;
			schoolYearList = schoolYear;
			classList = classes;
		}

		void returnData(Account* &account, SchoolYear* &schoolYear, Class* &classes)
		{
			account = curAccount;
			schoolYear = schoolYearList;
			classes = classList;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->socialIDLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DoBLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->logoutButton = (gcnew System::Windows::Forms::Button());
			this->changePassButton = (gcnew System::Windows::Forms::Button());
			this->studentPanel = (gcnew System::Windows::Forms::Panel());
			this->studentDoB = (gcnew System::Windows::Forms::DateTimePicker());
			this->studentClassBox = (gcnew System::Windows::Forms::ComboBox());
			this->cancelStudentButton = (gcnew System::Windows::Forms::Button());
			this->clearStudentButton = (gcnew System::Windows::Forms::Button());
			this->addStudentFromFile = (gcnew System::Windows::Forms::Button());
			this->addStudentButton = (gcnew System::Windows::Forms::Button());
			this->Female = (gcnew System::Windows::Forms::CheckBox());
			this->Male = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->studentNo = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->studentID = (gcnew System::Windows::Forms::TextBox());
			this->studentLName = (gcnew System::Windows::Forms::TextBox());
			this->studentSocialID = (gcnew System::Windows::Forms::TextBox());
			this->studentFName = (gcnew System::Windows::Forms::TextBox());
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
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->newStudent = (gcnew System::Windows::Forms::Button());
			this->newClass = (gcnew System::Windows::Forms::Button());
			this->newButton = (gcnew System::Windows::Forms::Button());
			this->newSchoolYear = (gcnew System::Windows::Forms::Button());
			this->newSemester = (gcnew System::Windows::Forms::Button());
			this->viewButton = (gcnew System::Windows::Forms::Button());
			this->viewCourse = (gcnew System::Windows::Forms::Button());
			this->viewClass = (gcnew System::Windows::Forms::Button());
			this->schoolYearPanel = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->startYear = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->endYear = (gcnew System::Windows::Forms::TextBox());
			this->cancelAddSchoolYear = (gcnew System::Windows::Forms::Button());
			this->addSchoolYearButton = (gcnew System::Windows::Forms::Button());
			this->classPanel = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->addClassButton = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->className = (gcnew System::Windows::Forms::TextBox());
			this->semesterPanel = (gcnew System::Windows::Forms::Panel());
			this->semesterDone = (gcnew System::Windows::Forms::Button());
			this->courseList = (gcnew System::Windows::Forms::ListBox());
			this->newCourse = (gcnew System::Windows::Forms::Button());
			this->semesterEndDay = (gcnew System::Windows::Forms::DateTimePicker());
			this->smesterStartDay = (gcnew System::Windows::Forms::DateTimePicker());
			this->schoolYearBox = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->semesterNo = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->coursePanel = (gcnew System::Windows::Forms::Panel());
			this->courseCredits = (gcnew System::Windows::Forms::NumericUpDown());
			this->courseMaxStud = (gcnew System::Windows::Forms::NumericUpDown());
			this->courseClose = (gcnew System::Windows::Forms::Button());
			this->importCourseStud = (gcnew System::Windows::Forms::Button());
			this->courseSSBox = (gcnew System::Windows::Forms::ComboBox());
			this->courseDayBox = (gcnew System::Windows::Forms::ComboBox());
			this->courseTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->courseClassName = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->courseName = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->courseID = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->viewClassPanel = (gcnew System::Windows::Forms::Panel());
			this->viewStudentClass = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->classListBox = (gcnew System::Windows::Forms::ListBox());
			this->studentListView = (gcnew System::Windows::Forms::ListView());
			this->NoCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->studentIDCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->NameCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->GenderCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->DoBCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->socialIDCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->viewStudentPanel = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->staffPanel->SuspendLayout();
			this->profilePanel->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->studentPanel->SuspendLayout();
			this->changePassPanel->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->menuPanel->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->schoolYearPanel->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->classPanel->SuspendLayout();
			this->semesterPanel->SuspendLayout();
			this->coursePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courseCredits))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courseMaxStud))->BeginInit();
			this->viewClassPanel->SuspendLayout();
			this->viewStudentPanel->SuspendLayout();
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
			this->profilePanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->profilePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->profilePanel->Controls->Add(this->button1);
			this->profilePanel->Controls->Add(this->tableLayoutPanel1);
			this->profilePanel->Controls->Add(this->logoutButton);
			this->profilePanel->Controls->Add(this->changePassButton);
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
			this->button1->Location = System::Drawing::Point(237, 430);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 73);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainScreen::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.17123F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				74.82877F)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->fullnameLabel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->usernameLabel, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->socialIDLabel, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->DoBLabel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->genderLabel, 1, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(26, 2);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(584, 402);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 26);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Full name:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			// 
			// fullnameLabel
			// 
			this->fullnameLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fullnameLabel->AutoSize = true;
			this->fullnameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->fullnameLabel->ForeColor = System::Drawing::Color::White;
			this->fullnameLabel->Location = System::Drawing::Point(149, 107);
			this->fullnameLabel->Name = L"fullnameLabel";
			this->fullnameLabel->Size = System::Drawing::Size(120, 26);
			this->fullnameLabel->TabIndex = 0;
			this->fullnameLabel->Text = L"nameLabel";
			// 
			// usernameLabel
			// 
			this->usernameLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->usernameLabel->ForeColor = System::Drawing::Color::White;
			this->usernameLabel->Location = System::Drawing::Point(149, 27);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(162, 26);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"usernameLabel";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(3, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 26);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Social ID:";
			// 
			// socialIDLabel
			// 
			this->socialIDLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->socialIDLabel->AutoSize = true;
			this->socialIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->socialIDLabel->ForeColor = System::Drawing::Color::White;
			this->socialIDLabel->Location = System::Drawing::Point(149, 347);
			this->socialIDLabel->Name = L"socialIDLabel";
			this->socialIDLabel->Size = System::Drawing::Size(143, 26);
			this->socialIDLabel->TabIndex = 0;
			this->socialIDLabel->Text = L"socialIDLabel";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(3, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 26);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Day of birth:";
			// 
			// DoBLabel
			// 
			this->DoBLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->DoBLabel->AutoSize = true;
			this->DoBLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->DoBLabel->ForeColor = System::Drawing::Color::White;
			this->DoBLabel->Location = System::Drawing::Point(149, 267);
			this->DoBLabel->Name = L"DoBLabel";
			this->DoBLabel->Size = System::Drawing::Size(108, 26);
			this->DoBLabel->TabIndex = 0;
			this->DoBLabel->Text = L"DoBLabel";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Gender:";
			// 
			// genderLabel
			// 
			this->genderLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->genderLabel->AutoSize = true;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->genderLabel->ForeColor = System::Drawing::Color::White;
			this->genderLabel->Location = System::Drawing::Point(149, 187);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(132, 26);
			this->genderLabel->TabIndex = 0;
			this->genderLabel->Text = L"genderLabel";
			// 
			// logoutButton
			// 
			this->logoutButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->logoutButton->BackColor = System::Drawing::Color::Firebrick;
			this->logoutButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->logoutButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightCoral;
			this->logoutButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::IndianRed;
			this->logoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutButton->ForeColor = System::Drawing::Color::Black;
			this->logoutButton->Location = System::Drawing::Point(447, 430);
			this->logoutButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logoutButton->Name = L"logoutButton";
			this->logoutButton->Size = System::Drawing::Size(163, 73);
			this->logoutButton->TabIndex = 1;
			this->logoutButton->Text = L"Log out";
			this->logoutButton->UseVisualStyleBackColor = false;
			this->logoutButton->Click += gcnew System::EventHandler(this, &mainScreen::logoutButton_Click);
			// 
			// changePassButton
			// 
			this->changePassButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->changePassButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->changePassButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->changePassButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->changePassButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->changePassButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->changePassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changePassButton->ForeColor = System::Drawing::Color::White;
			this->changePassButton->Location = System::Drawing::Point(27, 430);
			this->changePassButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->changePassButton->Name = L"changePassButton";
			this->changePassButton->Size = System::Drawing::Size(168, 73);
			this->changePassButton->TabIndex = 1;
			this->changePassButton->Text = L"Change password";
			this->changePassButton->UseVisualStyleBackColor = false;
			this->changePassButton->Click += gcnew System::EventHandler(this, &mainScreen::changePassButton_Click);
			// 
			// studentPanel
			// 
			this->studentPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->studentPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->studentPanel->Controls->Add(this->studentDoB);
			this->studentPanel->Controls->Add(this->studentClassBox);
			this->studentPanel->Controls->Add(this->cancelStudentButton);
			this->studentPanel->Controls->Add(this->clearStudentButton);
			this->studentPanel->Controls->Add(this->addStudentFromFile);
			this->studentPanel->Controls->Add(this->addStudentButton);
			this->studentPanel->Controls->Add(this->Female);
			this->studentPanel->Controls->Add(this->Male);
			this->studentPanel->Controls->Add(this->label16);
			this->studentPanel->Controls->Add(this->studentNo);
			this->studentPanel->Controls->Add(this->label15);
			this->studentPanel->Controls->Add(this->label24);
			this->studentPanel->Controls->Add(this->label21);
			this->studentPanel->Controls->Add(this->label20);
			this->studentPanel->Controls->Add(this->label19);
			this->studentPanel->Controls->Add(this->label18);
			this->studentPanel->Controls->Add(this->label17);
			this->studentPanel->Controls->Add(this->studentID);
			this->studentPanel->Controls->Add(this->studentLName);
			this->studentPanel->Controls->Add(this->studentSocialID);
			this->studentPanel->Controls->Add(this->studentFName);
			this->studentPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studentPanel->Location = System::Drawing::Point(147, 133);
			this->studentPanel->Name = L"studentPanel";
			this->studentPanel->Size = System::Drawing::Size(636, 534);
			this->studentPanel->TabIndex = 8;
			this->studentPanel->Visible = false;
			// 
			// studentDoB
			// 
			this->studentDoB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->studentDoB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->studentDoB->Location = System::Drawing::Point(359, 349);
			this->studentDoB->Name = L"studentDoB";
			this->studentDoB->Size = System::Drawing::Size(131, 28);
			this->studentDoB->TabIndex = 13;
			// 
			// studentClassBox
			// 
			this->studentClassBox->DropDownHeight = 80;
			this->studentClassBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->studentClassBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studentClassBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->studentClassBox->ForeColor = System::Drawing::Color::Black;
			this->studentClassBox->FormattingEnabled = true;
			this->studentClassBox->IntegralHeight = false;
			this->studentClassBox->Location = System::Drawing::Point(28, 64);
			this->studentClassBox->Name = L"studentClassBox";
			this->studentClassBox->Size = System::Drawing::Size(397, 24);
			this->studentClassBox->Sorted = true;
			this->studentClassBox->TabIndex = 10;
			// 
			// cancelStudentButton
			// 
			this->cancelStudentButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cancelStudentButton->BackColor = System::Drawing::Color::White;
			this->cancelStudentButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->cancelStudentButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->cancelStudentButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->cancelStudentButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelStudentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancelStudentButton->ForeColor = System::Drawing::Color::Black;
			this->cancelStudentButton->Location = System::Drawing::Point(489, 460);
			this->cancelStudentButton->Name = L"cancelStudentButton";
			this->cancelStudentButton->Size = System::Drawing::Size(122, 39);
			this->cancelStudentButton->TabIndex = 8;
			this->cancelStudentButton->Text = L"Cancel";
			this->cancelStudentButton->UseVisualStyleBackColor = false;
			this->cancelStudentButton->Click += gcnew System::EventHandler(this, &mainScreen::cancelStudentButton_Click);
			// 
			// clearStudentButton
			// 
			this->clearStudentButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clearStudentButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->clearStudentButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->clearStudentButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->clearStudentButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->clearStudentButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearStudentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearStudentButton->ForeColor = System::Drawing::Color::White;
			this->clearStudentButton->Location = System::Drawing::Point(281, 460);
			this->clearStudentButton->Name = L"clearStudentButton";
			this->clearStudentButton->Size = System::Drawing::Size(122, 39);
			this->clearStudentButton->TabIndex = 8;
			this->clearStudentButton->Text = L"Clear";
			this->clearStudentButton->UseVisualStyleBackColor = false;
			this->clearStudentButton->Click += gcnew System::EventHandler(this, &mainScreen::clearStudentButton_Click);
			// 
			// addStudentFromFile
			// 
			this->addStudentFromFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addStudentFromFile->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->addStudentFromFile->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addStudentFromFile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gold;
			this->addStudentFromFile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->addStudentFromFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addStudentFromFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addStudentFromFile->ForeColor = System::Drawing::Color::Black;
			this->addStudentFromFile->Location = System::Drawing::Point(153, 460);
			this->addStudentFromFile->Name = L"addStudentFromFile";
			this->addStudentFromFile->Size = System::Drawing::Size(122, 39);
			this->addStudentFromFile->TabIndex = 7;
			this->addStudentFromFile->Text = L"File";
			this->addStudentFromFile->UseVisualStyleBackColor = false;
			this->addStudentFromFile->Click += gcnew System::EventHandler(this, &mainScreen::addStudentFromFile_Click);
			// 
			// addStudentButton
			// 
			this->addStudentButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addStudentButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->addStudentButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addStudentButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addStudentButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->addStudentButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addStudentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addStudentButton->ForeColor = System::Drawing::Color::White;
			this->addStudentButton->Location = System::Drawing::Point(26, 460);
			this->addStudentButton->Name = L"addStudentButton";
			this->addStudentButton->Size = System::Drawing::Size(122, 39);
			this->addStudentButton->TabIndex = 7;
			this->addStudentButton->Text = L"Add";
			this->addStudentButton->UseVisualStyleBackColor = false;
			this->addStudentButton->Click += gcnew System::EventHandler(this, &mainScreen::addStudentButton_Click);
			// 
			// Female
			// 
			this->Female->AutoSize = true;
			this->Female->ForeColor = System::Drawing::Color::White;
			this->Female->Location = System::Drawing::Point(26, 357);
			this->Female->Name = L"Female";
			this->Female->Size = System::Drawing::Size(107, 30);
			this->Female->TabIndex = 2;
			this->Female->Text = L"Female";
			this->Female->UseVisualStyleBackColor = true;
			this->Female->CheckedChanged += gcnew System::EventHandler(this, &mainScreen::Female_CheckedChanged);
			// 
			// Male
			// 
			this->Male->AutoSize = true;
			this->Male->ForeColor = System::Drawing::Color::White;
			this->Male->Location = System::Drawing::Point(26, 319);
			this->Male->Name = L"Male";
			this->Male->Size = System::Drawing::Size(81, 30);
			this->Male->TabIndex = 2;
			this->Male->Text = L"Male";
			this->Male->UseVisualStyleBackColor = true;
			this->Male->CheckedChanged += gcnew System::EventHandler(this, &mainScreen::Male_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(23, 105);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(121, 26);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Student ID:";
			// 
			// studentNo
			// 
			this->studentNo->BackColor = System::Drawing::Color::White;
			this->studentNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studentNo->ForeColor = System::Drawing::Color::Black;
			this->studentNo->Location = System::Drawing::Point(503, 63);
			this->studentNo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studentNo->Name = L"studentNo";
			this->studentNo->Size = System::Drawing::Size(107, 25);
			this->studentNo->TabIndex = 1;
			this->studentNo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::studentNo_KeyDown);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(498, 24);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 26);
			this->label15->TabIndex = 0;
			this->label15->Text = L"No:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(208, 283);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 26);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Social ID:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(208, 349);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(132, 26);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Day of Birth:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(22, 281);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 26);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Gender:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(22, 190);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(121, 26);
			this->label19->TabIndex = 0;
			this->label19->Text = L"First name:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(207, 190);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 26);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Last name:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(23, 22);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 26);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Class:";
			// 
			// studentID
			// 
			this->studentID->BackColor = System::Drawing::Color::White;
			this->studentID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studentID->ForeColor = System::Drawing::Color::Black;
			this->studentID->Location = System::Drawing::Point(27, 146);
			this->studentID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studentID->Name = L"studentID";
			this->studentID->Size = System::Drawing::Size(584, 25);
			this->studentID->TabIndex = 1;
			this->studentID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::studentID_KeyDown);
			// 
			// studentLName
			// 
			this->studentLName->BackColor = System::Drawing::Color::White;
			this->studentLName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studentLName->ForeColor = System::Drawing::Color::Black;
			this->studentLName->Location = System::Drawing::Point(212, 229);
			this->studentLName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studentLName->Name = L"studentLName";
			this->studentLName->Size = System::Drawing::Size(398, 25);
			this->studentLName->TabIndex = 1;
			this->studentLName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::studentLName_KeyDown);
			// 
			// studentSocialID
			// 
			this->studentSocialID->BackColor = System::Drawing::Color::White;
			this->studentSocialID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentSocialID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studentSocialID->ForeColor = System::Drawing::Color::Black;
			this->studentSocialID->Location = System::Drawing::Point(359, 287);
			this->studentSocialID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studentSocialID->Name = L"studentSocialID";
			this->studentSocialID->Size = System::Drawing::Size(252, 25);
			this->studentSocialID->TabIndex = 1;
			// 
			// studentFName
			// 
			this->studentFName->BackColor = System::Drawing::Color::White;
			this->studentFName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studentFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studentFName->ForeColor = System::Drawing::Color::Black;
			this->studentFName->Location = System::Drawing::Point(27, 229);
			this->studentFName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studentFName->Name = L"studentFName";
			this->studentFName->Size = System::Drawing::Size(145, 25);
			this->studentFName->TabIndex = 1;
			this->studentFName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::studentFName_KeyDown);
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
			this->confirmChangePass->BackColor = System::Drawing::SystemColors::HotTrack;
			this->confirmChangePass->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->confirmChangePass->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->confirmChangePass->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->confirmChangePass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmChangePass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmChangePass->ForeColor = System::Drawing::Color::White;
			this->confirmChangePass->Location = System::Drawing::Point(3, 38);
			this->confirmChangePass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->confirmChangePass->Name = L"confirmChangePass";
			this->confirmChangePass->Size = System::Drawing::Size(200, 52);
			this->confirmChangePass->TabIndex = 3;
			this->confirmChangePass->Text = L"Confirm";
			this->confirmChangePass->UseVisualStyleBackColor = false;
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
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainScreen::button3_Click);
			// 
			// menuPanel
			// 
			this->menuPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->menuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->menuPanel->Controls->Add(this->tableLayoutPanel6);
			this->menuPanel->Location = System::Drawing::Point(0, 47);
			this->menuPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(135, 720);
			this->menuPanel->TabIndex = 6;
			this->menuPanel->Visible = false;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->newStudent, 0, 3);
			this->tableLayoutPanel6->Controls->Add(this->newClass, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->newButton, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->newSchoolYear, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->newSemester, 0, 4);
			this->tableLayoutPanel6->Controls->Add(this->viewButton, 0, 5);
			this->tableLayoutPanel6->Controls->Add(this->viewCourse, 0, 7);
			this->tableLayoutPanel6->Controls->Add(this->viewClass, 0, 6);
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 9;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(135, 516);
			this->tableLayoutPanel6->TabIndex = 0;
			// 
			// newStudent
			// 
			this->newStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->newStudent->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->newStudent->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newStudent->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->newStudent->ForeColor = System::Drawing::Color::White;
			this->newStudent->Location = System::Drawing::Point(10, 187);
			this->newStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newStudent->Name = L"newStudent";
			this->newStudent->Size = System::Drawing::Size(115, 58);
			this->newStudent->TabIndex = 1;
			this->newStudent->Text = L"Student";
			this->newStudent->UseVisualStyleBackColor = true;
			this->newStudent->Visible = false;
			this->newStudent->Click += gcnew System::EventHandler(this, &mainScreen::newStudent_Click);
			// 
			// newClass
			// 
			this->newClass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->newClass->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->newClass->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newClass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->newClass->ForeColor = System::Drawing::Color::White;
			this->newClass->Location = System::Drawing::Point(10, 125);
			this->newClass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newClass->Name = L"newClass";
			this->newClass->Size = System::Drawing::Size(115, 58);
			this->newClass->TabIndex = 1;
			this->newClass->Text = L"Class";
			this->newClass->UseVisualStyleBackColor = true;
			this->newClass->Visible = false;
			this->newClass->Click += gcnew System::EventHandler(this, &mainScreen::newClass_Click);
			// 
			// newButton
			// 
			this->newButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
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
			this->newButton->Size = System::Drawing::Size(129, 57);
			this->newButton->TabIndex = 0;
			this->newButton->Text = L"New";
			this->newButton->UseVisualStyleBackColor = false;
			this->newButton->Click += gcnew System::EventHandler(this, &mainScreen::newButton_Click);
			// 
			// newSchoolYear
			// 
			this->newSchoolYear->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->newSchoolYear->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->newSchoolYear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newSchoolYear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newSchoolYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->newSchoolYear->ForeColor = System::Drawing::Color::White;
			this->newSchoolYear->Location = System::Drawing::Point(10, 63);
			this->newSchoolYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newSchoolYear->Name = L"newSchoolYear";
			this->newSchoolYear->Size = System::Drawing::Size(115, 58);
			this->newSchoolYear->TabIndex = 1;
			this->newSchoolYear->Text = L"School year";
			this->newSchoolYear->UseVisualStyleBackColor = true;
			this->newSchoolYear->Visible = false;
			this->newSchoolYear->Click += gcnew System::EventHandler(this, &mainScreen::newSchoolYear_Click);
			// 
			// newSemester
			// 
			this->newSemester->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->newSemester->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->newSemester->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newSemester->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->newSemester->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newSemester->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->newSemester->ForeColor = System::Drawing::Color::White;
			this->newSemester->Location = System::Drawing::Point(10, 249);
			this->newSemester->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newSemester->Name = L"newSemester";
			this->newSemester->Size = System::Drawing::Size(115, 58);
			this->newSemester->TabIndex = 1;
			this->newSemester->Text = L"Semester";
			this->newSemester->UseVisualStyleBackColor = true;
			this->newSemester->Visible = false;
			this->newSemester->Click += gcnew System::EventHandler(this, &mainScreen::newSemester_Click);
			// 
			// viewButton
			// 
			this->viewButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->viewButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->viewButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->viewButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->viewButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->viewButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->viewButton->ForeColor = System::Drawing::Color::White;
			this->viewButton->Location = System::Drawing::Point(3, 311);
			this->viewButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewButton->Name = L"viewButton";
			this->viewButton->Size = System::Drawing::Size(129, 58);
			this->viewButton->TabIndex = 0;
			this->viewButton->Text = L"View";
			this->viewButton->UseVisualStyleBackColor = false;
			this->viewButton->Click += gcnew System::EventHandler(this, &mainScreen::viewButton_Click);
			// 
			// viewCourse
			// 
			this->viewCourse->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->viewCourse->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->viewCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->viewCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->viewCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->viewCourse->ForeColor = System::Drawing::Color::White;
			this->viewCourse->Location = System::Drawing::Point(10, 435);
			this->viewCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewCourse->Name = L"viewCourse";
			this->viewCourse->Size = System::Drawing::Size(115, 56);
			this->viewCourse->TabIndex = 1;
			this->viewCourse->Text = L"Course";
			this->viewCourse->UseVisualStyleBackColor = true;
			this->viewCourse->Visible = false;
			// 
			// viewClass
			// 
			this->viewClass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->viewClass->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->viewClass->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->viewClass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->viewClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->viewClass->ForeColor = System::Drawing::Color::White;
			this->viewClass->Location = System::Drawing::Point(10, 373);
			this->viewClass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewClass->Name = L"viewClass";
			this->viewClass->Size = System::Drawing::Size(115, 58);
			this->viewClass->TabIndex = 1;
			this->viewClass->Text = L"Class";
			this->viewClass->UseVisualStyleBackColor = true;
			this->viewClass->Visible = false;
			this->viewClass->Click += gcnew System::EventHandler(this, &mainScreen::viewClass_Click);
			// 
			// schoolYearPanel
			// 
			this->schoolYearPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->schoolYearPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->schoolYearPanel->Controls->Add(this->tableLayoutPanel5);
			this->schoolYearPanel->Controls->Add(this->cancelAddSchoolYear);
			this->schoolYearPanel->Controls->Add(this->addSchoolYearButton);
			this->schoolYearPanel->Location = System::Drawing::Point(147, 133);
			this->schoolYearPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->schoolYearPanel->Name = L"schoolYearPanel";
			this->schoolYearPanel->Size = System::Drawing::Size(636, 534);
			this->schoolYearPanel->TabIndex = 7;
			this->schoolYearPanel->Visible = false;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->panel4, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->panel5, 0, 1);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel5->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(632, 256);
			this->tableLayoutPanel5->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->startYear);
			this->panel4->Location = System::Drawing::Point(3, 2);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(308, 124);
			this->panel4->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(48, 33);
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
			this->startYear->Location = System::Drawing::Point(53, 71);
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
			this->panel5->Location = System::Drawing::Point(3, 130);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(309, 124);
			this->panel5->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(48, 33);
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
			this->endYear->Location = System::Drawing::Point(53, 72);
			this->endYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->endYear->Name = L"endYear";
			this->endYear->Size = System::Drawing::Size(167, 25);
			this->endYear->TabIndex = 1;
			this->endYear->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::endYear_KeyDown);
			// 
			// cancelAddSchoolYear
			// 
			this->cancelAddSchoolYear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cancelAddSchoolYear->BackColor = System::Drawing::Color::White;
			this->cancelAddSchoolYear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->cancelAddSchoolYear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->cancelAddSchoolYear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->cancelAddSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelAddSchoolYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancelAddSchoolYear->ForeColor = System::Drawing::Color::Black;
			this->cancelAddSchoolYear->Location = System::Drawing::Point(488, 460);
			this->cancelAddSchoolYear->Name = L"cancelAddSchoolYear";
			this->cancelAddSchoolYear->Size = System::Drawing::Size(122, 39);
			this->cancelAddSchoolYear->TabIndex = 4;
			this->cancelAddSchoolYear->Text = L"Cancel";
			this->cancelAddSchoolYear->UseVisualStyleBackColor = false;
			this->cancelAddSchoolYear->Click += gcnew System::EventHandler(this, &mainScreen::cancelAddSchoolYear_Click);
			// 
			// addSchoolYearButton
			// 
			this->addSchoolYearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addSchoolYearButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->addSchoolYearButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addSchoolYearButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addSchoolYearButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->addSchoolYearButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addSchoolYearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addSchoolYearButton->ForeColor = System::Drawing::Color::White;
			this->addSchoolYearButton->Location = System::Drawing::Point(339, 460);
			this->addSchoolYearButton->Name = L"addSchoolYearButton";
			this->addSchoolYearButton->Size = System::Drawing::Size(122, 39);
			this->addSchoolYearButton->TabIndex = 4;
			this->addSchoolYearButton->Text = L"Add";
			this->addSchoolYearButton->UseVisualStyleBackColor = false;
			this->addSchoolYearButton->Click += gcnew System::EventHandler(this, &mainScreen::addSchoolYearButton_Click);
			// 
			// classPanel
			// 
			this->classPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->classPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->classPanel->Controls->Add(this->button6);
			this->classPanel->Controls->Add(this->addClassButton);
			this->classPanel->Controls->Add(this->label14);
			this->classPanel->Controls->Add(this->className);
			this->classPanel->Location = System::Drawing::Point(147, 133);
			this->classPanel->Name = L"classPanel";
			this->classPanel->Size = System::Drawing::Size(636, 534);
			this->classPanel->TabIndex = 3;
			this->classPanel->Visible = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(488, 464);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(122, 39);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Cancel";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &mainScreen::button6_Click);
			// 
			// addClassButton
			// 
			this->addClassButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addClassButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->addClassButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addClassButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addClassButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->addClassButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addClassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addClassButton->ForeColor = System::Drawing::Color::White;
			this->addClassButton->Location = System::Drawing::Point(339, 464);
			this->addClassButton->Name = L"addClassButton";
			this->addClassButton->Size = System::Drawing::Size(122, 39);
			this->addClassButton->TabIndex = 5;
			this->addClassButton->Text = L"Add";
			this->addClassButton->UseVisualStyleBackColor = false;
			this->addClassButton->Click += gcnew System::EventHandler(this, &mainScreen::addClassButton_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(21, 37);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(112, 26);
			this->label14->TabIndex = 0;
			this->label14->Text = L"New class";
			// 
			// className
			// 
			this->className->BackColor = System::Drawing::Color::White;
			this->className->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->className->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->className->ForeColor = System::Drawing::Color::Black;
			this->className->Location = System::Drawing::Point(26, 84);
			this->className->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->className->Name = L"className";
			this->className->Size = System::Drawing::Size(478, 25);
			this->className->TabIndex = 1;
			this->className->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::newClass_KeyDown);
			// 
			// semesterPanel
			// 
			this->semesterPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->semesterPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->semesterPanel->Controls->Add(this->semesterDone);
			this->semesterPanel->Controls->Add(this->courseList);
			this->semesterPanel->Controls->Add(this->newCourse);
			this->semesterPanel->Controls->Add(this->semesterEndDay);
			this->semesterPanel->Controls->Add(this->smesterStartDay);
			this->semesterPanel->Controls->Add(this->schoolYearBox);
			this->semesterPanel->Controls->Add(this->label22);
			this->semesterPanel->Controls->Add(this->label26);
			this->semesterPanel->Controls->Add(this->label27);
			this->semesterPanel->Controls->Add(this->semesterNo);
			this->semesterPanel->Controls->Add(this->label25);
			this->semesterPanel->Location = System::Drawing::Point(147, 133);
			this->semesterPanel->Name = L"semesterPanel";
			this->semesterPanel->Size = System::Drawing::Size(636, 534);
			this->semesterPanel->TabIndex = 9;
			this->semesterPanel->Visible = false;
			// 
			// semesterDone
			// 
			this->semesterDone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->semesterDone->BackColor = System::Drawing::Color::White;
			this->semesterDone->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->semesterDone->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->semesterDone->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->semesterDone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->semesterDone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->semesterDone->ForeColor = System::Drawing::Color::Black;
			this->semesterDone->Location = System::Drawing::Point(466, 464);
			this->semesterDone->Name = L"semesterDone";
			this->semesterDone->Size = System::Drawing::Size(122, 39);
			this->semesterDone->TabIndex = 15;
			this->semesterDone->Text = L"Close";
			this->semesterDone->UseVisualStyleBackColor = false;
			this->semesterDone->Click += gcnew System::EventHandler(this, &mainScreen::semesterDone_Click);
			// 
			// courseList
			// 
			this->courseList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->courseList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseList->ForeColor = System::Drawing::Color::White;
			this->courseList->FormattingEnabled = true;
			this->courseList->ItemHeight = 26;
			this->courseList->Location = System::Drawing::Point(26, 236);
			this->courseList->Name = L"courseList";
			this->courseList->Size = System::Drawing::Size(562, 186);
			this->courseList->TabIndex = 14;
			// 
			// newCourse
			// 
			this->newCourse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->newCourse->BackColor = System::Drawing::SystemColors::HotTrack;
			this->newCourse->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->newCourse->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->newCourse->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->newCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newCourse->ForeColor = System::Drawing::Color::White;
			this->newCourse->Location = System::Drawing::Point(28, 464);
			this->newCourse->Name = L"newCourse";
			this->newCourse->Size = System::Drawing::Size(169, 39);
			this->newCourse->TabIndex = 13;
			this->newCourse->Text = L"New course";
			this->newCourse->UseVisualStyleBackColor = false;
			this->newCourse->Click += gcnew System::EventHandler(this, &mainScreen::newCourse_Click);
			// 
			// semesterEndDay
			// 
			this->semesterEndDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->semesterEndDay->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->semesterEndDay->Location = System::Drawing::Point(457, 163);
			this->semesterEndDay->Name = L"semesterEndDay";
			this->semesterEndDay->Size = System::Drawing::Size(131, 28);
			this->semesterEndDay->TabIndex = 12;
			// 
			// smesterStartDay
			// 
			this->smesterStartDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->smesterStartDay->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->smesterStartDay->Location = System::Drawing::Point(272, 163);
			this->smesterStartDay->Name = L"smesterStartDay";
			this->smesterStartDay->Size = System::Drawing::Size(131, 28);
			this->smesterStartDay->TabIndex = 12;
			// 
			// schoolYearBox
			// 
			this->schoolYearBox->DropDownHeight = 80;
			this->schoolYearBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->schoolYearBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->schoolYearBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->schoolYearBox->ForeColor = System::Drawing::Color::Black;
			this->schoolYearBox->FormattingEnabled = true;
			this->schoolYearBox->IntegralHeight = false;
			this->schoolYearBox->Location = System::Drawing::Point(26, 68);
			this->schoolYearBox->Name = L"schoolYearBox";
			this->schoolYearBox->Size = System::Drawing::Size(169, 24);
			this->schoolYearBox->Sorted = true;
			this->schoolYearBox->TabIndex = 11;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(452, 123);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(98, 26);
			this->label22->TabIndex = 2;
			this->label22->Text = L"End day:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(22, 22);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(133, 26);
			this->label26->TabIndex = 2;
			this->label26->Text = L"School year:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(267, 123);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(105, 26);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Start day:";
			// 
			// semesterNo
			// 
			this->semesterNo->BackColor = System::Drawing::Color::White;
			this->semesterNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->semesterNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->semesterNo->ForeColor = System::Drawing::Color::Black;
			this->semesterNo->Location = System::Drawing::Point(26, 165);
			this->semesterNo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->semesterNo->Name = L"semesterNo";
			this->semesterNo->Size = System::Drawing::Size(169, 25);
			this->semesterNo->TabIndex = 3;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(23, 123);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(112, 26);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Semester:";
			// 
			// coursePanel
			// 
			this->coursePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->coursePanel->Controls->Add(this->courseCredits);
			this->coursePanel->Controls->Add(this->courseMaxStud);
			this->coursePanel->Controls->Add(this->courseClose);
			this->coursePanel->Controls->Add(this->importCourseStud);
			this->coursePanel->Controls->Add(this->courseSSBox);
			this->coursePanel->Controls->Add(this->courseDayBox);
			this->coursePanel->Controls->Add(this->courseTeacher);
			this->coursePanel->Controls->Add(this->label30);
			this->coursePanel->Controls->Add(this->courseClassName);
			this->coursePanel->Controls->Add(this->label29);
			this->coursePanel->Controls->Add(this->courseName);
			this->coursePanel->Controls->Add(this->label28);
			this->coursePanel->Controls->Add(this->label34);
			this->coursePanel->Controls->Add(this->label31);
			this->coursePanel->Controls->Add(this->label32);
			this->coursePanel->Controls->Add(this->courseID);
			this->coursePanel->Controls->Add(this->label23);
			this->coursePanel->Location = System::Drawing::Point(147, 133);
			this->coursePanel->Name = L"coursePanel";
			this->coursePanel->Size = System::Drawing::Size(636, 534);
			this->coursePanel->TabIndex = 10;
			this->coursePanel->Visible = false;
			// 
			// courseCredits
			// 
			this->courseCredits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->courseCredits->Location = System::Drawing::Point(506, 287);
			this->courseCredits->Name = L"courseCredits";
			this->courseCredits->Size = System::Drawing::Size(82, 28);
			this->courseCredits->TabIndex = 19;
			// 
			// courseMaxStud
			// 
			this->courseMaxStud->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->courseMaxStud->Location = System::Drawing::Point(457, 174);
			this->courseMaxStud->Name = L"courseMaxStud";
			this->courseMaxStud->Size = System::Drawing::Size(131, 28);
			this->courseMaxStud->TabIndex = 19;
			this->courseMaxStud->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// courseClose
			// 
			this->courseClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->courseClose->BackColor = System::Drawing::Color::White;
			this->courseClose->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->courseClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->courseClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->courseClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courseClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseClose->ForeColor = System::Drawing::Color::Black;
			this->courseClose->Location = System::Drawing::Point(466, 453);
			this->courseClose->Name = L"courseClose";
			this->courseClose->Size = System::Drawing::Size(122, 39);
			this->courseClose->TabIndex = 17;
			this->courseClose->Text = L"Close";
			this->courseClose->UseVisualStyleBackColor = false;
			this->courseClose->Click += gcnew System::EventHandler(this, &mainScreen::courseClose_Click);
			// 
			// importCourseStud
			// 
			this->importCourseStud->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->importCourseStud->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->importCourseStud->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->importCourseStud->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gold;
			this->importCourseStud->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->importCourseStud->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->importCourseStud->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importCourseStud->ForeColor = System::Drawing::Color::Black;
			this->importCourseStud->Location = System::Drawing::Point(26, 453);
			this->importCourseStud->Name = L"importCourseStud";
			this->importCourseStud->Size = System::Drawing::Size(180, 39);
			this->importCourseStud->TabIndex = 16;
			this->importCourseStud->Text = L"Import student";
			this->importCourseStud->UseVisualStyleBackColor = false;
			this->importCourseStud->Click += gcnew System::EventHandler(this, &mainScreen::importCourseStud_Click);
			// 
			// courseSSBox
			// 
			this->courseSSBox->DropDownHeight = 80;
			this->courseSSBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->courseSSBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courseSSBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->courseSSBox->ForeColor = System::Drawing::Color::Black;
			this->courseSSBox->FormattingEnabled = true;
			this->courseSSBox->IntegralHeight = false;
			this->courseSSBox->Location = System::Drawing::Point(281, 359);
			this->courseSSBox->Name = L"courseSSBox";
			this->courseSSBox->Size = System::Drawing::Size(144, 24);
			this->courseSSBox->Sorted = true;
			this->courseSSBox->TabIndex = 12;
			// 
			// courseDayBox
			// 
			this->courseDayBox->DropDownHeight = 80;
			this->courseDayBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->courseDayBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courseDayBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->courseDayBox->ForeColor = System::Drawing::Color::Black;
			this->courseDayBox->FormattingEnabled = true;
			this->courseDayBox->IntegralHeight = false;
			this->courseDayBox->Location = System::Drawing::Point(139, 359);
			this->courseDayBox->Name = L"courseDayBox";
			this->courseDayBox->Size = System::Drawing::Size(99, 24);
			this->courseDayBox->TabIndex = 12;
			// 
			// courseTeacher
			// 
			this->courseTeacher->BackColor = System::Drawing::Color::White;
			this->courseTeacher->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseTeacher->ForeColor = System::Drawing::Color::Black;
			this->courseTeacher->Location = System::Drawing::Point(26, 175);
			this->courseTeacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseTeacher->Name = L"courseTeacher";
			this->courseTeacher->Size = System::Drawing::Size(346, 25);
			this->courseTeacher->TabIndex = 5;
			this->courseTeacher->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::courseTeacher_KeyDown);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(21, 127);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(96, 26);
			this->label30->TabIndex = 4;
			this->label30->Text = L"Teacher:";
			// 
			// courseClassName
			// 
			this->courseClassName->BackColor = System::Drawing::Color::White;
			this->courseClassName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseClassName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseClassName->ForeColor = System::Drawing::Color::Black;
			this->courseClassName->Location = System::Drawing::Point(26, 287);
			this->courseClassName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseClassName->Name = L"courseClassName";
			this->courseClassName->Size = System::Drawing::Size(399, 25);
			this->courseClassName->TabIndex = 5;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(21, 239);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(134, 26);
			this->label29->TabIndex = 4;
			this->label29->Text = L"Class name:";
			// 
			// courseName
			// 
			this->courseName->BackColor = System::Drawing::Color::White;
			this->courseName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseName->ForeColor = System::Drawing::Color::Black;
			this->courseName->Location = System::Drawing::Point(281, 70);
			this->courseName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseName->Name = L"courseName";
			this->courseName->Size = System::Drawing::Size(307, 25);
			this->courseName->TabIndex = 5;
			this->courseName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::courseName_KeyDown);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(276, 22);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(149, 26);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Course name:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(22, 357);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(96, 26);
			this->label34->TabIndex = 4;
			this->label34->Text = L"Session:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(452, 127);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(136, 26);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Max student:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(501, 239);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 26);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Credits:";
			// 
			// courseID
			// 
			this->courseID->BackColor = System::Drawing::Color::White;
			this->courseID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseID->ForeColor = System::Drawing::Color::Black;
			this->courseID->Location = System::Drawing::Point(26, 70);
			this->courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseID->Name = L"courseID";
			this->courseID->Size = System::Drawing::Size(169, 25);
			this->courseID->TabIndex = 5;
			this->courseID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::courseID_KeyDown);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(23, 22);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(116, 26);
			this->label23->TabIndex = 4;
			this->label23->Text = L"Course ID:";
			// 
			// viewClassPanel
			// 
			this->viewClassPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->viewClassPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewClassPanel->Controls->Add(this->viewStudentClass);
			this->viewClassPanel->Controls->Add(this->button4);
			this->viewClassPanel->Controls->Add(this->classListBox);
			this->viewClassPanel->Location = System::Drawing::Point(147, 133);
			this->viewClassPanel->Name = L"viewClassPanel";
			this->viewClassPanel->Size = System::Drawing::Size(636, 534);
			this->viewClassPanel->TabIndex = 11;
			this->viewClassPanel->Visible = false;
			// 
			// viewStudentClass
			// 
			this->viewStudentClass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->viewStudentClass->BackColor = System::Drawing::SystemColors::HotTrack;
			this->viewStudentClass->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->viewStudentClass->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->viewStudentClass->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->viewStudentClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewStudentClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewStudentClass->ForeColor = System::Drawing::Color::White;
			this->viewStudentClass->Location = System::Drawing::Point(26, 453);
			this->viewStudentClass->Name = L"viewStudentClass";
			this->viewStudentClass->Size = System::Drawing::Size(197, 39);
			this->viewStudentClass->TabIndex = 19;
			this->viewStudentClass->Text = L"View students";
			this->viewStudentClass->UseVisualStyleBackColor = false;
			this->viewStudentClass->Click += gcnew System::EventHandler(this, &mainScreen::viewStudentClass_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(464, 451);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 39);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &mainScreen::button4_Click);
			// 
			// classListBox
			// 
			this->classListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->classListBox->BackColor = System::Drawing::Color::Black;
			this->classListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->classListBox->ForeColor = System::Drawing::Color::White;
			this->classListBox->FormattingEnabled = true;
			this->classListBox->ItemHeight = 26;
			this->classListBox->Location = System::Drawing::Point(0, 0);
			this->classListBox->Name = L"classListBox";
			this->classListBox->Size = System::Drawing::Size(636, 394);
			this->classListBox->Sorted = true;
			this->classListBox->TabIndex = 0;
			// 
			// studentListView
			// 
			this->studentListView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->studentListView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->studentListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->NoCol, this->studentIDCol,
					this->NameCol, this->GenderCol, this->DoBCol, this->socialIDCol
			});
			this->studentListView->ForeColor = System::Drawing::Color::White;
			this->studentListView->FullRowSelect = true;
			this->studentListView->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->studentListView->HideSelection = false;
			this->studentListView->Location = System::Drawing::Point(-2, -2);
			this->studentListView->Name = L"studentListView";
			this->studentListView->Size = System::Drawing::Size(636, 396);
			this->studentListView->TabIndex = 12;
			this->studentListView->UseCompatibleStateImageBehavior = false;
			this->studentListView->View = System::Windows::Forms::View::Details;
			// 
			// NoCol
			// 
			this->NoCol->Text = L"No";
			this->NoCol->Width = 30;
			// 
			// studentIDCol
			// 
			this->studentIDCol->Text = L"Student ID";
			this->studentIDCol->Width = 70;
			// 
			// NameCol
			// 
			this->NameCol->Text = L"Name";
			this->NameCol->Width = 175;
			// 
			// GenderCol
			// 
			this->GenderCol->Text = L"Gender";
			this->GenderCol->Width = 50;
			// 
			// DoBCol
			// 
			this->DoBCol->Text = L"DoB";
			this->DoBCol->Width = 70;
			// 
			// socialIDCol
			// 
			this->socialIDCol->Text = L"Social ID";
			this->socialIDCol->Width = 78;
			// 
			// viewStudentPanel
			// 
			this->viewStudentPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->viewStudentPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewStudentPanel->Controls->Add(this->button5);
			this->viewStudentPanel->Controls->Add(this->studentListView);
			this->viewStudentPanel->Location = System::Drawing::Point(147, 133);
			this->viewStudentPanel->Name = L"viewStudentPanel";
			this->viewStudentPanel->Size = System::Drawing::Size(636, 534);
			this->viewStudentPanel->TabIndex = 13;
			this->viewStudentPanel->Visible = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(464, 459);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 39);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Close";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &mainScreen::button5_Click);
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
			this->Controls->Add(this->viewStudentPanel);
			this->Controls->Add(this->viewClassPanel);
			this->Controls->Add(this->coursePanel);
			this->Controls->Add(this->semesterPanel);
			this->Controls->Add(this->studentPanel);
			this->Controls->Add(this->profilePanel);
			this->Controls->Add(this->changePassPanel);
			this->Controls->Add(this->classPanel);
			this->Controls->Add(this->schoolYearPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(903, 814);
			this->Name = L"mainScreen";
			this->Text = L"mainScreen";
			this->Load += gcnew System::EventHandler(this, &mainScreen::mainScreen_Load);
			this->staffPanel->ResumeLayout(false);
			this->profilePanel->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->studentPanel->ResumeLayout(false);
			this->studentPanel->PerformLayout();
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
			this->tableLayoutPanel6->ResumeLayout(false);
			this->schoolYearPanel->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->classPanel->ResumeLayout(false);
			this->classPanel->PerformLayout();
			this->semesterPanel->ResumeLayout(false);
			this->semesterPanel->PerformLayout();
			this->coursePanel->ResumeLayout(false);
			this->coursePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courseCredits))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courseMaxStud))->EndInit();
			this->viewClassPanel->ResumeLayout(false);
			this->viewStudentPanel->ResumeLayout(false);
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
			if (schoolYearPanel->Visible) schoolYearPanel->Hide();
			if (classPanel->Visible) classPanel->Hide();
			if (studentPanel->Visible) studentPanel->Hide();
			if (semesterPanel->Visible) semesterPanel->Hide();
			if (coursePanel->Visible) coursePanel->Hide();
			if (viewClassPanel->Visible) viewClassPanel->Hide();
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
			if (!newSchoolYear->Visible) {
				newSchoolYear->Show();
				newStudent->Show();
				newClass->Show();
				newSemester->Show();
			}
			else {
				newSchoolYear->Hide();
				newStudent->Hide();
				newClass->Hide();
				newSemester->Hide();
			}
				
		}

	private: 
		System::Void newSchoolYear_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!schoolYearPanel->Visible) {
				hideAll();
				menuPanel->Show();
				schoolYearPanel->Show();
				startYear->Focus();
			}
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
		void fillClassBox() {
			studentClassBox->Items->Clear();
			Class* cur = classList;
			while (cur)
			{
				studentClassBox->Items->Add(convertString(cur->name));
				cur = cur->pNext;
			}
		}

	private: 
		System::Void endYear_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter)
				addSchoolYearButton->PerformClick();
		}

	private: 
		System::Void newStudent_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!studentPanel->Visible) {
				hideAll();
				menuPanel->Show();
				studentPanel->Show();
				fillClassBox();
			}
			else
				studentPanel->Hide();
		}

	private: 
		System::Void addSchoolYearButton_Click(System::Object^ sender, System::EventArgs^ e) {
			SchoolYear* newYear = new SchoolYear;
			SchoolYear* curList = schoolYearList;
			newYear->startYear = stringToInt(startYear->Text);
			newYear->endYear = stringToInt(endYear->Text);
			addSchoolYear(curList, newYear);
			MessageBox::Show("New school year added", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			startYear->Text = "";
			endYear->Text = "";
			startYear->Focus();
		}

	private: 
		System::Void cancelAddSchoolYear_Click(System::Object^ sender, System::EventArgs^ e) {
			startYear->Text = "";
			endYear->Text = "";
			schoolYearPanel->Hide();
		}
	private: 
		System::Void newClass_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!classPanel->Visible) {
				hideAll();
				menuPanel->Show();
				classPanel->Show();
				className->Focus();
			}
		}

	private: 
		System::Void addClassButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
			Class* newClass = new Class;
			Class* list = classList;
			newClass->name = convertToString(className->Text);
			newClass->numOfStudent = 0;
			addClass(list, newClass);
			MessageBox::Show("New class added", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			className->Text = "";
			className->Focus();
		}

	private: 
		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			className->Text = "";
			classPanel->Hide();
		}


	private: 
		System::Void Male_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Female->Checked)
				Female->Checked = false;
		}

	private: 
		System::Void Female_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (Male->Checked)
				Male->Checked = false;
		}

	private:
		void checkInput() {
			if (studentNo->Text == "")
			{
				MessageBox::Show("Please input student's ordinal number!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentNo->Focus();
				return;
			}

			if (studentClassBox->Text == "")
			{
				MessageBox::Show("Please choose student's class!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (studentID->Text == "")
			{
				MessageBox::Show("Please input student ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentID->Focus();
				return;
			}

			if (studentFName->Text == "")
			{
				MessageBox::Show("Please input student's first name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentFName->Focus();
				return;
			}

			if (studentLName->Text == "")
			{
				MessageBox::Show("Please input student's last name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentLName->Focus();
				return;
			}

			if (studentSocialID->Text == "")
			{
				MessageBox::Show("Please input student's social ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentSocialID->Focus();
				return;
			}

			if (!Male->Checked && !Female->Checked)
			{
				MessageBox::Show("Please choose student's gender!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

	private:
		System::Void clearStudentButton_Click(System::Object^ sender, System::EventArgs^ e) {
			studentNo->Text = "";
			studentID->Text = "";
			studentFName->Text = "";
			studentLName->Text = "";
			studentSocialID->Text = "";
			Male->Checked = false;
			Female->Checked = false;
		}

	private: 
		System::Void addStudentButton_Click(System::Object^ sender, System::EventArgs^ e) {
			checkInput();

			Class* curClass = takeClass(classList, convertToString(studentClassBox->Text));

			Student* newStud = new Student;
			newStud->No = stringToInt(studentNo->Text);
			newStud->studentID = convertToString(studentID->Text);
			newStud->firstName = convertToString(studentFName->Text);
			newStud->lastName = convertToString(studentLName->Text);
			newStud->dateOfBirth.day = stringToInt(studentDoB->Value.Day.ToString());
			newStud->dateOfBirth.month = stringToInt(studentDoB->Value.Month.ToString());
			newStud->dateOfBirth.year = stringToInt(studentDoB->Value.Year.ToString());
			newStud->socialID = convertToString(studentSocialID->Text);
			if (Male->Checked) newStud->gender = "Male";
			else newStud->gender = "Female";

			addStudent(curClass->student, newStud, curClass->numOfStudent);
			clearStudentButton->PerformClick();
			MessageBox::Show("New student added", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			studentNo->Focus();
		}

	private:
		System::Void cancelStudentButton_Click(System::Object^ sender, System::EventArgs^ e) {
			clearStudentButton->PerformClick();
			studentPanel->Hide();
		}
	private: 
		System::Void studentNo_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				studentID->Focus();
		}

	private: 
		System::Void studentClass_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				studentNo->Focus();
		}

	private: 
		System::Void studentID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				studentFName->Focus();
		}

	private: 
		System::Void studentFName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
			studentLName->Focus();
		}

	private: 
		System::Void studentLName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				studentSocialID->Focus();
		}

	private: 
		System::Void addStudentFromFile_Click(System::Object^ sender, System::EventArgs^ e) {
			if (studentClassBox->Text == "")
			{
				MessageBox::Show("Please choose student's class", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			Class* curClass = takeClass(classList, convertToString(studentClassBox->Text));

			System::IO::Stream^ myStream;
			OpenFileDialog^ file = gcnew OpenFileDialog;
			file->Filter = "CSV files (*.csv)|*.csv";

			if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = file->OpenFile()) != nullptr) {
					String^ fileName = file->InitialDirectory + file->FileName;
					addFileStudent(curClass->student, curClass->numOfStudent, convertToString(fileName));
				}

				MessageBox::Show("Succesfully imported student list", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				myStream->Close();
			}
		}

	private: 
		void fillSchoolYearBox() {
			schoolYearBox->Items->Clear();
			SchoolYear* cur = schoolYearList;
			String^ year;
			while (cur)
			{
				year = intToString(cur->startYear) + " - " + intToString(cur->endYear);
				schoolYearBox->Items->Add(year);
				cur = cur->pNext;
			}
		}

		void fillSession() {
			courseDayBox->Items->Clear();
			courseDayBox->Items->Add("MON");
			courseDayBox->Items->Add("TUE");
			courseDayBox->Items->Add("WED");
			courseDayBox->Items->Add("THU");
			courseDayBox->Items->Add("FRI");
			courseDayBox->Items->Add("SAT");
			
			courseSSBox->Items->Clear();
			courseSSBox->Items->Add("S1 (07:30)");
			courseSSBox->Items->Add("S2 (09:30)");
			courseSSBox->Items->Add("S3 (13:30)");
			courseSSBox->Items->Add("S4 (15:30)");
		}

	private:
		System::Void newSemester_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!semesterPanel->Visible)
			{
				hideAll();
				menuPanel->Show();
				semesterPanel->Show();
				fillSchoolYearBox();
			}
		}

	private:
		void checkSemesterInput() {
			if (schoolYearBox->Text == "") {
				MessageBox::Show("Please choose school year!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (semesterNo->Text == "") {
				MessageBox::Show("Please input which semester!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

	private: 
		System::Void newCourse_Click(System::Object^ sender, System::EventArgs^ e) {
			checkSemesterInput();
			coursePanel->Show();
			coursePanel->BringToFront();
			fillSession();
			courseID->Focus();
		}


	private: 
		System::Void semesterDone_Click(System::Object^ sender, System::EventArgs^ e) {
			schoolYearBox->Text == "";
			semesterNo->Text = "";
			courseList->Items->Clear();
			semesterPanel->Hide();
		}

	private:
		void checkCoursInput() {
			if (courseID->Text == "") {
				MessageBox::Show("Please input course ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (courseName->Text == "") {
				MessageBox::Show("Please input course name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (courseTeacher->Text == "") {
				MessageBox::Show("Please input teacher of the course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (courseClassName->Text == "") {
				MessageBox::Show("Please input class name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (courseDayBox->Text == "") {
				MessageBox::Show("Please choose day of the week!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (courseSSBox->Text == "") {
				MessageBox::Show("Please choose time of the session!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

	private: 
		System::Void courseID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				courseName->Focus();
		}
	
	private: 
		System::Void courseName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				courseTeacher->Focus();
		}

	private: 
		System::Void courseTeacher_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				courseClassName->Focus();
		}

	private:
		System::Void courseClose_Click(System::Object^ sender, System::EventArgs^ e) {
			courseID->Text = "";
			courseName->Text = "";
			courseTeacher->Text = "";
			courseMaxStud->Value = 50;
			courseClassName->Text = "";
			courseCredits->Value = 0;
			courseDayBox->Text = "";
			courseSSBox->Text = "";
			coursePanel->Hide();
		}
	
	private: 
		System::Void importCourseStud_Click(System::Object^ sender, System::EventArgs^ e) {
			checkCoursInput();
			string startYear = convertToString(schoolYearBox->Text->Substring(0, 4));
			string endYear = convertToString(schoolYearBox->Text->Substring(7));
			SchoolYear* curYear = takeYear(schoolYearList, stoi(startYear), stoi(endYear));
			Semester* curSemester = takeSemester(curYear->semesters, stringToInt(semesterNo->Text));
			if (!curSemester) {
				curSemester = new Semester;
				curSemester->semester_num = stringToInt(semesterNo->Text);
				curSemester->start_date.day = stringToInt(smesterStartDay->Value.Day.ToString());
				curSemester->start_date.month = stringToInt(smesterStartDay->Value.Month.ToString());
				curSemester->end_date.day = stringToInt(semesterEndDay->Value.Day.ToString());
				curSemester->end_date.month = stringToInt(semesterEndDay->Value.Month.ToString());
				addSemester(curYear->semesters, curSemester, curYear->numOfSemester);
			}

			Course* newCourse = new Course;

			newCourse->courseID = convertToString(courseID->Text);
			newCourse->courseName = convertToString(courseName->Text);
			newCourse->teacherName = convertToString(courseTeacher->Text);
			newCourse->className = convertToString(courseClassName->Text);
			newCourse->maxStudents = stringToInt(courseMaxStud->Text);
			newCourse->credits = stringToInt(courseCredits->Text);
			newCourse->dayOfWeek = convertToString(courseDayBox->Text);
			newCourse->session = convertToString(courseSSBox->Text->Substring(0, 2));

			addCourse(curSemester->p_CourseList, newCourse, curSemester->numOfCourse);

			System::IO::Stream^ myStream;
			OpenFileDialog^ file = gcnew OpenFileDialog;
			file->Filter = "CSV files (*.csv)|*.csv";

			if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = file->OpenFile()) != nullptr) {
					String^ fileName = file->InitialDirectory + file->FileName;
					addFileCourseStudent(newCourse, convertToString(fileName));
				}
				myStream->Close();
			}

			MessageBox::Show("New course added", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			courseClose->PerformClick();

			courseList->Items->Clear();
			Course* curCourse = curSemester->p_CourseList;
			for (int i = 0; i < curSemester->numOfCourse; i++) {
				courseList->Items->Add(convertString(curCourse->courseID));
				curCourse = curCourse->pNext;
			}
		}
	private: 
		System::Void viewClass_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!viewClassPanel->Visible)
			{
				hideAll();
				menuPanel->Show();
				viewClassPanel->Show();
				classListBox->Items->Clear();

				Class* curClass = classList;
				while (curClass) {
					classListBox->Items->Add(convertString(curClass->name));
					curClass = curClass->pNext;
				}
			}
		}
	private: 
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			viewClassPanel->Hide();
		}

	private: 
		System::Void viewButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!viewClass->Visible) {
				viewClass->Show();
				viewCourse->Show();
			}
			else {
				viewClass->Hide();
				viewCourse->Hide();
			}
		}

	private: 
		System::Void viewStudentClass_Click(System::Object^ sender, System::EventArgs^ e) {
			viewStudentPanel->Show();
			viewStudentPanel->BringToFront();
			studentListView->Items->Clear();

			Class* curClass = takeClass(classList, convertToString(classListBox->SelectedItem->ToString()));
			viewStudentPanel->Show();
			Student* curStud = curClass->student;

			for (int i = 0; i < curClass->numOfStudent; i++) {
				ListViewItem^ item = gcnew ListViewItem(intToString(curStud->No));
				item->SubItems->Add(convertString(curStud->studentID));
				item->SubItems->Add(convertString(curStud->lastName + " " + curStud->firstName));
				item->SubItems->Add(convertString(curStud->gender));
				item->SubItems->Add(intToString(curStud->dateOfBirth.day) + "/" + intToString(curStud->dateOfBirth.month) + "/" + intToString(curStud->dateOfBirth.year));
				item->SubItems->Add(convertString(curStud->socialID));
				studentListView->Items->Add(item);
				curStud = curStud->pNext;
			}
			
		}

	private: 
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			viewStudentPanel->Hide();
		}

};
}
