#include<string>
#include<iostream>
#include<sstream>
#include"allStruct.h"
#ifndef SEMESTER_H
#define SEMESTER_H


//semester prototype
void set_Semster_Data(Semester*& p_Semester);
void set_Semster_Data(Semester*& p_Semester, unsigned short num, int startYear, int endYear, std::string start_date, std::string end_date);
void add_Semester(Semester*& p_Semester);
void add_Semester(Semester*& p_Semester, unsigned short num, int startYear, int endYear, std::string start_date, std::string end_date);
void get_All_Semester_Data(Semester* p_Semester);
void get_A_Semester_Data(Semester* p_Semester);
void delete_All_Semester(Semester*& p_Semester);
void save_Semester_Data_To_File(Semester* p_Semester, std::string file_name);

//courses protype
void add_Course(Course*& p_Course);
void set_Course_Data(Course*& p_Course);
void get_All_Course_Data(Course* p_Course);
void get_A_Course_Data(Course* p_Course);
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

