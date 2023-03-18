#pragma once
#pragma once
#ifndef Part_2_h
#define Part_2_h
#include <iostream>
#include <iomanip>

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
    string gender;
    Date dateOfBirth;
    string socialID;
    Student* pNext;
};
struct Class
{
    string name;
    Student* student;
    Class* pNext;
    Course* course;
    Course* pNext;
};
struct SchoolYear
{
    int startYear;
    int endYear;
    Class* classroom;
};
void viewListOfCourses(SchoolYear* pHead);

#endif // !1
