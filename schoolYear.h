#pragma once
#include "allStruct.h"

void addClassStudentList(StudentList*& sList, string ID, Class* curClass);
void readStudentList(StudentList*& sList, Class* classList);
void readStudent(Student*& studentList, int numOfStudent, ifstream& fin);
void readClass(Class*& classList);
void readSchoolYear(SchoolYear*& pHead);
void addSchoolYear(SchoolYear*& schoolYearList, SchoolYear*& curSchoolYear);
void addClass(Class*& classList, Class*& curClass);
void updateSchoolYear(SchoolYear* pHead);
void updateClass(Class* curClass);
SchoolYear* takeYear(SchoolYear* pHead, int startYear, int endYear);
Class* takeClass(Class* classList, string name);
void addStudent(Student*& studentList, Student* student, int& n);
void addFileStudent(Student*& studentList, int& n, string path);