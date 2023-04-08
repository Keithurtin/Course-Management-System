#include <iostream>
#include "schoolYear.h"
#include "allStruct.h"
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void addClassStudentList(StudentList* &sList, string ID, Class* curClass)
{
	StudentList* cur;
	if (!sList)
	{
		sList = new StudentList;
		cur = sList;
	}
	else
	{
		cur = sList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = new StudentList;
		cur = cur->pNext;
	}
	cur->ID = ID;
	cur->classroom = curClass;
	cur->pNext = nullptr;
}

void readStudentList(StudentList* &sList, Class* classList)
{
	while (classList)
	{
		int nStudent = classList->numOfStudent;
		Student* curStud = classList->student;
		for (int i = 0; i < nStudent; i++)
		{
			addClassStudentList(sList, curStud->studentID, classList);
			curStud = curStud->pNext;
		}
		classList = classList->pNext;
	}
}

void readStudent(Student*& studentList, int numOfStudent, ifstream& fin)
{
	Student* cur = studentList;

	for (int i = 0; i < numOfStudent; i++)
	{
		fin >> cur->No;
		fin.ignore();
		getline(fin, cur->studentID);
		getline(fin, cur->firstName);
		getline(fin, cur->lastName);
		getline(fin, cur->gender);
		fin >> cur->dateOfBirth.day >> cur->dateOfBirth.month >> cur->dateOfBirth.year;
		fin.ignore();
		getline(fin, cur->socialID);

		if (i < numOfStudent - 1)
		{
			cur->pNext = new Student;
			cur = cur->pNext;
		}
	}
}

void readClass(Class*& classList)
{
	ifstream fin("Data/class.txt");

	classList = new Class;
	Class* cur = classList;
	while (true)
	{
		getline(fin, cur->name);
		fin >> cur->numOfStudent;

		if (cur->numOfStudent)
		{
			cur->student = new Student;
			readStudent(cur->student, cur->numOfStudent, fin);
		}
		else fin.ignore();

		if (fin.eof()) break;
		cur->pNext = new Class;
		cur = cur->pNext;
	}

	fin.close();
}

StudentList* takeStudentList(StudentList* sList, string ID)
{
	while (sList && sList->ID != ID)
		sList = sList->pNext;
	return sList;
}

void readCourseStudent(Course*& curCourse, StudentList* &sList, string filename)
{
	ifstream fin(filename);
	curCourse->Studs = new Student;
	readStudent(curCourse->Studs, curCourse->curStudent, fin);
	Student* curStud = curCourse->Studs;
	StudentList* curSList = sList;
	while (curStud)
	{
		curSList = takeStudentList(sList, curStud->studentID);	
		curSList->course = curCourse;
		curStud = curStud->pNext;
	}
	fin.close();
}

void readCourse(Course*& courseList, int n, StudentList* &sList, ifstream &fin)
{
	fin.ignore();
	courseList = new Course;
	Course* cur = courseList;
	for (int i = 0; i < n; i++)
	{
		getline(fin, cur->courseID);
		getline(fin, cur->courseName);
		getline(fin, cur->className);
		getline(fin, cur->teacherName);
		fin >> cur->credits;
		fin >> cur->maxStudents;
		fin.ignore();
		getline(fin, cur->dayOfWeek);
		getline(fin, cur->session);
		fin >> cur->curStudent;
		fin.ignore();
		if (cur->curStudent) readCourseStudent(cur, sList, "Data/" + cur->courseID + "StudentList.txt");

		if (i < n - 1) cur->pNext = new Course;
		cur = cur->pNext;
	}
}

void readSemester(Semester*& semesterList, int n, StudentList* &sList, ifstream& fin)
{
	semesterList = new Semester;
	Semester* cur = semesterList;
	for (int i = 0; i < n; i++)
	{
		fin >> cur->semester_num;
		fin >> cur->start_date.day >> cur->start_date.month >> cur->end_date.day >> cur->end_date.month;
		fin >> cur->numOfCourse;
		if (cur->numOfCourse) readCourse(cur->p_CourseList, cur->numOfCourse, sList, fin);
		if (i < n - 1) cur->p_Next_Semester = new Semester;
		cur = cur->p_Next_Semester;
	}
}

void readSchoolYear(SchoolYear*& pHead, StudentList* sList)
{
	ifstream fin("Data/schoolYear.txt");

	pHead = new SchoolYear;
	SchoolYear* cur = pHead;

	while (true)
	{
		fin >> cur->startYear >> cur->endYear;
		fin >> cur->numOfSemester;
		if (cur->numOfSemester) readSemester(cur->semesters, cur->numOfSemester, sList, fin);
		if (fin.eof()) break;
		cur->pNext = new SchoolYear;
		cur = cur->pNext;
	}

	fin.close();
}

void addSchoolYear(SchoolYear* &schoolYearList, SchoolYear* &curSchoolYear)
{
	if (!schoolYearList) schoolYearList = curSchoolYear;
	else
	{
		SchoolYear* cur = schoolYearList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = curSchoolYear;
	}
}

void addClass(Class*& classList, Class* &curClass)
{
	if (!classList) classList = curClass;
	else
	{
		Class* cur = classList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = curClass;
	}
}

void addSemester(Semester*& semesterList, Semester* &newSemester, int& n)
{
	if (!semesterList) semesterList = newSemester;
	else
	{
		Semester* cur = semesterList;
		while (cur->p_Next_Semester) cur = cur->p_Next_Semester;
		cur->p_Next_Semester = newSemester;
	}
	n++;
}

void addCourse(Course*& courseList, Course*& newCourse, int& n)
{
	if (!courseList) courseList = newCourse;
	else
	{
		Course* cur = courseList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = newCourse;
	}
	n++;
}

void updateCourse(Course* courseList, int n, ofstream& fout)
{
	Course* cur = courseList;
	for (int i = 0; i < n; i++)
	{
		fout << endl;
		fout << cur->courseID << endl;
		fout << cur->courseName << endl;
		fout << cur->className << endl;
		fout << cur->teacherName << endl;
		fout << cur->credits << endl;
		fout << cur->maxStudents << endl;
		fout << cur->dayOfWeek << endl;
		fout << cur->session << endl;
		fout << cur->curStudent;
		cur = cur->pNext;
	}
}

void updateSemester(Semester* semesterList, int n, ofstream &fout)
{
	Semester* cur = semesterList;
	for (int i = 0; i < n; i++)
	{
		fout << endl;
		fout << cur->semester_num << endl;
		fout << cur->start_date.day << " " << cur->start_date.month << " " << cur->end_date.day << " " << cur->end_date.month << endl;
		fout << cur->numOfCourse;
		if (cur->numOfCourse) updateCourse(cur->p_CourseList, cur->numOfCourse, fout);
		cur = cur->p_Next_Semester;
	}
}

void updateSchoolYear(SchoolYear* pHead)
{
	ofstream fout("Data/schoolYear.txt");

	while (pHead)
	{
		fout << pHead->startYear << " " << pHead->endYear << endl;
		fout << pHead->numOfSemester;
		if (pHead->numOfSemester) updateSemester(pHead->semesters, pHead->numOfSemester, fout);
		if (pHead->pNext) fout << endl;
		pHead = pHead->pNext;
	}

	fout.close();
}

void updateClass(Class* curClass)
{
	ofstream fout("Data/class.txt");

	while (curClass)
	{
		fout << curClass->name << endl << curClass->numOfStudent;
		Student* curStudent = curClass->student;
		for (int i = 0; i < curClass->numOfStudent; i++)
		{
			fout << endl;
			fout << curStudent->No << endl;
			fout << curStudent->studentID << endl;
			fout << curStudent->firstName << endl;
			fout << curStudent->lastName << endl;
			fout << curStudent->gender << endl;
			fout << curStudent->dateOfBirth.day << " " << curStudent->dateOfBirth.month << " " << curStudent->dateOfBirth.year << endl;
			fout << curStudent->socialID;
			curStudent = curStudent->pNext;
		}
		if (curClass->pNext) fout << endl;
		curClass = curClass->pNext;
	}

	fout.close();
}

SchoolYear* takeYear(SchoolYear* pHead, int startYear, int endYear)
{
	while (pHead)
	{
		if (pHead->startYear == startYear && pHead->endYear == endYear)
			return pHead;
		pHead = pHead->pNext;
	}
	return pHead;
}

Class* takeClass(Class* classList, string name)
{
	while (classList && classList->name != name)
		classList = classList->pNext;
	return classList;
}

Semester* takeSemester(Semester* semesterList, int semesterID)
{
	while (semesterList && semesterList->semester_num != semesterID)
		semesterList = semesterList->p_Next_Semester;
	return semesterList;
}

Course* takeCourse(Course* courseList, string ID)
{
	while (courseList && courseList->courseID != ID)
		courseList = courseList->pNext;
	return courseList;
}

Student* takeStudent(Student* studentList, string ID)
{
	while (studentList && studentList->studentID != ID)
		studentList = studentList->pNext;
	return studentList;
}

void addStudent(Class* &classList, Student* student, StudentList* &sList)
{
	if (!classList->student) classList->student = student;
	else
	{
		Student* cur = classList->student;
		for (int i = 1; i < classList->numOfStudent; i++)
			cur = cur->pNext;
		cur->pNext = student;
	}
	addClassStudentList(sList, student->studentID, classList);
	student->pNext = nullptr;
	classList->numOfStudent++;
}

void addFileStudent(Class* &classList, StudentList* &sList, string path)
{
	ifstream fin(path);

	string line, data, dayta;
	vector<string> row, date;
	getline(fin, line);

	while (true)
	{
		if (fin.eof()) break;
		Student* cur = new Student;
		row.clear();
		date.clear();
		getline(fin, line);
		stringstream s(line);
		while (getline(s, data, ',')) row.push_back(data);
		
		cur->No = stoi(row[0]);
		cur->studentID = row[1];
		cur->firstName = row[2];
		cur->lastName = row[3];
		cur->gender = row[4];
		stringstream day(row[5]);
		while (getline(day, dayta, '/')) date.push_back(dayta);
		cur->dateOfBirth.day = stoi(date[0]);
		cur->dateOfBirth.month = stoi(date[1]);
		cur->dateOfBirth.year = stoi(date[2]);
		cur->socialID = row[6];

		addStudent(classList, cur, sList);
	}

	fin.close();
}

void addCourseStudent(Course*& curCourse, Student*& newStud, StudentList* &sList)
{
	ofstream fout("Data/" + curCourse->courseID + "StudentList.txt", ios::app);

	Student* cur;
	if (!curCourse->Studs)
	{
		curCourse->Studs = newStud;
		cur = curCourse->Studs;
	}
	else
	{
		fout << endl;
		cur = curCourse->Studs;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = newStud;
		cur = cur->pNext;
	}
	curCourse->curStudent++;
	StudentList* curSList = takeStudentList(sList, cur->studentID);
	curSList->course = curCourse;

	fout << cur->No << endl;
	fout << cur->studentID << endl;
	fout << cur->firstName << endl;
	fout << cur->lastName << endl;
	fout << cur->gender << endl;
	fout << cur->dateOfBirth.day << " " << cur->dateOfBirth.month << " " << cur->dateOfBirth.year << endl;
	fout << cur->socialID;

	fout.close();
}

void addFileCourseStudent(Course*& curCourse, StudentList* &sList, string path)
{
	ifstream fin(path);

	string line, data, dayta;
	vector<string> row, date;
	getline(fin, line);

	while (true)
	{
		if (fin.eof()) break;
		Student* cur = new Student;
		row.clear();
		date.clear();
		getline(fin, line);
		stringstream s(line);
		while (getline(s, data, ',')) row.push_back(data);

		cur->No = stoi(row[0]);
		cur->studentID = row[1];
		cur->firstName = row[2];
		cur->lastName = row[3];
		cur->gender = row[4];
		stringstream day(row[5]);
		while (getline(day, dayta, '/')) date.push_back(dayta);
		cur->dateOfBirth.day = stoi(date[0]);
		cur->dateOfBirth.month = stoi(date[1]);
		cur->dateOfBirth.year = stoi(date[2]);
		cur->socialID = row[6];

		addCourseStudent(curCourse, cur, sList);
	}

	fin.close();
}