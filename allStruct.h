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
	string fullname = firstName + " " + lastName;
	string gender;
	Date dateOfBirth;
	string socialID;
	int totalMark, finalMark, midtermMark, otherMark;
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
	int numOfStudent = 0;
	Student* student = nullptr;
	Class* pNext;
};

struct SchoolYear
{
	int startYear;
	int endYear;
	int numOfClass = 0;
	Class* classroom = nullptr;
	Semester* semesters;
	SchoolYear* pNext = nullptr;
};

struct Account
{
	string username;
	string password;
	string firstName;
	string lastName;
	string role;
	string StudentID;
	string Gender;
	Date dateOfBirth;
	string socialID;
	Account* pNext;
};

struct StudentList
{
	string ID;
	Course* course = nullptr;
	Class* classroom = nullptr;
	StudentList* pNext = nullptr;
};