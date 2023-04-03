#pragma once
#include "allStruct.h";

void readSchoolYear(SchoolYear*& pHead);
void readClass(Class*& classList, int numOfClass, ifstream& fin);
void readStudent(Student*& studentList, int numOfStudent, ifstream& fin);
void readStudentList(StudentList* sList, SchoolYear* schoolYear);
void addSchoolYear(SchoolYear*& schoolYearList, SchoolYear*& curSchoolYear);
void addClass(Class*& classList, Class*& curClass, int& n);
void addStudent(Student*& studentList, Student* student, int& n);
void addFileStudent(Student*& studentList, int& n, string path);
void updateSchoolYear(SchoolYear* pHead);
SchoolYear* takeYear(SchoolYear* pHead, int startYear, int endYear);
Class* takeClass(Class* classList, string name);