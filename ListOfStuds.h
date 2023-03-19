#ifndef HEADER
#define HEADER

#include <iostream>
#include <fstream>

using namespace std;

struct Course {
    int courseID;
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
    string fullname;
    string gender;
    Date dateOfBirth;
    string socialID;
    Student* pNext;
};


#endif