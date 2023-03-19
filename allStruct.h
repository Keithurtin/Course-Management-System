#pragma once;

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Time {
	unsigned short day, month, year;
	unsigned short hours, minutes, secconds;

};

struct Semester {

	unsigned short semester_num;
	Time school_year, start_date, end_date;

	Course* p_CourseList = nullptr;

	Semester* p_Next_Semester = nullptr;
};

struct Course {
    string courseID;
    string courseName;
    string teacherName;
    int credits;
    int maxStudents;
    string dayOfWeek;
    string session;
    Course* pNext;
    Student* Studs;
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
	string gender;
	Date dateOfBirth;
	string socialID;
	int totalMark, finalMark, midtermMark, otherMark;
	Student* pNext;
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
