#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <fstream>
#include "account.h"
#include "allStruct.h"
#include "loginScreen.h"
#include "schoolYear.h"
#include "scoreboard.h"

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
		StudentList* sList = nullptr;

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
private: System::Windows::Forms::Panel^ viewCoursePanel;
private: System::Windows::Forms::Button^ viewOneCourse;
private: System::Windows::Forms::ListBox^ courseListBox;
private: System::Windows::Forms::Button^ viewCourseClose;

private: System::Windows::Forms::Button^ viewOneCourseStudButton;
private: System::Windows::Forms::Button^ updateCourseButton;
private: System::Windows::Forms::Button^ DeleteCourseButton;
private: System::Windows::Forms::Panel^ viewOneCourseStudPanel;
private: System::Windows::Forms::Button^ addOneCourseStudButton;
private: System::Windows::Forms::Button^ deleteOneCourseStudButton;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::ListView^ courseStudListView;

private: System::Windows::Forms::ColumnHeader^ columnHeader1;
private: System::Windows::Forms::ColumnHeader^ IDCol;

private: System::Windows::Forms::ColumnHeader^ columnHeader3;
private: System::Windows::Forms::ColumnHeader^ columnHeader4;
private: System::Windows::Forms::ColumnHeader^ columnHeader5;
private: System::Windows::Forms::ColumnHeader^ columnHeader6;
private: System::Windows::Forms::TextBox^ addOneCourseStudID;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ scoreboardButton;
private: System::Windows::Forms::Button^ importScoreboardButton;
private: System::Windows::Forms::Button^ exportScoreboardButton;
private: System::Windows::Forms::Button^ viewScoreboardButton;



private: System::Windows::Forms::Panel^ importPanel;
private: System::Windows::Forms::ComboBox^ courseBox;
private: System::Windows::Forms::Label^ label35;

private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ ImportButton;
private: System::Windows::Forms::Panel^ ExportScoreboardPanel;
private: System::Windows::Forms::Button^ exportCourseStudButton;

private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::ComboBox^ exportCourseBox;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ courseOrClassPanel;
private: System::Windows::Forms::Button^ viewCourseOrClassButton;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::ComboBox^ viewClassScoreboardBox;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::ComboBox^ viewCourseScoreboardBox;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Panel^ viewCourseScoreboardPanel;
private: System::Windows::Forms::ListView^ courseScoreboardListView;

private: System::Windows::Forms::ColumnHeader^ columnHeader2;
private: System::Windows::Forms::ColumnHeader^ columnHeader7;
private: System::Windows::Forms::ColumnHeader^ columnHeader8;
private: System::Windows::Forms::ColumnHeader^ columnHeader9;
private: System::Windows::Forms::ColumnHeader^ columnHeader10;
private: System::Windows::Forms::ColumnHeader^ columnHeader11;
private: System::Windows::Forms::ColumnHeader^ columnHeader12;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Panel^ updateStudScorePanel;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ OtherMark;
private: System::Windows::Forms::TextBox^ MidtermMark;
private: System::Windows::Forms::TextBox^ finalMark;
private: System::Windows::Forms::TextBox^ totalMark;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ studScoreboardName;

private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ studScoreboardID;
private: System::Windows::Forms::Button^ viewClassStudScoreboard;
private: System::Windows::Forms::Panel^ oneStudScoreboardPanel;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::TextBox^ overallGPA;

private: System::Windows::Forms::ComboBox^ scoreboardSemesterBox;


private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ curGPA;

private: System::Windows::Forms::ComboBox^ scoreboardSchoolYearBox;


private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::ListView^ OneStudentScoreboardListView;

private: System::Windows::Forms::ColumnHeader^ columnHeader13;
private: System::Windows::Forms::ColumnHeader^ columnHeader14;
private: System::Windows::Forms::ColumnHeader^ columnHeader15;
private: System::Windows::Forms::ColumnHeader^ columnHeader16;
private: System::Windows::Forms::Button^ button16;































































	private: System::Windows::Forms::Label^ label8;




		   
	public:
		mainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void getData(Account* account, SchoolYear* schoolYear, Class* classes, StudentList* studentlist)
		{
			curAccount = account;
			schoolYearList = schoolYear;
			classList = classes;
			sList = studentlist;
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
			this->scoreboardButton = (gcnew System::Windows::Forms::Button());
			this->viewClass = (gcnew System::Windows::Forms::Button());
			this->importScoreboardButton = (gcnew System::Windows::Forms::Button());
			this->exportScoreboardButton = (gcnew System::Windows::Forms::Button());
			this->viewScoreboardButton = (gcnew System::Windows::Forms::Button());
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
			this->updateCourseButton = (gcnew System::Windows::Forms::Button());
			this->viewOneCourseStudButton = (gcnew System::Windows::Forms::Button());
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
			this->viewClassStudScoreboard = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->viewCoursePanel = (gcnew System::Windows::Forms::Panel());
			this->DeleteCourseButton = (gcnew System::Windows::Forms::Button());
			this->viewOneCourse = (gcnew System::Windows::Forms::Button());
			this->courseListBox = (gcnew System::Windows::Forms::ListBox());
			this->viewCourseClose = (gcnew System::Windows::Forms::Button());
			this->viewOneCourseStudPanel = (gcnew System::Windows::Forms::Panel());
			this->addOneCourseStudID = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->addOneCourseStudButton = (gcnew System::Windows::Forms::Button());
			this->deleteOneCourseStudButton = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->courseStudListView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->IDCol = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->importPanel = (gcnew System::Windows::Forms::Panel());
			this->ImportButton = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->courseBox = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->ExportScoreboardPanel = (gcnew System::Windows::Forms::Panel());
			this->exportCourseStudButton = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->exportCourseBox = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->courseOrClassPanel = (gcnew System::Windows::Forms::Panel());
			this->viewCourseOrClassButton = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->viewClassScoreboardBox = (gcnew System::Windows::Forms::ComboBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->viewCourseScoreboardBox = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->viewCourseScoreboardPanel = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->courseScoreboardListView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->updateStudScorePanel = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->OtherMark = (gcnew System::Windows::Forms::TextBox());
			this->MidtermMark = (gcnew System::Windows::Forms::TextBox());
			this->finalMark = (gcnew System::Windows::Forms::TextBox());
			this->totalMark = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->studScoreboardName = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->studScoreboardID = (gcnew System::Windows::Forms::TextBox());
			this->oneStudScoreboardPanel = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->overallGPA = (gcnew System::Windows::Forms::TextBox());
			this->scoreboardSemesterBox = (gcnew System::Windows::Forms::ComboBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->curGPA = (gcnew System::Windows::Forms::TextBox());
			this->scoreboardSchoolYearBox = (gcnew System::Windows::Forms::ComboBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->OneStudentScoreboardListView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
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
			this->viewCoursePanel->SuspendLayout();
			this->viewOneCourseStudPanel->SuspendLayout();
			this->importPanel->SuspendLayout();
			this->ExportScoreboardPanel->SuspendLayout();
			this->courseOrClassPanel->SuspendLayout();
			this->viewCourseScoreboardPanel->SuspendLayout();
			this->updateStudScorePanel->SuspendLayout();
			this->oneStudScoreboardPanel->SuspendLayout();
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
			this->clearStudentButton->Visible = false;
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
			this->addStudentFromFile->Text = L"Import";
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
			this->tableLayoutPanel6->Controls->Add(this->scoreboardButton, 0, 8);
			this->tableLayoutPanel6->Controls->Add(this->viewClass, 0, 6);
			this->tableLayoutPanel6->Controls->Add(this->importScoreboardButton, 0, 9);
			this->tableLayoutPanel6->Controls->Add(this->exportScoreboardButton, 0, 10);
			this->tableLayoutPanel6->Controls->Add(this->viewScoreboardButton, 0, 11);
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 13;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(135, 720);
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
			this->newStudent->Location = System::Drawing::Point(10, 178);
			this->newStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newStudent->Name = L"newStudent";
			this->newStudent->Size = System::Drawing::Size(115, 52);
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
			this->newClass->Location = System::Drawing::Point(10, 122);
			this->newClass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newClass->Name = L"newClass";
			this->newClass->Size = System::Drawing::Size(115, 52);
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
			this->newButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->newButton->ForeColor = System::Drawing::Color::White;
			this->newButton->Location = System::Drawing::Point(3, 2);
			this->newButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(129, 60);
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
			this->newSchoolYear->Location = System::Drawing::Point(10, 66);
			this->newSchoolYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newSchoolYear->Name = L"newSchoolYear";
			this->newSchoolYear->Size = System::Drawing::Size(115, 52);
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
			this->newSemester->Location = System::Drawing::Point(10, 234);
			this->newSemester->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newSemester->Name = L"newSemester";
			this->newSemester->Size = System::Drawing::Size(115, 52);
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
			this->viewButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->viewButton->ForeColor = System::Drawing::Color::White;
			this->viewButton->Location = System::Drawing::Point(3, 290);
			this->viewButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewButton->Name = L"viewButton";
			this->viewButton->Size = System::Drawing::Size(129, 61);
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
			this->viewCourse->Location = System::Drawing::Point(10, 411);
			this->viewCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewCourse->Name = L"viewCourse";
			this->viewCourse->Size = System::Drawing::Size(115, 50);
			this->viewCourse->TabIndex = 1;
			this->viewCourse->Text = L"Courses";
			this->viewCourse->UseVisualStyleBackColor = true;
			this->viewCourse->Visible = false;
			this->viewCourse->Click += gcnew System::EventHandler(this, &mainScreen::viewCourse_Click);
			// 
			// scoreboardButton
			// 
			this->scoreboardButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->scoreboardButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->scoreboardButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->scoreboardButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->scoreboardButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->scoreboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->scoreboardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->scoreboardButton->ForeColor = System::Drawing::Color::White;
			this->scoreboardButton->Location = System::Drawing::Point(3, 465);
			this->scoreboardButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->scoreboardButton->Name = L"scoreboardButton";
			this->scoreboardButton->Size = System::Drawing::Size(129, 64);
			this->scoreboardButton->TabIndex = 0;
			this->scoreboardButton->Text = L"Scoreboard";
			this->scoreboardButton->UseVisualStyleBackColor = false;
			this->scoreboardButton->Click += gcnew System::EventHandler(this, &mainScreen::scoreboardButton_Click);
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
			this->viewClass->Location = System::Drawing::Point(10, 355);
			this->viewClass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewClass->Name = L"viewClass";
			this->viewClass->Size = System::Drawing::Size(115, 52);
			this->viewClass->TabIndex = 1;
			this->viewClass->Text = L"Classes";
			this->viewClass->UseVisualStyleBackColor = true;
			this->viewClass->Visible = false;
			this->viewClass->Click += gcnew System::EventHandler(this, &mainScreen::viewClass_Click);
			// 
			// importScoreboardButton
			// 
			this->importScoreboardButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->importScoreboardButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->importScoreboardButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->importScoreboardButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->importScoreboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->importScoreboardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->importScoreboardButton->ForeColor = System::Drawing::Color::White;
			this->importScoreboardButton->Location = System::Drawing::Point(10, 533);
			this->importScoreboardButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->importScoreboardButton->Name = L"importScoreboardButton";
			this->importScoreboardButton->Size = System::Drawing::Size(115, 52);
			this->importScoreboardButton->TabIndex = 1;
			this->importScoreboardButton->Text = L"Import";
			this->importScoreboardButton->UseVisualStyleBackColor = true;
			this->importScoreboardButton->Visible = false;
			this->importScoreboardButton->Click += gcnew System::EventHandler(this, &mainScreen::importScoreboardButton_Click);
			// 
			// exportScoreboardButton
			// 
			this->exportScoreboardButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->exportScoreboardButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->exportScoreboardButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->exportScoreboardButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->exportScoreboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportScoreboardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->exportScoreboardButton->ForeColor = System::Drawing::Color::White;
			this->exportScoreboardButton->Location = System::Drawing::Point(10, 589);
			this->exportScoreboardButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exportScoreboardButton->Name = L"exportScoreboardButton";
			this->exportScoreboardButton->Size = System::Drawing::Size(115, 52);
			this->exportScoreboardButton->TabIndex = 1;
			this->exportScoreboardButton->Text = L"Export";
			this->exportScoreboardButton->UseVisualStyleBackColor = true;
			this->exportScoreboardButton->Visible = false;
			this->exportScoreboardButton->Click += gcnew System::EventHandler(this, &mainScreen::exportScoreboardButton_Click);
			// 
			// viewScoreboardButton
			// 
			this->viewScoreboardButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->viewScoreboardButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->viewScoreboardButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->viewScoreboardButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->viewScoreboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewScoreboardButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->viewScoreboardButton->ForeColor = System::Drawing::Color::White;
			this->viewScoreboardButton->Location = System::Drawing::Point(10, 645);
			this->viewScoreboardButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->viewScoreboardButton->Name = L"viewScoreboardButton";
			this->viewScoreboardButton->Size = System::Drawing::Size(115, 52);
			this->viewScoreboardButton->TabIndex = 1;
			this->viewScoreboardButton->Text = L"View";
			this->viewScoreboardButton->UseVisualStyleBackColor = true;
			this->viewScoreboardButton->Visible = false;
			this->viewScoreboardButton->Click += gcnew System::EventHandler(this, &mainScreen::viewScoreboardButton_Click);
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
			this->semesterDone->Location = System::Drawing::Point(488, 464);
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
			this->courseList->Size = System::Drawing::Size(584, 186);
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
			this->semesterEndDay->Location = System::Drawing::Point(479, 162);
			this->semesterEndDay->Name = L"semesterEndDay";
			this->semesterEndDay->Size = System::Drawing::Size(131, 28);
			this->semesterEndDay->TabIndex = 12;
			// 
			// smesterStartDay
			// 
			this->smesterStartDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->smesterStartDay->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->smesterStartDay->Location = System::Drawing::Point(294, 162);
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
			this->label22->Location = System::Drawing::Point(474, 122);
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
			this->label27->Location = System::Drawing::Point(289, 122);
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
			this->coursePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coursePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->coursePanel->Controls->Add(this->updateCourseButton);
			this->coursePanel->Controls->Add(this->viewOneCourseStudButton);
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
			// updateCourseButton
			// 
			this->updateCourseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->updateCourseButton->BackColor = System::Drawing::Color::Navy;
			this->updateCourseButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->updateCourseButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->updateCourseButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumBlue;
			this->updateCourseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateCourseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateCourseButton->ForeColor = System::Drawing::Color::White;
			this->updateCourseButton->Location = System::Drawing::Point(26, 467);
			this->updateCourseButton->Name = L"updateCourseButton";
			this->updateCourseButton->Size = System::Drawing::Size(121, 39);
			this->updateCourseButton->TabIndex = 20;
			this->updateCourseButton->Text = L"Update";
			this->updateCourseButton->UseVisualStyleBackColor = false;
			this->updateCourseButton->Visible = false;
			this->updateCourseButton->Click += gcnew System::EventHandler(this, &mainScreen::updateCourseButton_Click);
			// 
			// viewOneCourseStudButton
			// 
			this->viewOneCourseStudButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->viewOneCourseStudButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->viewOneCourseStudButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->viewOneCourseStudButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->viewOneCourseStudButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->viewOneCourseStudButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewOneCourseStudButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->viewOneCourseStudButton->ForeColor = System::Drawing::Color::White;
			this->viewOneCourseStudButton->Location = System::Drawing::Point(213, 467);
			this->viewOneCourseStudButton->Name = L"viewOneCourseStudButton";
			this->viewOneCourseStudButton->Size = System::Drawing::Size(212, 39);
			this->viewOneCourseStudButton->TabIndex = 20;
			this->viewOneCourseStudButton->Text = L"View students";
			this->viewOneCourseStudButton->UseVisualStyleBackColor = false;
			this->viewOneCourseStudButton->Visible = false;
			this->viewOneCourseStudButton->Click += gcnew System::EventHandler(this, &mainScreen::viewOneCourseStudButton_Click);
			// 
			// courseCredits
			// 
			this->courseCredits->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseCredits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->courseCredits->Location = System::Drawing::Point(528, 287);
			this->courseCredits->Name = L"courseCredits";
			this->courseCredits->Size = System::Drawing::Size(82, 28);
			this->courseCredits->TabIndex = 19;
			// 
			// courseMaxStud
			// 
			this->courseMaxStud->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseMaxStud->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->courseMaxStud->Location = System::Drawing::Point(479, 171);
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
			this->courseClose->Location = System::Drawing::Point(488, 467);
			this->courseClose->Name = L"courseClose";
			this->courseClose->Size = System::Drawing::Size(122, 39);
			this->courseClose->TabIndex = 17;
			this->courseClose->Text = L"Close";
			this->courseClose->UseVisualStyleBackColor = false;
			this->courseClose->Click += gcnew System::EventHandler(this, &mainScreen::courseClose_Click);
			// 
			// importCourseStud
			// 
			this->importCourseStud->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->importCourseStud->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->importCourseStud->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->importCourseStud->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gold;
			this->importCourseStud->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->importCourseStud->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->importCourseStud->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importCourseStud->ForeColor = System::Drawing::Color::Black;
			this->importCourseStud->Location = System::Drawing::Point(26, 467);
			this->importCourseStud->Name = L"importCourseStud";
			this->importCourseStud->Size = System::Drawing::Size(197, 39);
			this->importCourseStud->TabIndex = 16;
			this->importCourseStud->Text = L"Import student";
			this->importCourseStud->UseVisualStyleBackColor = false;
			this->importCourseStud->Click += gcnew System::EventHandler(this, &mainScreen::importCourseStud_Click);
			// 
			// courseSSBox
			// 
			this->courseSSBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseSSBox->DropDownHeight = 80;
			this->courseSSBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->courseSSBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courseSSBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->courseSSBox->ForeColor = System::Drawing::Color::Black;
			this->courseSSBox->FormattingEnabled = true;
			this->courseSSBox->IntegralHeight = false;
			this->courseSSBox->Location = System::Drawing::Point(303, 359);
			this->courseSSBox->Name = L"courseSSBox";
			this->courseSSBox->Size = System::Drawing::Size(144, 24);
			this->courseSSBox->Sorted = true;
			this->courseSSBox->TabIndex = 12;
			// 
			// courseDayBox
			// 
			this->courseDayBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseDayBox->DropDownHeight = 80;
			this->courseDayBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->courseDayBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courseDayBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->courseDayBox->ForeColor = System::Drawing::Color::Black;
			this->courseDayBox->FormattingEnabled = true;
			this->courseDayBox->IntegralHeight = false;
			this->courseDayBox->Location = System::Drawing::Point(153, 359);
			this->courseDayBox->Name = L"courseDayBox";
			this->courseDayBox->Size = System::Drawing::Size(99, 24);
			this->courseDayBox->TabIndex = 12;
			// 
			// courseTeacher
			// 
			this->courseTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseTeacher->BackColor = System::Drawing::Color::White;
			this->courseTeacher->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseTeacher->ForeColor = System::Drawing::Color::Black;
			this->courseTeacher->Location = System::Drawing::Point(26, 175);
			this->courseTeacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseTeacher->Name = L"courseTeacher";
			this->courseTeacher->Size = System::Drawing::Size(368, 25);
			this->courseTeacher->TabIndex = 5;
			this->courseTeacher->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::courseTeacher_KeyDown);
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->courseClassName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseClassName->BackColor = System::Drawing::Color::White;
			this->courseClassName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseClassName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseClassName->ForeColor = System::Drawing::Color::Black;
			this->courseClassName->Location = System::Drawing::Point(26, 287);
			this->courseClassName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseClassName->Name = L"courseClassName";
			this->courseClassName->Size = System::Drawing::Size(421, 25);
			this->courseClassName->TabIndex = 5;
			// 
			// label29
			// 
			this->label29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->courseName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseName->BackColor = System::Drawing::Color::White;
			this->courseName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->courseName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseName->ForeColor = System::Drawing::Color::Black;
			this->courseName->Location = System::Drawing::Point(281, 70);
			this->courseName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->courseName->Name = L"courseName";
			this->courseName->Size = System::Drawing::Size(329, 25);
			this->courseName->TabIndex = 5;
			this->courseName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::courseName_KeyDown);
			// 
			// label28
			// 
			this->label28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->label34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->label31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(474, 124);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(136, 26);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Max student:";
			// 
			// label32
			// 
			this->label32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(523, 239);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 26);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Credits:";
			// 
			// courseID
			// 
			this->courseID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
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
			this->viewStudentClass->Location = System::Drawing::Point(28, 453);
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
			this->button4->Location = System::Drawing::Point(488, 453);
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
			this->studentListView->Size = System::Drawing::Size(638, 396);
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
			this->viewStudentPanel->Controls->Add(this->viewClassStudScoreboard);
			this->viewStudentPanel->Controls->Add(this->button5);
			this->viewStudentPanel->Controls->Add(this->studentListView);
			this->viewStudentPanel->Location = System::Drawing::Point(147, 133);
			this->viewStudentPanel->Name = L"viewStudentPanel";
			this->viewStudentPanel->Size = System::Drawing::Size(638, 534);
			this->viewStudentPanel->TabIndex = 13;
			this->viewStudentPanel->Visible = false;
			// 
			// viewClassStudScoreboard
			// 
			this->viewClassStudScoreboard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->viewClassStudScoreboard->BackColor = System::Drawing::SystemColors::HotTrack;
			this->viewClassStudScoreboard->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->viewClassStudScoreboard->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->viewClassStudScoreboard->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->viewClassStudScoreboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewClassStudScoreboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->viewClassStudScoreboard->ForeColor = System::Drawing::Color::White;
			this->viewClassStudScoreboard->Location = System::Drawing::Point(26, 467);
			this->viewClassStudScoreboard->Name = L"viewClassStudScoreboard";
			this->viewClassStudScoreboard->Size = System::Drawing::Size(226, 39);
			this->viewClassStudScoreboard->TabIndex = 20;
			this->viewClassStudScoreboard->Text = L"View scoreboard";
			this->viewClassStudScoreboard->UseVisualStyleBackColor = false;
			this->viewClassStudScoreboard->Visible = false;
			this->viewClassStudScoreboard->Click += gcnew System::EventHandler(this, &mainScreen::viewClassStudScoreboard_Click);
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
			this->button5->Location = System::Drawing::Point(491, 464);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 39);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Close";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &mainScreen::button5_Click);
			// 
			// viewCoursePanel
			// 
			this->viewCoursePanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->viewCoursePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewCoursePanel->Controls->Add(this->DeleteCourseButton);
			this->viewCoursePanel->Controls->Add(this->viewOneCourse);
			this->viewCoursePanel->Controls->Add(this->courseListBox);
			this->viewCoursePanel->Controls->Add(this->viewCourseClose);
			this->viewCoursePanel->Location = System::Drawing::Point(147, 133);
			this->viewCoursePanel->Name = L"viewCoursePanel";
			this->viewCoursePanel->Size = System::Drawing::Size(636, 534);
			this->viewCoursePanel->TabIndex = 14;
			this->viewCoursePanel->Visible = false;
			// 
			// DeleteCourseButton
			// 
			this->DeleteCourseButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteCourseButton->BackColor = System::Drawing::Color::Firebrick;
			this->DeleteCourseButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->DeleteCourseButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightCoral;
			this->DeleteCourseButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::IndianRed;
			this->DeleteCourseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteCourseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteCourseButton->ForeColor = System::Drawing::Color::Black;
			this->DeleteCourseButton->Location = System::Drawing::Point(27, 460);
			this->DeleteCourseButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DeleteCourseButton->Name = L"DeleteCourseButton";
			this->DeleteCourseButton->Size = System::Drawing::Size(122, 39);
			this->DeleteCourseButton->TabIndex = 22;
			this->DeleteCourseButton->Text = L"Delete";
			this->DeleteCourseButton->UseVisualStyleBackColor = false;
			this->DeleteCourseButton->Click += gcnew System::EventHandler(this, &mainScreen::DeleteCourseButton_Click);
			// 
			// viewOneCourse
			// 
			this->viewOneCourse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->viewOneCourse->BackColor = System::Drawing::SystemColors::HotTrack;
			this->viewOneCourse->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->viewOneCourse->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->viewOneCourse->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->viewOneCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewOneCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewOneCourse->ForeColor = System::Drawing::Color::White;
			this->viewOneCourse->Location = System::Drawing::Point(213, 460);
			this->viewOneCourse->Name = L"viewOneCourse";
			this->viewOneCourse->Size = System::Drawing::Size(212, 39);
			this->viewOneCourse->TabIndex = 20;
			this->viewOneCourse->Text = L"View course";
			this->viewOneCourse->UseVisualStyleBackColor = false;
			this->viewOneCourse->Click += gcnew System::EventHandler(this, &mainScreen::viewOneCourse_Click);
			// 
			// courseListBox
			// 
			this->courseListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->courseListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->courseListBox->ForeColor = System::Drawing::Color::White;
			this->courseListBox->FormattingEnabled = true;
			this->courseListBox->ItemHeight = 26;
			this->courseListBox->Location = System::Drawing::Point(0, 0);
			this->courseListBox->Name = L"courseListBox";
			this->courseListBox->Size = System::Drawing::Size(635, 394);
			this->courseListBox->TabIndex = 15;
			// 
			// viewCourseClose
			// 
			this->viewCourseClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->viewCourseClose->BackColor = System::Drawing::Color::White;
			this->viewCourseClose->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->viewCourseClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->viewCourseClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->viewCourseClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewCourseClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewCourseClose->ForeColor = System::Drawing::Color::Black;
			this->viewCourseClose->Location = System::Drawing::Point(488, 460);
			this->viewCourseClose->Name = L"viewCourseClose";
			this->viewCourseClose->Size = System::Drawing::Size(122, 39);
			this->viewCourseClose->TabIndex = 19;
			this->viewCourseClose->Text = L"Close";
			this->viewCourseClose->UseVisualStyleBackColor = false;
			this->viewCourseClose->Click += gcnew System::EventHandler(this, &mainScreen::viewCourseClose_Click);
			// 
			// viewOneCourseStudPanel
			// 
			this->viewOneCourseStudPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->viewOneCourseStudPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewOneCourseStudPanel->Controls->Add(this->addOneCourseStudID);
			this->viewOneCourseStudPanel->Controls->Add(this->label33);
			this->viewOneCourseStudPanel->Controls->Add(this->addOneCourseStudButton);
			this->viewOneCourseStudPanel->Controls->Add(this->deleteOneCourseStudButton);
			this->viewOneCourseStudPanel->Controls->Add(this->button7);
			this->viewOneCourseStudPanel->Controls->Add(this->courseStudListView);
			this->viewOneCourseStudPanel->Location = System::Drawing::Point(147, 133);
			this->viewOneCourseStudPanel->Name = L"viewOneCourseStudPanel";
			this->viewOneCourseStudPanel->Size = System::Drawing::Size(636, 534);
			this->viewOneCourseStudPanel->TabIndex = 15;
			this->viewOneCourseStudPanel->Visible = false;
			// 
			// addOneCourseStudID
			// 
			this->addOneCourseStudID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addOneCourseStudID->BackColor = System::Drawing::Color::White;
			this->addOneCourseStudID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addOneCourseStudID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->addOneCourseStudID->ForeColor = System::Drawing::Color::Black;
			this->addOneCourseStudID->Location = System::Drawing::Point(28, 379);
			this->addOneCourseStudID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addOneCourseStudID->Name = L"addOneCourseStudID";
			this->addOneCourseStudID->Size = System::Drawing::Size(582, 25);
			this->addOneCourseStudID->TabIndex = 26;
			this->addOneCourseStudID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &mainScreen::addOneCourseStudID_KeyDown);
			// 
			// label33
			// 
			this->label33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(22, 331);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(121, 26);
			this->label33->TabIndex = 25;
			this->label33->Text = L"Student ID:";
			// 
			// addOneCourseStudButton
			// 
			this->addOneCourseStudButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->addOneCourseStudButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->addOneCourseStudButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addOneCourseStudButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->addOneCourseStudButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->addOneCourseStudButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addOneCourseStudButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addOneCourseStudButton->ForeColor = System::Drawing::Color::White;
			this->addOneCourseStudButton->Location = System::Drawing::Point(213, 464);
			this->addOneCourseStudButton->Name = L"addOneCourseStudButton";
			this->addOneCourseStudButton->Size = System::Drawing::Size(212, 39);
			this->addOneCourseStudButton->TabIndex = 24;
			this->addOneCourseStudButton->Text = L"Add student";
			this->addOneCourseStudButton->UseVisualStyleBackColor = false;
			this->addOneCourseStudButton->Click += gcnew System::EventHandler(this, &mainScreen::addOneCourseStudButton_Click);
			// 
			// deleteOneCourseStudButton
			// 
			this->deleteOneCourseStudButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->deleteOneCourseStudButton->BackColor = System::Drawing::Color::Firebrick;
			this->deleteOneCourseStudButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->deleteOneCourseStudButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightCoral;
			this->deleteOneCourseStudButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::IndianRed;
			this->deleteOneCourseStudButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteOneCourseStudButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->deleteOneCourseStudButton->ForeColor = System::Drawing::Color::Black;
			this->deleteOneCourseStudButton->Location = System::Drawing::Point(27, 464);
			this->deleteOneCourseStudButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deleteOneCourseStudButton->Name = L"deleteOneCourseStudButton";
			this->deleteOneCourseStudButton->Size = System::Drawing::Size(122, 39);
			this->deleteOneCourseStudButton->TabIndex = 23;
			this->deleteOneCourseStudButton->Text = L"Delete";
			this->deleteOneCourseStudButton->UseVisualStyleBackColor = false;
			this->deleteOneCourseStudButton->Click += gcnew System::EventHandler(this, &mainScreen::deleteOneCourseStudButton_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(489, 464);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(122, 39);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Close";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &mainScreen::button7_Click);
			// 
			// courseStudListView
			// 
			this->courseStudListView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseStudListView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->courseStudListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1,
					this->IDCol, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->courseStudListView->ForeColor = System::Drawing::Color::White;
			this->courseStudListView->FullRowSelect = true;
			this->courseStudListView->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->courseStudListView->HideSelection = false;
			this->courseStudListView->Location = System::Drawing::Point(-2, -2);
			this->courseStudListView->MultiSelect = false;
			this->courseStudListView->Name = L"courseStudListView";
			this->courseStudListView->Size = System::Drawing::Size(636, 290);
			this->courseStudListView->TabIndex = 12;
			this->courseStudListView->UseCompatibleStateImageBehavior = false;
			this->courseStudListView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No";
			this->columnHeader1->Width = 30;
			// 
			// IDCol
			// 
			this->IDCol->Text = L"Student ID";
			this->IDCol->Width = 70;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Name";
			this->columnHeader3->Width = 175;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Gender";
			this->columnHeader4->Width = 50;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"DoB";
			this->columnHeader5->Width = 70;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Social ID";
			this->columnHeader6->Width = 78;
			// 
			// importPanel
			// 
			this->importPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->importPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->importPanel->Controls->Add(this->ImportButton);
			this->importPanel->Controls->Add(this->button9);
			this->importPanel->Controls->Add(this->courseBox);
			this->importPanel->Controls->Add(this->label35);
			this->importPanel->Location = System::Drawing::Point(147, 133);
			this->importPanel->Name = L"importPanel";
			this->importPanel->Size = System::Drawing::Size(636, 534);
			this->importPanel->TabIndex = 16;
			this->importPanel->Visible = false;
			// 
			// ImportButton
			// 
			this->ImportButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->ImportButton->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->ImportButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ImportButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gold;
			this->ImportButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->ImportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImportButton->ForeColor = System::Drawing::Color::Black;
			this->ImportButton->Location = System::Drawing::Point(341, 458);
			this->ImportButton->Name = L"ImportButton";
			this->ImportButton->Size = System::Drawing::Size(124, 39);
			this->ImportButton->TabIndex = 26;
			this->ImportButton->Text = L"Import";
			this->ImportButton->UseVisualStyleBackColor = false;
			this->ImportButton->Click += gcnew System::EventHandler(this, &mainScreen::ImportButton_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(487, 456);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(122, 39);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Close";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &mainScreen::button9_Click);
			// 
			// courseBox
			// 
			this->courseBox->DropDownHeight = 80;
			this->courseBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->courseBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->courseBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->courseBox->ForeColor = System::Drawing::Color::Black;
			this->courseBox->FormattingEnabled = true;
			this->courseBox->IntegralHeight = false;
			this->courseBox->Location = System::Drawing::Point(28, 84);
			this->courseBox->Name = L"courseBox";
			this->courseBox->Size = System::Drawing::Size(584, 24);
			this->courseBox->Sorted = true;
			this->courseBox->TabIndex = 12;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(23, 41);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(82, 26);
			this->label35->TabIndex = 11;
			this->label35->Text = L"Course";
			// 
			// ExportScoreboardPanel
			// 
			this->ExportScoreboardPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ExportScoreboardPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ExportScoreboardPanel->Controls->Add(this->exportCourseStudButton);
			this->ExportScoreboardPanel->Controls->Add(this->button10);
			this->ExportScoreboardPanel->Controls->Add(this->exportCourseBox);
			this->ExportScoreboardPanel->Controls->Add(this->label36);
			this->ExportScoreboardPanel->Location = System::Drawing::Point(147, 133);
			this->ExportScoreboardPanel->Name = L"ExportScoreboardPanel";
			this->ExportScoreboardPanel->Size = System::Drawing::Size(637, 534);
			this->ExportScoreboardPanel->TabIndex = 17;
			this->ExportScoreboardPanel->Visible = false;
			// 
			// exportCourseStudButton
			// 
			this->exportCourseStudButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->exportCourseStudButton->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->exportCourseStudButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->exportCourseStudButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gold;
			this->exportCourseStudButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->exportCourseStudButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportCourseStudButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exportCourseStudButton->ForeColor = System::Drawing::Color::Black;
			this->exportCourseStudButton->Location = System::Drawing::Point(294, 458);
			this->exportCourseStudButton->Name = L"exportCourseStudButton";
			this->exportCourseStudButton->Size = System::Drawing::Size(171, 39);
			this->exportCourseStudButton->TabIndex = 28;
			this->exportCourseStudButton->Text = L"Export to...";
			this->exportCourseStudButton->UseVisualStyleBackColor = false;
			this->exportCourseStudButton->Click += gcnew System::EventHandler(this, &mainScreen::exportCourseStudButton_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(489, 456);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(122, 39);
			this->button10->TabIndex = 27;
			this->button10->Text = L"Close";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &mainScreen::button10_Click);
			// 
			// exportCourseBox
			// 
			this->exportCourseBox->DropDownHeight = 80;
			this->exportCourseBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->exportCourseBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportCourseBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->exportCourseBox->ForeColor = System::Drawing::Color::Black;
			this->exportCourseBox->FormattingEnabled = true;
			this->exportCourseBox->IntegralHeight = false;
			this->exportCourseBox->Location = System::Drawing::Point(29, 84);
			this->exportCourseBox->Name = L"exportCourseBox";
			this->exportCourseBox->Size = System::Drawing::Size(584, 24);
			this->exportCourseBox->Sorted = true;
			this->exportCourseBox->TabIndex = 14;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(24, 41);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(82, 26);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Course";
			// 
			// courseOrClassPanel
			// 
			this->courseOrClassPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->courseOrClassPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->courseOrClassPanel->Controls->Add(this->viewCourseOrClassButton);
			this->courseOrClassPanel->Controls->Add(this->button11);
			this->courseOrClassPanel->Controls->Add(this->label38);
			this->courseOrClassPanel->Controls->Add(this->viewClassScoreboardBox);
			this->courseOrClassPanel->Controls->Add(this->label39);
			this->courseOrClassPanel->Controls->Add(this->viewCourseScoreboardBox);
			this->courseOrClassPanel->Controls->Add(this->label37);
			this->courseOrClassPanel->Location = System::Drawing::Point(147, 133);
			this->courseOrClassPanel->Name = L"courseOrClassPanel";
			this->courseOrClassPanel->Size = System::Drawing::Size(638, 534);
			this->courseOrClassPanel->TabIndex = 18;
			this->courseOrClassPanel->Visible = false;
			// 
			// viewCourseOrClassButton
			// 
			this->viewCourseOrClassButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->viewCourseOrClassButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->viewCourseOrClassButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->viewCourseOrClassButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->viewCourseOrClassButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->viewCourseOrClassButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewCourseOrClassButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->viewCourseOrClassButton->ForeColor = System::Drawing::Color::White;
			this->viewCourseOrClassButton->Location = System::Drawing::Point(341, 453);
			this->viewCourseOrClassButton->Name = L"viewCourseOrClassButton";
			this->viewCourseOrClassButton->Size = System::Drawing::Size(122, 39);
			this->viewCourseOrClassButton->TabIndex = 28;
			this->viewCourseOrClassButton->Text = L"View";
			this->viewCourseOrClassButton->UseVisualStyleBackColor = false;
			this->viewCourseOrClassButton->Click += gcnew System::EventHandler(this, &mainScreen::viewCourseOrClassButton_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(491, 453);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(122, 39);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Close";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &mainScreen::button11_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(21, 42);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(312, 26);
			this->label38->TabIndex = 17;
			this->label38->Text = L"Please select a course or class";
			// 
			// viewClassScoreboardBox
			// 
			this->viewClassScoreboardBox->DropDownHeight = 80;
			this->viewClassScoreboardBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewClassScoreboardBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewClassScoreboardBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Pixel));
			this->viewClassScoreboardBox->ForeColor = System::Drawing::Color::Black;
			this->viewClassScoreboardBox->FormattingEnabled = true;
			this->viewClassScoreboardBox->IntegralHeight = false;
			this->viewClassScoreboardBox->Location = System::Drawing::Point(28, 260);
			this->viewClassScoreboardBox->Name = L"viewClassScoreboardBox";
			this->viewClassScoreboardBox->Size = System::Drawing::Size(584, 24);
			this->viewClassScoreboardBox->Sorted = true;
			this->viewClassScoreboardBox->TabIndex = 16;
			this->viewClassScoreboardBox->SelectedIndexChanged += gcnew System::EventHandler(this, &mainScreen::viewClassScoreboardBox_SelectedIndexChanged);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label39->ForeColor = System::Drawing::Color::White;
			this->label39->Location = System::Drawing::Point(23, 217);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(67, 26);
			this->label39->TabIndex = 15;
			this->label39->Text = L"Class";
			// 
			// viewCourseScoreboardBox
			// 
			this->viewCourseScoreboardBox->DropDownHeight = 80;
			this->viewCourseScoreboardBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->viewCourseScoreboardBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewCourseScoreboardBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Pixel));
			this->viewCourseScoreboardBox->ForeColor = System::Drawing::Color::Black;
			this->viewCourseScoreboardBox->FormattingEnabled = true;
			this->viewCourseScoreboardBox->IntegralHeight = false;
			this->viewCourseScoreboardBox->Location = System::Drawing::Point(27, 151);
			this->viewCourseScoreboardBox->Name = L"viewCourseScoreboardBox";
			this->viewCourseScoreboardBox->Size = System::Drawing::Size(584, 24);
			this->viewCourseScoreboardBox->Sorted = true;
			this->viewCourseScoreboardBox->TabIndex = 16;
			this->viewCourseScoreboardBox->SelectedIndexChanged += gcnew System::EventHandler(this, &mainScreen::viewCourseScoreboardBox_SelectedIndexChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(22, 108);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(82, 26);
			this->label37->TabIndex = 15;
			this->label37->Text = L"Course";
			// 
			// viewCourseScoreboardPanel
			// 
			this->viewCourseScoreboardPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->viewCourseScoreboardPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewCourseScoreboardPanel->Controls->Add(this->button12);
			this->viewCourseScoreboardPanel->Controls->Add(this->courseScoreboardListView);
			this->viewCourseScoreboardPanel->Controls->Add(this->button8);
			this->viewCourseScoreboardPanel->Location = System::Drawing::Point(147, 133);
			this->viewCourseScoreboardPanel->Name = L"viewCourseScoreboardPanel";
			this->viewCourseScoreboardPanel->Size = System::Drawing::Size(638, 534);
			this->viewCourseScoreboardPanel->TabIndex = 19;
			this->viewCourseScoreboardPanel->Visible = false;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(341, 453);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(120, 39);
			this->button12->TabIndex = 28;
			this->button12->Text = L"Update";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &mainScreen::button12_Click);
			// 
			// courseScoreboardListView
			// 
			this->courseScoreboardListView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->courseScoreboardListView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->courseScoreboardListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader2,
					this->columnHeader7, this->columnHeader8, this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12
			});
			this->courseScoreboardListView->ForeColor = System::Drawing::Color::White;
			this->courseScoreboardListView->FullRowSelect = true;
			this->courseScoreboardListView->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->courseScoreboardListView->HideSelection = false;
			this->courseScoreboardListView->Location = System::Drawing::Point(-2, -2);
			this->courseScoreboardListView->Name = L"courseScoreboardListView";
			this->courseScoreboardListView->Size = System::Drawing::Size(638, 396);
			this->courseScoreboardListView->TabIndex = 13;
			this->courseScoreboardListView->UseCompatibleStateImageBehavior = false;
			this->courseScoreboardListView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"No";
			this->columnHeader2->Width = 30;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Student ID";
			this->columnHeader7->Width = 70;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Name";
			this->columnHeader8->Width = 175;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Total";
			this->columnHeader9->Width = 50;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Final";
			this->columnHeader10->Width = 50;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Midterm";
			this->columnHeader11->Width = 50;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Other";
			this->columnHeader12->Width = 50;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(488, 453);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(122, 39);
			this->button8->TabIndex = 27;
			this->button8->Text = L"Close";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &mainScreen::button8_Click);
			// 
			// updateStudScorePanel
			// 
			this->updateStudScorePanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->updateStudScorePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->updateStudScorePanel->Controls->Add(this->button13);
			this->updateStudScorePanel->Controls->Add(this->button14);
			this->updateStudScorePanel->Controls->Add(this->label45);
			this->updateStudScorePanel->Controls->Add(this->label44);
			this->updateStudScorePanel->Controls->Add(this->label43);
			this->updateStudScorePanel->Controls->Add(this->label42);
			this->updateStudScorePanel->Controls->Add(this->OtherMark);
			this->updateStudScorePanel->Controls->Add(this->MidtermMark);
			this->updateStudScorePanel->Controls->Add(this->finalMark);
			this->updateStudScorePanel->Controls->Add(this->totalMark);
			this->updateStudScorePanel->Controls->Add(this->label41);
			this->updateStudScorePanel->Controls->Add(this->studScoreboardName);
			this->updateStudScorePanel->Controls->Add(this->label40);
			this->updateStudScorePanel->Controls->Add(this->studScoreboardID);
			this->updateStudScorePanel->Location = System::Drawing::Point(147, 133);
			this->updateStudScorePanel->Name = L"updateStudScorePanel";
			this->updateStudScorePanel->Size = System::Drawing::Size(638, 534);
			this->updateStudScorePanel->TabIndex = 20;
			this->updateStudScorePanel->Visible = false;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(343, 456);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 39);
			this->button13->TabIndex = 30;
			this->button13->Text = L"Confirm";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &mainScreen::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(490, 456);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(122, 39);
			this->button14->TabIndex = 29;
			this->button14->Text = L"Cancel";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &mainScreen::button14_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label45->ForeColor = System::Drawing::Color::White;
			this->label45->Location = System::Drawing::Point(487, 253);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(66, 26);
			this->label45->TabIndex = 6;
			this->label45->Text = L"Other";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label44->ForeColor = System::Drawing::Color::White;
			this->label44->Location = System::Drawing::Point(337, 253);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(91, 26);
			this->label44->TabIndex = 6;
			this->label44->Text = L"Midterm";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label43->ForeColor = System::Drawing::Color::White;
			this->label43->Location = System::Drawing::Point(185, 253);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(59, 26);
			this->label43->TabIndex = 6;
			this->label43->Text = L"Final";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label42->ForeColor = System::Drawing::Color::White;
			this->label42->Location = System::Drawing::Point(37, 253);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(59, 26);
			this->label42->TabIndex = 6;
			this->label42->Text = L"Total";
			// 
			// OtherMark
			// 
			this->OtherMark->BackColor = System::Drawing::Color::White;
			this->OtherMark->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->OtherMark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->OtherMark->ForeColor = System::Drawing::Color::Black;
			this->OtherMark->Location = System::Drawing::Point(491, 294);
			this->OtherMark->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OtherMark->Name = L"OtherMark";
			this->OtherMark->Size = System::Drawing::Size(106, 25);
			this->OtherMark->TabIndex = 7;
			// 
			// MidtermMark
			// 
			this->MidtermMark->BackColor = System::Drawing::Color::White;
			this->MidtermMark->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MidtermMark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->MidtermMark->ForeColor = System::Drawing::Color::Black;
			this->MidtermMark->Location = System::Drawing::Point(341, 294);
			this->MidtermMark->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MidtermMark->Name = L"MidtermMark";
			this->MidtermMark->Size = System::Drawing::Size(106, 25);
			this->MidtermMark->TabIndex = 7;
			// 
			// finalMark
			// 
			this->finalMark->BackColor = System::Drawing::Color::White;
			this->finalMark->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->finalMark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->finalMark->ForeColor = System::Drawing::Color::Black;
			this->finalMark->Location = System::Drawing::Point(189, 294);
			this->finalMark->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->finalMark->Name = L"finalMark";
			this->finalMark->Size = System::Drawing::Size(106, 25);
			this->finalMark->TabIndex = 7;
			// 
			// totalMark
			// 
			this->totalMark->BackColor = System::Drawing::Color::White;
			this->totalMark->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->totalMark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->totalMark->ForeColor = System::Drawing::Color::Black;
			this->totalMark->Location = System::Drawing::Point(41, 294);
			this->totalMark->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->totalMark->Name = L"totalMark";
			this->totalMark->Size = System::Drawing::Size(106, 25);
			this->totalMark->TabIndex = 7;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label41->ForeColor = System::Drawing::Color::White;
			this->label41->Location = System::Drawing::Point(24, 148);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(77, 26);
			this->label41->TabIndex = 4;
			this->label41->Text = L"Name:";
			// 
			// studScoreboardName
			// 
			this->studScoreboardName->BackColor = System::Drawing::Color::White;
			this->studScoreboardName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studScoreboardName->Enabled = false;
			this->studScoreboardName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studScoreboardName->ForeColor = System::Drawing::Color::Black;
			this->studScoreboardName->Location = System::Drawing::Point(28, 189);
			this->studScoreboardName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studScoreboardName->Name = L"studScoreboardName";
			this->studScoreboardName->Size = System::Drawing::Size(584, 25);
			this->studScoreboardName->TabIndex = 5;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label40->ForeColor = System::Drawing::Color::White;
			this->label40->Location = System::Drawing::Point(24, 37);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(121, 26);
			this->label40->TabIndex = 2;
			this->label40->Text = L"Student ID:";
			// 
			// studScoreboardID
			// 
			this->studScoreboardID->BackColor = System::Drawing::Color::White;
			this->studScoreboardID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->studScoreboardID->Enabled = false;
			this->studScoreboardID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->studScoreboardID->ForeColor = System::Drawing::Color::Black;
			this->studScoreboardID->Location = System::Drawing::Point(28, 78);
			this->studScoreboardID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->studScoreboardID->Name = L"studScoreboardID";
			this->studScoreboardID->Size = System::Drawing::Size(584, 25);
			this->studScoreboardID->TabIndex = 3;
			// 
			// oneStudScoreboardPanel
			// 
			this->oneStudScoreboardPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->oneStudScoreboardPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->oneStudScoreboardPanel->Controls->Add(this->button16);
			this->oneStudScoreboardPanel->Controls->Add(this->button15);
			this->oneStudScoreboardPanel->Controls->Add(this->label49);
			this->oneStudScoreboardPanel->Controls->Add(this->label48);
			this->oneStudScoreboardPanel->Controls->Add(this->overallGPA);
			this->oneStudScoreboardPanel->Controls->Add(this->scoreboardSemesterBox);
			this->oneStudScoreboardPanel->Controls->Add(this->label47);
			this->oneStudScoreboardPanel->Controls->Add(this->curGPA);
			this->oneStudScoreboardPanel->Controls->Add(this->scoreboardSchoolYearBox);
			this->oneStudScoreboardPanel->Controls->Add(this->label46);
			this->oneStudScoreboardPanel->Controls->Add(this->OneStudentScoreboardListView);
			this->oneStudScoreboardPanel->Location = System::Drawing::Point(147, 133);
			this->oneStudScoreboardPanel->Name = L"oneStudScoreboardPanel";
			this->oneStudScoreboardPanel->Size = System::Drawing::Size(638, 534);
			this->oneStudScoreboardPanel->TabIndex = 21;
			this->oneStudScoreboardPanel->Visible = false;
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button16->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Highlight;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(487, 140);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(122, 39);
			this->button16->TabIndex = 28;
			this->button16->Text = L"Apply";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &mainScreen::button16_Click);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(488, 467);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(122, 39);
			this->button15->TabIndex = 27;
			this->button15->Text = L"Close";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &mainScreen::button15_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label49->ForeColor = System::Drawing::Color::White;
			this->label49->Location = System::Drawing::Point(24, 39);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(140, 26);
			this->label49->TabIndex = 25;
			this->label49->Text = L"Overall GPA:";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label48->ForeColor = System::Drawing::Color::White;
			this->label48->Location = System::Drawing::Point(347, 39);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(143, 26);
			this->label48->TabIndex = 25;
			this->label48->Text = L"Current GPA:";
			// 
			// overallGPA
			// 
			this->overallGPA->BackColor = System::Drawing::Color::White;
			this->overallGPA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->overallGPA->Enabled = false;
			this->overallGPA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->overallGPA->ForeColor = System::Drawing::Color::Black;
			this->overallGPA->Location = System::Drawing::Point(180, 39);
			this->overallGPA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->overallGPA->Name = L"overallGPA";
			this->overallGPA->Size = System::Drawing::Size(103, 25);
			this->overallGPA->TabIndex = 26;
			this->overallGPA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// scoreboardSemesterBox
			// 
			this->scoreboardSemesterBox->DropDownHeight = 80;
			this->scoreboardSemesterBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->scoreboardSemesterBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->scoreboardSemesterBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Pixel));
			this->scoreboardSemesterBox->ForeColor = System::Drawing::Color::Black;
			this->scoreboardSemesterBox->FormattingEnabled = true;
			this->scoreboardSemesterBox->IntegralHeight = false;
			this->scoreboardSemesterBox->Location = System::Drawing::Point(246, 151);
			this->scoreboardSemesterBox->Name = L"scoreboardSemesterBox";
			this->scoreboardSemesterBox->Size = System::Drawing::Size(169, 24);
			this->scoreboardSemesterBox->Sorted = true;
			this->scoreboardSemesterBox->TabIndex = 24;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label47->ForeColor = System::Drawing::Color::White;
			this->label47->Location = System::Drawing::Point(242, 105);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(106, 26);
			this->label47->TabIndex = 23;
			this->label47->Text = L"Semester";
			// 
			// curGPA
			// 
			this->curGPA->BackColor = System::Drawing::Color::White;
			this->curGPA->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->curGPA->Enabled = false;
			this->curGPA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->curGPA->ForeColor = System::Drawing::Color::Black;
			this->curGPA->Location = System::Drawing::Point(506, 41);
			this->curGPA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->curGPA->Name = L"curGPA";
			this->curGPA->Size = System::Drawing::Size(103, 25);
			this->curGPA->TabIndex = 26;
			this->curGPA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// scoreboardSchoolYearBox
			// 
			this->scoreboardSchoolYearBox->DropDownHeight = 80;
			this->scoreboardSchoolYearBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->scoreboardSchoolYearBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->scoreboardSchoolYearBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Pixel));
			this->scoreboardSchoolYearBox->ForeColor = System::Drawing::Color::Black;
			this->scoreboardSchoolYearBox->FormattingEnabled = true;
			this->scoreboardSchoolYearBox->IntegralHeight = false;
			this->scoreboardSchoolYearBox->Location = System::Drawing::Point(26, 150);
			this->scoreboardSchoolYearBox->Name = L"scoreboardSchoolYearBox";
			this->scoreboardSchoolYearBox->Size = System::Drawing::Size(169, 24);
			this->scoreboardSchoolYearBox->Sorted = true;
			this->scoreboardSchoolYearBox->TabIndex = 24;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label46->ForeColor = System::Drawing::Color::White;
			this->label46->Location = System::Drawing::Point(22, 104);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(127, 26);
			this->label46->TabIndex = 23;
			this->label46->Text = L"School year";
			// 
			// OneStudentScoreboardListView
			// 
			this->OneStudentScoreboardListView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->OneStudentScoreboardListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader13,
					this->columnHeader14, this->columnHeader15, this->columnHeader16
			});
			this->OneStudentScoreboardListView->ForeColor = System::Drawing::Color::White;
			this->OneStudentScoreboardListView->FullRowSelect = true;
			this->OneStudentScoreboardListView->HideSelection = false;
			this->OneStudentScoreboardListView->Location = System::Drawing::Point(26, 219);
			this->OneStudentScoreboardListView->Name = L"OneStudentScoreboardListView";
			this->OneStudentScoreboardListView->Size = System::Drawing::Size(583, 209);
			this->OneStudentScoreboardListView->TabIndex = 22;
			this->OneStudentScoreboardListView->UseCompatibleStateImageBehavior = false;
			this->OneStudentScoreboardListView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Course ID";
			this->columnHeader13->Width = 100;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Course name";
			this->columnHeader14->Width = 135;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Class name";
			this->columnHeader15->Width = 135;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Total mark";
			this->columnHeader16->Width = 63;
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
			this->Controls->Add(this->oneStudScoreboardPanel);
			this->Controls->Add(this->studentPanel);
			this->Controls->Add(this->profilePanel);
			this->Controls->Add(this->changePassPanel);
			this->Controls->Add(this->ExportScoreboardPanel);
			this->Controls->Add(this->importPanel);
			this->Controls->Add(this->updateStudScorePanel);
			this->Controls->Add(this->viewCourseScoreboardPanel);
			this->Controls->Add(this->courseOrClassPanel);
			this->Controls->Add(this->classPanel);
			this->Controls->Add(this->schoolYearPanel);
			this->Controls->Add(this->viewClassPanel);
			this->Controls->Add(this->viewCoursePanel);
			this->Controls->Add(this->viewOneCourseStudPanel);
			this->Controls->Add(this->coursePanel);
			this->Controls->Add(this->viewStudentPanel);
			this->Controls->Add(this->semesterPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(903, 814);
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
			this->viewCoursePanel->ResumeLayout(false);
			this->viewOneCourseStudPanel->ResumeLayout(false);
			this->viewOneCourseStudPanel->PerformLayout();
			this->importPanel->ResumeLayout(false);
			this->importPanel->PerformLayout();
			this->ExportScoreboardPanel->ResumeLayout(false);
			this->ExportScoreboardPanel->PerformLayout();
			this->courseOrClassPanel->ResumeLayout(false);
			this->courseOrClassPanel->PerformLayout();
			this->viewCourseScoreboardPanel->ResumeLayout(false);
			this->updateStudScorePanel->ResumeLayout(false);
			this->updateStudScorePanel->PerformLayout();
			this->oneStudScoreboardPanel->ResumeLayout(false);
			this->oneStudScoreboardPanel->PerformLayout();
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
			if (coursePanel->Visible) courseClose->PerformClick();
			if (viewClassPanel->Visible) viewClassPanel->Hide();
			if (viewStudentPanel->Visible) button5->PerformClick();
			if (viewCoursePanel->Visible) viewCoursePanel->Hide();
			if (viewOneCourseStudPanel->Visible) viewOneCourseStudPanel->Hide();
			if (importPanel->Visible) importPanel->Hide();
			if (ExportScoreboardPanel->Visible) ExportScoreboardPanel->Hide();
			if (courseOrClassPanel->Visible) courseOrClassPanel->Hide();
			if (viewCourseScoreboardPanel->Visible) viewCourseScoreboardPanel->Hide();
			if (updateStudScorePanel->Visible) updateStudScorePanel->Hide();
			if (oneStudScoreboardPanel->Visible) oneStudScoreboardPanel->Hide();
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
		float stringToFloat(System::String^ s) {
			string ss = convertToString(s);
			return stof(ss);
		}

	private:
		System::String ^ floatToString(float x) {
			return String::Format("{0:0.0}", x)->Replace(",",".");
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
			if (startYear->Text == "") {
				MessageBox::Show("Please input start year!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (endYear->Text == "") {
				MessageBox::Show("Please input end year!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

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
			if (className->Text == "") {
				MessageBox::Show("Please input class name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

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
		bool checkInput() {
			if (studentClassBox->Text == "")
			{
				MessageBox::Show("Please choose student's class!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (studentNo->Text == "")
			{
				MessageBox::Show("Please input student's ordinal number!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentNo->Focus();
				return false;
			}

			if (studentID->Text == "")
			{
				MessageBox::Show("Please input student ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentID->Focus();
				return false;
			}

			if (studentFName->Text == "")
			{
				MessageBox::Show("Please input student's first name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentFName->Focus();
				return false;
			}

			if (studentLName->Text == "")
			{
				MessageBox::Show("Please input student's last name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentLName->Focus();
				return false;
			}

			if (studentSocialID->Text == "")
			{
				MessageBox::Show("Please input student's social ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				studentSocialID->Focus();
				return false;
			}

			if (!Male->Checked && !Female->Checked)
			{
				MessageBox::Show("Please choose student's gender!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			return true;
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
			if (!checkInput()) return;

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

			StudentList* curList = sList;
			addStudent(curClass, newStud, curList);
			clearStudentButton->Show();
			clearStudentButton->PerformClick();
			clearStudentButton->Hide();
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
					StudentList* curList = sList;
					addFileStudent(curClass, curList, convertToString(fileName));
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
		bool checkSemesterInput() {
			if (schoolYearBox->Text == "") {
				MessageBox::Show("Please choose school year!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (semesterNo->Text == "") {
				MessageBox::Show("Please input which semester!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			return true;
		}

	private: 
		System::Void newCourse_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!checkSemesterInput()) return;
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
		bool checkCoursInput() {
			if (courseID->Text == "") {
				MessageBox::Show("Please input course ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (courseName->Text == "") {
				MessageBox::Show("Please input course name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (courseTeacher->Text == "") {
				MessageBox::Show("Please input teacher of the course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (courseClassName->Text == "") {
				MessageBox::Show("Please input class name!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (courseDayBox->Text == "") {
				MessageBox::Show("Please choose day of the week!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (courseSSBox->Text == "") {
				MessageBox::Show("Please choose time of the session!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			return true;
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
			if (!importCourseStud->Visible) importCourseStud->Show();
			if (viewOneCourseStudButton->Visible) viewOneCourseStudButton->Hide();
			if (updateCourseButton->Visible) updateCourseButton->Hide();
			if (!courseID->Enabled) courseID->Enabled = true;
			coursePanel->Hide();
		}
	
	private: 
		System::Void importCourseStud_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!checkCoursInput()) return;
			StudentList* sList = nullptr;
			readStudentList(sList, classList);
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
					StudentList* curList = sList;
					addFileCourseStudent(newCourse, curList, convertToString(fileName));
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
			if (classListBox->SelectedIndex == -1) {
				MessageBox::Show("Please select a class!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

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
			if (viewClassStudScoreboard->Visible) viewClassStudScoreboard->Hide();
		}

	public:
		Course* oneCourse = nullptr;
		Semester* oneSemester = nullptr;
		Student* oneStud = nullptr;
		StudentList* oneSList = nullptr;

	private: 
		System::Void viewCourse_Click(System::Object^ sender, System::EventArgs^ e) {
			hideAll();
			menuPanel->Show();
			viewCoursePanel->Show();
			courseListBox->Items->Clear();

			SchoolYear* curYear = schoolYearList;
			while (curYear) {
				Semester* curSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++) {
					Course* curCourse = curSemester->p_CourseList;
					for (int j = 0; j < curSemester->numOfCourse; j++) {
						courseListBox->Items->Add(convertString(curCourse->courseID));
						curCourse = curCourse->pNext;
					}
					curSemester = curSemester->p_Next_Semester;
				}
				curYear = curYear->pNext;
			}
		}

	private:
		System::Void viewOneCourse_Click(System::Object^ sender, System::EventArgs^ e) {
			if (courseListBox->SelectedIndex == -1) {
				MessageBox::Show("Please select a course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			coursePanel->Show();
			coursePanel->BringToFront();
			importCourseStud->Hide();
			viewOneCourseStudButton->Show();
			updateCourseButton->Show();
			courseID->Enabled = false;
			fillSession();

			string curID = convertToString(courseListBox->SelectedItem->ToString());

			SchoolYear* curYear = schoolYearList;
			while (curYear) {
				oneSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++) {
					oneCourse = takeCourse(oneSemester->p_CourseList, curID);
					if (oneCourse) break;
					oneSemester = oneSemester->p_Next_Semester;
				}
				if (oneCourse) break;
				curYear = curYear->pNext;
			}

			courseID->Text = convertString(oneCourse->courseID);
			courseName->Text = convertString(oneCourse->courseName);
			courseTeacher->Text = convertString(oneCourse->teacherName);
			courseMaxStud->Text = intToString(oneCourse->maxStudents);
			courseClassName->Text = convertString(oneCourse->className);
			courseCredits->Text = intToString(oneCourse->credits);
			courseDayBox->Text = convertString(oneCourse->dayOfWeek);
			String^ session = convertString(oneCourse->session);
			if (oneCourse->session == "S1") session += " (07:30)";
			if (oneCourse->session == "S2") session += " (09:30)";
			if (oneCourse->session == "S3") session += " (13:30)";
			if (oneCourse->session == "S4") session += " (15:30)";
			courseSSBox->Text = session;
		}

	private:
		System::Void viewCourseClose_Click(System::Object^ sender, System::EventArgs^ e) {
			viewCoursePanel->Hide();
		}

	private:
		System::Void updateCourseButton_Click(System::Object^ sender, System::EventArgs^ e) {

			oneCourse->courseName = convertToString(courseName->Text);
			oneCourse->teacherName = convertToString(courseTeacher->Text);
			oneCourse->className = convertToString(courseClassName->Text);
			oneCourse->maxStudents = stringToInt(courseMaxStud->Text);
			oneCourse->credits = stringToInt(courseCredits->Text);
			oneCourse->dayOfWeek = convertToString(courseDayBox->Text);
			oneCourse->session = convertToString(courseSSBox->Text->Substring(0, 2));

			MessageBox::Show("Successfully updated!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

	private:
		System::Void DeleteCourseButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (courseListBox->SelectedIndex == -1) {
				MessageBox::Show("Please select a course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (MessageBox::Show("Do you want to delete this course?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				string curID = convertToString(courseListBox->SelectedItem->ToString());

				SchoolYear* curYear = schoolYearList;
				while (curYear) {
					oneSemester = curYear->semesters;
					for (int i = 0; i < curYear->numOfSemester; i++) {
						oneCourse = takeCourse(oneSemester->p_CourseList, curID);
						if (oneCourse) break;
						oneSemester = oneSemester->p_Next_Semester;
					}
					if (oneCourse) break;
					curYear = curYear->pNext;
				}

				Course* curCourse = oneSemester->p_CourseList;
				if (curCourse == oneCourse)
					oneSemester->p_CourseList = oneCourse->pNext;
				else {
					while (curCourse->pNext != oneCourse) curCourse = curCourse->pNext;
					curCourse->pNext = oneCourse->pNext;
				}


				string filename = "Data/" + oneCourse->courseID + "StudentList.txt";
				remove(filename.c_str());
				while (oneCourse->Studs)
				{
					Student* temp = oneCourse->Studs;
					oneCourse->Studs = oneCourse->Studs->pNext;
					delete temp;
				}
				delete oneCourse;
				oneCourse = nullptr;
				oneSemester->numOfCourse--;
			}

			courseListBox->Items->RemoveAt(courseListBox->SelectedIndex);
		}

	private: 
		System::Void viewOneCourseStudButton_Click(System::Object^ sender, System::EventArgs^ e) {
			viewOneCourseStudPanel->Show();
			viewOneCourseStudPanel->BringToFront();
			courseStudListView->Items->Clear();

			Student* curStud = oneCourse->Studs;

			for (int i = 0; i < oneCourse->curStudent; i++) {
				ListViewItem^ item = gcnew ListViewItem(intToString(curStud->No));
				item->SubItems->Add(convertString(curStud->studentID));
				item->SubItems->Add(convertString(curStud->lastName + " " + curStud->firstName));
				item->SubItems->Add(convertString(curStud->gender));
				item->SubItems->Add(intToString(curStud->dateOfBirth.day) + "/" + intToString(curStud->dateOfBirth.month) + "/" + intToString(curStud->dateOfBirth.year));
				item->SubItems->Add(convertString(curStud->socialID));
				courseStudListView->Items->Add(item);
				curStud = curStud->pNext;
			}
		}
	private: 
		System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			viewOneCourseStudPanel->Hide();
		}

	private: 
		System::Void deleteOneCourseStudButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!courseStudListView->FocusedItem) {
				MessageBox::Show("Please select a student!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (MessageBox::Show("Do you want to delete this student?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				string ID = convertToString(courseStudListView->FocusedItem->SubItems[1]->Text);
				Student* curStud = oneCourse->Studs;
				Student* temp;
				if (curStud->studentID == ID) {
					oneCourse->Studs = curStud->pNext;
					temp = curStud;
					curStud = oneCourse->Studs;
				}
				else {
					while (curStud->pNext->studentID != ID) curStud = curStud->pNext;
					temp = curStud->pNext;
					curStud->pNext = temp->pNext;
					curStud = curStud->pNext;
				}
				StudentList* curList = takeStudentList(sList, temp->studentID);
				curList->course = nullptr;
				delete temp;

				oneCourse->curStudent--;
				while (curStud) {
					curStud->No--;
					curStud = curStud->pNext;
				}

				Student* cur = oneCourse->Studs;
				ofstream fout("Data/" + oneCourse->courseID + "StudentList.txt");
				for (int i = 0; i < oneCourse->curStudent; i++) {
					fout << cur->No << endl;
					fout << cur->studentID << endl;
					fout << cur->firstName << endl;
					fout << cur->lastName << endl;
					fout << cur->gender << endl;
					fout << cur->dateOfBirth.day << " " << cur->dateOfBirth.month << " " << cur->dateOfBirth.year << endl;
					fout << cur->socialID;
					if (i < oneCourse->curStudent - 1) fout << endl;
					cur = cur->pNext;
				}
				fout.close();

				viewOneCourseStudButton->PerformClick();
			}
		}
	
	private: 
		System::Void addOneCourseStudButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (addOneCourseStudID->Text == "") {
				MessageBox::Show("Please input student ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string ID = convertToString(addOneCourseStudID->Text);
			StudentList* curSList = takeStudentList(sList, ID);
			if (!curSList) {
				MessageBox::Show("Invalid student ID!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (curSList->course == oneCourse) {
				MessageBox::Show("Student already in this course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			Student* curStud = takeStudent(curSList->classroom->student, ID);
			Student* newStud = new Student;
			newStud->No = oneCourse->curStudent + 1;
			newStud->studentID = curStud->studentID;
			newStud->firstName = curStud->firstName;
			newStud->lastName = curStud->lastName;
			newStud->gender = curStud->gender;
			newStud->socialID = curStud->socialID;
			newStud->dateOfBirth.day = curStud->dateOfBirth.day;
			newStud->dateOfBirth.month = curStud->dateOfBirth.month;
			newStud->dateOfBirth.year = curStud->dateOfBirth.year;
			Course* curCourse = oneCourse;
			addCourseStudent(curCourse, newStud, curSList);
			addOneCourseStudID->Text = "";
			viewOneCourseStudButton->PerformClick();

			MessageBox::Show("Student added!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

	private: 
		System::Void addOneCourseStudID_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab)
				addOneCourseStudButton->PerformClick();
		}

	private: 
		System::Void scoreboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!importScoreboardButton->Visible) {
				importScoreboardButton->Show();
				exportScoreboardButton->Show();
				viewScoreboardButton->Show();
			}
			else {
				importScoreboardButton->Hide();
				exportScoreboardButton->Hide();
				viewScoreboardButton->Hide();
			}
		}

	private:
		void fillCourseBox() {
			courseBox->Items->Clear();
			exportCourseBox->Items->Clear();
			SchoolYear* curYear = schoolYearList;
			while (curYear)
			{
				Semester* curSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++)
				{
					Course* curCourse = curSemester->p_CourseList;
					for (int i = 0; i < curSemester->numOfCourse; i++)
					{
						courseBox->Items->Add(convertString(curCourse->courseID));
						exportCourseBox->Items->Add(convertString(curCourse->courseID));
						curCourse = curCourse->pNext;
					}
					curSemester = curSemester->p_Next_Semester;
				}
				curYear = curYear->pNext;
			}
		}

	private: 
		System::Void importScoreboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!importPanel->Visible) {
				hideAll();
				menuPanel->Show();
				importPanel->Show();
				fillCourseBox();
			}
		}


	private: 
		System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			importPanel->Hide();
		}

	private: 
		System::Void ImportButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (courseBox->Text == "") {
				MessageBox::Show("Plese select a course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			SchoolYear* curYear = schoolYearList;
			Semester* curSemester = nullptr;
			Course* curCourse = nullptr;
			string courseID = convertToString(courseBox->Text);

			while (curYear)
			{
				curSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++)
				{
					curCourse = takeCourse(curSemester->p_CourseList, courseID);
					if (curCourse) break;
					curSemester = curSemester->p_Next_Semester;
				}
				if (curCourse) break;
				curYear = curYear->pNext;
			}

			System::IO::Stream^ myStream;
			OpenFileDialog^ file = gcnew OpenFileDialog;
			file->Filter = "CSV files (*.csv)|*.csv";

			if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((myStream = file->OpenFile()) != nullptr) {
					String^ fileName = file->InitialDirectory + file->FileName;
					importScoreboard(curCourse, convertToString(fileName));
				}
				myStream->Close();
				MessageBox::Show("Scoreboard imported", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
	
	private: 
		System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			ExportScoreboardPanel->Hide();
		}
	
	private: 
		System::Void exportScoreboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!ExportScoreboardPanel->Visible) {
				hideAll();
				menuPanel->Show();
				ExportScoreboardPanel->Show();
				fillCourseBox();
			}
		}


	private: 
		System::Void exportCourseStudButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (exportCourseBox->Text == "") {
				MessageBox::Show("Plese select a course!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			SchoolYear* curYear = schoolYearList;
			Semester* curSemester = nullptr;
			Course* curCourse = nullptr;
			string courseID = convertToString(exportCourseBox->Text);

			while (curYear)
			{
				curSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++)
				{
					curCourse = takeCourse(curSemester->p_CourseList, courseID);
					if (curCourse) break;
					curSemester = curSemester->p_Next_Semester;
				}
				if (curCourse) break;
				curYear = curYear->pNext;
			}

			FolderBrowserDialog^ folder = gcnew FolderBrowserDialog;

			if (folder->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				exportStudent(curCourse, convertToString(folder->SelectedPath) + "/" + curCourse->courseID + "StudentList.csv");
				MessageBox::Show("Successfully exported student list of this course", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}

	private:
		void fillViewCourseScoreboard() {
			viewCourseScoreboardBox->Items->Clear();
			SchoolYear* curYear = schoolYearList;
			while (curYear)
			{
				Semester* curSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++)
				{
					Course* curCourse = curSemester->p_CourseList;
					for (int i = 0; i < curSemester->numOfCourse; i++)
					{
						viewCourseScoreboardBox->Items->Add(convertString(curCourse->courseID));
						curCourse = curCourse->pNext;
					}
					curSemester = curSemester->p_Next_Semester;
				}
				curYear = curYear->pNext;
			}
		}

	private:
		void fillViewClassScoreboard() {
			viewClassScoreboardBox->Items->Clear();
			Class* curClass = classList;
			while (curClass) {
				viewClassScoreboardBox->Items->Add(convertString(curClass->name));
				curClass = curClass->pNext;
			}
		}

	private: 
		System::Void viewScoreboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
			hideAll();
			menuPanel->Show();
			courseOrClassPanel->Show();
			fillViewCourseScoreboard();
			fillViewClassScoreboard();
		}

	private: 
		System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
			courseOrClassPanel->Hide();
		}

	private: 
		System::Void viewCourseScoreboardBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (viewClassScoreboardBox->Text != "")
				fillViewClassScoreboard();
		}


	private: 
		System::Void viewClassScoreboardBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (viewCourseScoreboardBox->Text != "")
				fillViewCourseScoreboard();
		}

	private:
		void newCourseScoreboardListView() {
			courseScoreboardListView->Items->Clear();

			string courseID = convertToString(viewCourseScoreboardBox->Text);
			SchoolYear* curYear = schoolYearList;
			Semester* curSemester = nullptr;
			while (curYear)
			{
				curSemester = curYear->semesters;
				for (int i = 0; i < curYear->numOfSemester; i++)
				{
					oneCourse = takeCourse(curSemester->p_CourseList, courseID);
					if (oneCourse) break;
					curSemester = curSemester->p_Next_Semester;
				}
				if (oneCourse) break;
				curYear = curYear->pNext;
			}

			Course* curCourse = oneCourse;
			readScoreboard(curCourse);
			Student* curStud = oneCourse->Studs;
			for (int i = 0; i < oneCourse->curStudent; i++) {
				ListViewItem^ item = gcnew ListViewItem(intToString(curStud->No));
				item->SubItems->Add(convertString(curStud->studentID));
				item->SubItems->Add(convertString(curStud->lastName + " " + curStud->firstName));
				if (curStud->totalMark >= 0)
					item->SubItems->Add(floatToString(curStud->totalMark));
				else 
					item->SubItems->Add("N/A");
				if (curStud->finalMark >= 0)
					item->SubItems->Add(floatToString(curStud->finalMark));
				else
					item->SubItems->Add("N/A");
				if (curStud->midtermMark >= 0)
					item->SubItems->Add(floatToString(curStud->midtermMark));
				else
					item->SubItems->Add("N/A");
				if (curStud->otherMark >= 0)
					item->SubItems->Add(floatToString(curStud->otherMark));
				else
					item->SubItems->Add("N/A");
				courseScoreboardListView->Items->Add(item);
				curStud = curStud->pNext;
			}
		}

	private:
		void fillCourseScoreboardListView() {
			courseScoreboardListView->Items->Clear();

			Course* curCourse = oneCourse;
			readScoreboard(curCourse);
			Student* curStud = oneCourse->Studs;
			for (int i = 0; i < oneCourse->curStudent; i++) {
				ListViewItem^ item = gcnew ListViewItem(intToString(curStud->No));
				item->SubItems->Add(convertString(curStud->studentID));
				item->SubItems->Add(convertString(curStud->lastName + " " + curStud->firstName));
				if (curStud->totalMark >= 0)
					item->SubItems->Add(floatToString(curStud->totalMark));
				else
					item->SubItems->Add("N/A");
				if (curStud->finalMark >= 0)
					item->SubItems->Add(floatToString(curStud->finalMark));
				else
					item->SubItems->Add("N/A");
				if (curStud->midtermMark >= 0)
					item->SubItems->Add(floatToString(curStud->midtermMark));
				else
					item->SubItems->Add("N/A");
				if (curStud->otherMark >= 0)
					item->SubItems->Add(floatToString(curStud->otherMark));
				else
					item->SubItems->Add("N/A");
				courseScoreboardListView->Items->Add(item);
				curStud = curStud->pNext;
			}
		}

	private:
		void fillClassStudentListView() {
			viewStudentPanel->Show();
			viewStudentPanel->BringToFront();
			studentListView->Items->Clear();

			Class* curClass = takeClass(classList, convertToString(viewClassScoreboardBox->Text));
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
		System::Void viewCourseOrClassButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (viewCourseScoreboardBox->Text == "" && viewClassScoreboardBox->Text == "") {
				MessageBox::Show("Plese select a course or class!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (viewCourseScoreboardBox->Text != "") {
				viewCourseScoreboardPanel->Show();
				viewCourseScoreboardPanel->BringToFront();
				newCourseScoreboardListView();
			}

			if (viewClassScoreboardBox->Text != "") {
				fillClassStudentListView();
				viewClassStudScoreboard->Show();
			}
		}

	private: 
		System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			viewCourseScoreboardPanel->Hide();
		}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		updateStudScorePanel->Hide();
		fillCourseScoreboardListView();
	}

	private: 
		System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
			if (totalMark->Text != "")
				oneStud->totalMark = stringToFloat(totalMark->Text);
			if (finalMark->Text != "")
				oneStud->finalMark = stringToFloat(finalMark->Text);
			if (MidtermMark->Text != "")
				oneStud->midtermMark = stringToFloat(MidtermMark->Text);
			if (OtherMark->Text != "")
				oneStud->otherMark = stringToFloat(OtherMark->Text);
			updateScoreboard(oneCourse);
			MessageBox::Show("Score updated", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			button14->PerformClick();
		}

	private: 
		System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!courseScoreboardListView->FocusedItem) {
				MessageBox::Show("Please select a student!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string ID = convertToString(courseScoreboardListView->FocusedItem->SubItems[1]->Text);
			oneStud = takeStudent(oneCourse->Studs, ID);
			updateStudScorePanel->Show();
			updateStudScorePanel->BringToFront();
			studScoreboardID->Text = convertString(oneStud->studentID);
			studScoreboardName->Text = convertString(oneStud->lastName + " " + oneStud->firstName);
			if (oneStud->totalMark >= 0)
				totalMark->Text = floatToString(oneStud->totalMark);
			if (oneStud->finalMark >= 0)
				finalMark->Text = floatToString(oneStud->finalMark);
			if (oneStud->midtermMark >= 0)
				MidtermMark->Text = floatToString(oneStud->midtermMark);
			if (oneStud->otherMark >= 0)
				OtherMark->Text = floatToString(oneStud->otherMark);
		}

	private: 
		System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
			oneStudScoreboardPanel->Hide();
		}

	private:
		void prepareStudentScoreboard(StudentList* curSList) {
			scoreboardSchoolYearBox->Items->Clear();
			scoreboardSemesterBox->Items->Clear();
			OneStudentScoreboardListView->Items->Clear();
			SchoolYear* curYear = schoolYearList;
			while (curYear) {
				scoreboardSchoolYearBox->Items->Add(intToString(curYear->startYear) + " - " + intToString(curYear->endYear));
				curYear = curYear->pNext;
			}

			for (int i = 1; i <= 3; i++) 
				scoreboardSemesterBox->Items->Add(intToString(i));

			float oGPA = 0;
			int sumCredits = 0;
			Course* curCourse = curSList->course;
			Student* curStud;
			while (curCourse) {
				readScoreboard(curCourse);
				curStud = takeStudent(curCourse->Studs, curSList->ID);
				ListViewItem^ item = gcnew ListViewItem(convertString(curCourse->courseID));
				item->SubItems->Add(convertString(curCourse->courseName));
				item->SubItems->Add(convertString(curCourse->className));
				if (curStud->totalMark >= 0) {
					item->SubItems->Add(floatToString(curStud->totalMark));
					oGPA += curStud->totalMark * curCourse->credits;
					sumCredits += curCourse->credits;
				}
				OneStudentScoreboardListView->Items->Add(item);
				curCourse = curCourse->pNext;
			}
			if (sumCredits > 0) {
				oGPA /= (sumCredits*1.0);
				overallGPA->Text = floatToString(oGPA);
			}
		}

	private: 
		System::Void viewClassStudScoreboard_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!studentListView->FocusedItem) {
				MessageBox::Show("Please select a student!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			string ID = convertToString(studentListView->FocusedItem->SubItems[1]->Text);
			oneSList = takeStudentList(sList, ID);
			prepareStudentScoreboard(oneSList);
			oneStudScoreboardPanel->Show();
			oneStudScoreboardPanel->BringToFront();
		}

	private:
		bool checkSchoolyearAndSemester() {
			if (scoreboardSchoolYearBox->Text == "") {
				MessageBox::Show("Please choose a school year!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			if (scoreboardSemesterBox->Text == "") {
				MessageBox::Show("Please choose a semester!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			int startYear = stringToInt(scoreboardSchoolYearBox->Text->Substring(0, 4));
			int endYear = stringToInt(scoreboardSchoolYearBox->Text->Substring(7, 4));
			SchoolYear* curYear = takeYear(schoolYearList, startYear, endYear);

			oneSemester = takeSemester(curYear->semesters, stringToInt(scoreboardSemesterBox->Text));
			if (!oneSemester) {
				MessageBox::Show("Semester doesn't exist!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

			return true;
		}

	private: 
		System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
			if(!checkSchoolyearAndSemester()) return;
			
			OneStudentScoreboardListView->Items->Clear();
			curGPA->Text = "";
			Course* curCourse = oneSList->course;

			float cGPA = 0;
			int sumCredits = 0;
			Student* curStud;
			while (curCourse) {
				if (!takeCourse(oneSemester->p_CourseList, curCourse->courseID)) {
					curCourse = curCourse->pNext;
					continue;
				}
				readScoreboard(curCourse);
				curStud = takeStudent(curCourse->Studs, oneSList->ID);
				ListViewItem^ item = gcnew ListViewItem(convertString(curCourse->courseID));
				item->SubItems->Add(convertString(curCourse->courseName));
				item->SubItems->Add(convertString(curCourse->className));
				if (curStud->totalMark >= 0) {
					item->SubItems->Add(floatToString(curStud->totalMark));
					cGPA += curStud->totalMark * curCourse->credits;
					sumCredits += curCourse->credits;
				}
				OneStudentScoreboardListView->Items->Add(item);
				curCourse = curCourse->pNext;
			}

			if (sumCredits > 0) {
				cGPA /= (sumCredits * 1.0);
				curGPA->Text = floatToString(cGPA);
			}
		}
};
}
