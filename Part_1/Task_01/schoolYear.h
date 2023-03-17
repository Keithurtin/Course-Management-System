#include <iostream>
#include <string>

using namespace std;

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
};

struct SchoolYear
{
	int startYear;
	int endYear;
	Class* classroom;
};

void createSchoolYear(SchoolYear*& pHead);