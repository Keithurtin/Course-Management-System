#include<string>
#include<iostream>
#include<sstream>
#include"allStruct.h"
#ifndef SEMESTERH
#define SEMESTERH

struct s_Semester;
struct s_Course;
struct s_Student;

struct s_Student
{
	int No;
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string fullname = firstName + " " + lastName;
	std::string gender;
	Time dateOfBirth;
	std::string socialID;
	int totalMark, finalMark, midtermMark, otherMark;
	s_Student* pNext = nullptr;
	s_Course* pCourseList = nullptr;

};


struct s_Course {
	std::string courseID;
	std::string courseName;
	std::string className;
	std::string teacherName;
	int credits;
	int maxStudents;
	std::string dayOfWeek;
	std::string session;
	s_Course* pNext = nullptr;
	s_Student* Studs = nullptr;
};


struct s_Semester {

	int No;
	int startYear, endYear;
	Time startDate, endDate;
	s_Course* pCourseList = nullptr;

	s_Semester* pNextSemester = nullptr;
};

//semester prototype
void setSemesterData(s_Semester*& pSemester);
void setSemsterData(s_Semester*& pSemester, int num, int startYear, int endYear, std::string startdate, std::string enddate);
void addSemester(s_Semester*& pSemester);
void addSemester(s_Semester*& pSemester, int num, int startYear, int endYear, std::string startdate, std::string enddate);
void getAllSemesterData(s_Semester* pSemester);
void getASemesterData(s_Semester* pSemester);
void deleteAllSemester(s_Semester*& pSemester);

//courses protype
void addCourse(s_Course*& pCourse);
void setCourseData(s_Course*& pCourse);
void getAllCourseData(s_Course* pCourse);
void getACourseData(s_Course* pCourse);
void addCourseToStudent(s_Course* pCourselist, s_Student*& student);
void removeACourseFromStudent(s_Student*& pStudent, std::string delCourseID);
void removeAStudentFromCourse(s_Course*& pCourse, std::string delStudentID);
void removeAllCourseFromStudent(s_Student*& pStudent);
void deleteAllCourse(s_Course*& pCourse);

//student prototype
void addStudentDataFromFile(std::string studentlist, s_Course* pCourse, s_Student*& pStudentlist);
void addStudentToCourse(s_Course* pCourse, s_Student*& pStudentlist);
void addStudentToCourse(s_Course* pCourse, s_Student*& pStudentlist, s_Student& nStudent);

void setStudentData(s_Student*& student);
void getAStudentData(s_Student* pStudentlist);
void removeAllStudentFromCourse(s_Course*& pCourse);
void getAllStudentData(s_Student* pStudentlist);
s_Course* gotoCourseID(s_Course* pCourseList, std::string CourseID);
s_Student* gotoStudentID(s_Student* pStudentList, std::string StudentID);
void deleteAllStudent(s_Student*& pStudentList);
void removeACourseFromSemester(s_Semester*& pSemester, std::string delCourseID);

#endif 

