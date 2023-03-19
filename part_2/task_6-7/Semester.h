#include<string>
#include<iostream>

#ifndef SEMESTER_H
#define SEMESTER_H

struct Time {
	unsigned short day, month, year;
	unsigned short hours, minutes, secconds;

};

struct Course {
	std::string id, name, class_name, teacher_name;
	unsigned short num_of_credits, num_of_students;
	std::string day_of_week, session;

	Course* p_Next_course = nullptr;
};

struct Semester {

	unsigned short semester_num;
	Time school_year, start_date, end_date;

	Course* p_CourseList = nullptr;

	Semester* p_Next_Semester = nullptr;
};

void set_Semster_Data(Semester*& p_Semester);
void add_Semester(Semester*& p_Semester);
void get_Semester_Data(Semester* p_Semester);
Semester* goto_Semester_numth(Semester* p_Semester, unsigned short semester_numth);
Semester* find_Semester_num(Semester* p_Semester, unsigned short semester_num);
void delete_All_Semester(Semester*& p_Semester);
#endif 

