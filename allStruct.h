#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Time {
	unsigned short day, month, year;
	unsigned short hours, minutes, secconds;

};

struct Date
{
	int day;
	int month;
	int year;
};

struct Student
{
	int No;
	string studentID;
	string firstName;
	string lastName;
	string fullname = lastName + " " + firstName;
	int totalMark, finalMark, midtermMark, otherMark;
	string gender;
	Date dateOfBirth;
	string socialID;
	Student* pNext;
};

struct Course {
	string courseID;
	string courseName;
	string className;
	string teacherName;
	int credits;
	int maxStudents;
	string dayOfWeek;
	string session;
	Course* pNext = nullptr;
	Student* Studs = nullptr;
};

struct Semester {

	unsigned short semester_num;
	Time school_year, start_date, end_date;

	Course* p_CourseList = nullptr;

	Semester* p_Next_Semester = nullptr;
};

struct Class
{
	string name;
	Student* student;
	Class* pNext;
};

struct SchoolYear
{
	int startYear;
	int endYear;
	Class* classroom;
	Course* courseList;
};

struct Account
{
	string username;
	string password;
	Account* pNext;
};
