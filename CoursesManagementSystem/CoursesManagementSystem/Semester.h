#include<string>
#include<iostream>
#include<sstream>
#include"allStruct.h"
#ifndef SEMESTER_H
#define SEMESTER_H

struct s_Semesters;
struct s_Courses;
struct s_Students;

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
	//s_Course* pCourseList = nullptr;

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
	Time start_date, end_date;
	s_Course* pCourseList = nullptr;

	s_Semester* pNextSemester = nullptr;
};

//semester prototype
void setSemsterData(s_Semester*& pSemester);
void setSemsterData(s_Semester*& pSemester, int num, int startYear, int endYear, std::string start_date, std::string end_date);
void addSemester(s_Semester*& pSemester);
void addSemester(s_Semester*& pSemester, int num, int startYear, int endYear, std::string start_date, std::string end_date);
void getAllSemesterData(s_Semester* pSemester);
void getASemesterData(s_Semester* pSemester);
void delete_All_Semester(s_Semester*& pSemester);
//void save_Semester_Data_To_File(s_Semester* pSemester, std::string file_name);

//courses protype
void add_Course(Course*& p_Course);
void set_Course_Data(Course*& pCourse);
void get_All_Course_Data(s_Course* pCourse);
void get_A_Course_Data(s_Course* p_Course);
void add_Course_To_Student(Course* p_Course_list, Student*& student);
void remove_A_Course_From_Student(Student*& pStudent, std::string delCourseID);
void remove_A_Student_From_Course(Course*& pCourse, std::string delStudentID);
void remove_All_Course_From_Student(Student*& pStudent);
void delete_All_Course(Course*& p_Course);
void save_Course_Data_To_File(Course* p_Course, std::string file_name);
//student prototype
void add_Student_Data_From_File(std::string student_list, Course* p_Course, Student*& p_Student_list);
void add_Student_To_Course(Course* p_Course, Student*& p_Student_list);
void add_Student_To_Course(Course* p_Course, Student*& p_Student_list, Student& nStudent);

void set_Student_Data(Student*& student);
void get_A_Student_Data(Student* p_Student_list);
void remove_All_Student_From_Course(Course*& pCourse);
void get_All_Student_Data(Student* p_Student_list);
Course* goto_Course_ID(Course* pCourseList, std::string CourseID);
Student* goto_Student_ID(Student* pStudentList, std::string StudentID);
//void save_Student_Data_To_File(Student* p_Student_list, std::string file_name);
void delete_All_Student(Student*& p_Student_List);
void remove_A_Course_From_Semester(Semester*& pSemester, std::string delCourseID);

#endif 

