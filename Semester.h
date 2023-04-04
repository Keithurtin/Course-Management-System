#include<string>
#include<iostream>

#ifndef SEMESTER_H
#define SEMESTER_H

struct Semester;
struct Course;
struct Student;

struct Time {
	unsigned short day, month, year;
	unsigned short hours, minutes, secconds;

};

struct Student
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
	Student* pNext;
	Course* pCourseList = nullptr;

};

struct Class
{
	std::string name;
	Student* student;
	Class* pNext;
};

struct SchoolYear
{
	int startYear;
	int endYear;
	Class* classroom;
};



struct Course {
	std::string courseID;
	std::string courseName;
	std::string className;
	std::string teacherName;
	int credits;
	int maxStudents;
	std::string dayOfWeek;
	std::string session;
	Course* pNext = nullptr;
	Student* Studs = nullptr;
};


struct Semester {

	unsigned short semester_num;
	int startYear, endYear;
	Time start_date, end_date;
	Course* p_CourseList = nullptr;

	Semester* p_Next_Semester = nullptr;
};

//semester prototype
void set_Semster_Data(Semester*& p_Semester);
void set_Semster_Data(Semester*& p_Semester, unsigned short num, int startYear, int endYear, std::string start_date, std::string end_date);
void add_Semester(Semester*& p_Semester);
void add_Semester(Semester*& p_Semester, unsigned short num, int startYear, int endYear, std::string start_date, std::string end_date);
void get_Semester_Data(Semester* p_Semester);
void delete_All_Semester(Semester*& p_Semester);

//courses protype
void add_Course(Course*& p_Course);
void set_Course_Data(Course*& p_Course);
void get_Course_Data(Course* p_Course);
void add_Course_To_Student(Course* p_Course_list, Student*& student);
void remove_Course_From_Student(Course*& pCourse, Student*& pStudent);
void delete_All_Course(Course*& p_Course);

//student prototype
void add_Student_Data_From_File(std::string student_list, Course* p_Course, Student*& p_Student_list);
void add_Student_To_Course(Course* p_Course, Student*& p_Student_list);
void add_Student_To_Course(Course* p_Course, Student*& p_Student_list, Student& nStudent);

void set_Student_Data(Student*& student);
void get_Student_Data(Student* p_Student_list);
void remove_Student_From_Course(Course*& pCourse, Student*& pStudent);
void delete_All_Student(Student*& p_Student_List);

#endif 

