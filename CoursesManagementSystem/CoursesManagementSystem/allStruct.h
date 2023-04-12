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
	float totalMark = -1, finalMark = -1, midtermMark = -1, otherMark = -1;
	Student* pNext = nullptr;
};

struct Course {
	string courseID;
	string courseName;
	string className;
	string teacherName;
	int credits;
	int curStudent = 0;
	int maxStudents = 50;
	string dayOfWeek;
	string session;
	Student* Studs = nullptr;
	Course* pNext = nullptr;
};

struct Semester {

	unsigned short semester_num;
	Time school_year, start_date, end_date;
	int numOfCourse = 0;
	Course* p_CourseList = nullptr;
	Semester* p_Next_Semester = nullptr;
};

struct Class
{
	string name;
	int numOfStudent = 0;
	Student* student = nullptr;
	Class* pNext = nullptr;
};

struct SchoolYear
{
	int startYear;
	int endYear;
	int numOfSemester = 0;
	Semester* semesters = nullptr;
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