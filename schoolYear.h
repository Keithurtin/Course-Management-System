#pragma once
#include "allStruct.h"

void addClassStudentList(StudentList*& sList, string ID, Class* curClass);
void readCourseStudent(Course*& curCourse, StudentList*& sList, string filename);
void readStudentList(StudentList*& sList, Class* classList);
void readStudent(Student*& studentList, int numOfStudent, ifstream& fin);
void readClass(Class*& classList);
void readCourse(Course*& courseList, int n, StudentList*& sList, ifstream& fin);
void readSemester(Semester*& semesterList, int n, StudentList*& sList, ifstream& fin);
void readSchoolYear(SchoolYear*& pHead, StudentList* sList);
void addSchoolYear(SchoolYear*& schoolYearList, SchoolYear*& curSchoolYear);
void addSemester(Semester*& semesterList, Semester*& newSemester, int& n);
void addCourse(Course*& courseList, Course*& newCourse, int& n);
void addClass(Class*& classList, Class*& curClass);
void addStudent(Student*& studentList, Student* student, int& n);
void addFileStudent(Student*& studentList, int& n, string path);
void addCourseStudent(Course*& curCourse, Student*& newStud);
void addFileCourseStudent(Course*& curCourse, string path);
void updateSchoolYear(SchoolYear* pHead);
void updateClass(Class* curClass);
SchoolYear* takeYear(SchoolYear* pHead, int startYear, int endYear);
Class* takeClass(Class* classList, string name);
Semester* takeSemester(Semester* semesterList, int semesterID);
Course* takeCourse(Course* courseList, string ID);
StudentList* takeStudentList(StudentList* sList, string ID);
Student* takeStudent(Student* studentList, string ID);