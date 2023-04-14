#include<iostream>
#include<string>
#include"Semester.h"
#include<fstream>
#include<sstream>
//#include"allStruct.h"

//semester function//////////////////////////////////////////////
void addSemester(s_Semester*& pSemester)
{

	if (pSemester == nullptr)
	{
		s_Semester* newSemester = new s_Semester;
		newSemester->pNextSemester = nullptr;
		pSemester = newSemester;
		setSemesterData(newSemester);
		return;
	}


	s_Semester* pCurSemester = pSemester;
	while (pCurSemester->pNextSemester != nullptr)
		pCurSemester = pCurSemester->pNextSemester;

	s_Semester* newSemester = new s_Semester;
	newSemester->pNextSemester = nullptr;

	pCurSemester->pNextSemester = newSemester;
	
	setSemesterData(newSemester);

}
void addSemester(s_Semester*& pSemester, int num, int startYear, int endYear, std::string start_date, std::string end_date)
{
	if (pSemester == nullptr)
	{
		s_Semester* new_Semester = new s_Semester;
		new_Semester->pNextSemester = nullptr;
		pSemester = new_Semester;
		setSemsterData(pSemester, num, startYear, endYear, start_date, end_date);
		return;
	}


	s_Semester* p_Cur_Semester = pSemester;
	while (p_Cur_Semester->pNextSemester != nullptr)
		p_Cur_Semester = p_Cur_Semester->pNextSemester;

	s_Semester* new_Semester = new s_Semester;
	new_Semester->pNextSemester = nullptr;

	p_Cur_Semester->pNextSemester = new_Semester;

	setSemsterData(new_Semester, num, startYear, endYear, start_date, end_date);
}
void setSemesterData(s_Semester*& pSemester)
{
	if(pSemester == nullptr)
		return;
	
	std::cout << "Semester no: ";
	std::cin >> pSemester->No;
	std::cout << "\n";

	std::cout << "School year: \n";
	std::cout << "Start year: ";
	std::cin >> pSemester->startYear;
	std::cout << "\n";

	std::cout << "End year: ";
	std::cin >> pSemester->endYear;
	std::cout << "\n";
	std::cin.ignore();
	std::cout << "Date (dd/mm/yyyy): \n";

	std::cout << "Start date: ";
	std::string startDate;
	getline(std::cin, startDate);

	std::stringstream sDate(startDate);
	std::string token;

	getline(sDate, token, '/');
	pSemester->startDate.day = stoi(token);

	getline(sDate, token, '/');
	pSemester->startDate.month = stoi(token);

	getline(sDate, token);
	pSemester->startDate.year = stoi(token);
	std::cout << "\n";
	

	std::cout << "End date: ";
	std::string endDate;
	getline(std::cin, endDate);
	std::stringstream eDate(endDate);
	getline(eDate, token, '/');
	
	pSemester->endDate.day = stoi(token);

	getline(eDate, token, '/');
	pSemester->endDate.month = stoi(token);

	getline(eDate, token);
	pSemester->endDate.year = stoi(token);
	std::cout << endDate;
	std::cout << "\n";
}
void setSemsterData(s_Semester*& pSemester, int num, int startYear, int endYear, std::string start_date, std::string end_date)
{
	pSemester->No = num;
	pSemester->startYear = startYear;
	pSemester->endYear = endYear;

	std::stringstream sDate(start_date);
	std::string token;
	getline(sDate, token, '/');
	pSemester->startDate.day = std::stoi(token);
	getline(sDate, token, '/');
	pSemester->startDate.month = std::stoi(token);
	getline(sDate, token);
	pSemester->startDate.year= std::stoi(token);

	std::stringstream eDate(end_date);

	getline(eDate, token, '/');
	pSemester->endDate.day = std::stoi(token);
	getline(eDate, token, '/');
	pSemester->endDate.month = std::stoi(token);
	getline(eDate, token);
	pSemester->endDate.year = std::stoi(token);
}
void getASemesterData(s_Semester* pSemester)
{
	if(pSemester == nullptr)		return;
	std::cout << "Semester No: " << pSemester->No;
	std::cout << " \n";
	std::cout << "School year: \n";
	std::cout << "Start year: ";
	std::cout << pSemester->startYear;
	std::cout << "\n";
	std::cout << "End year: ";
	std::cout << pSemester->endYear;
	std::cout << "\n";
	std::cout << "Date (dd/mm/yyyy): \n";
	std::cout << "Start date: " << pSemester->startDate.day << "/" << pSemester->startDate.month << "/" << pSemester->startDate.year;
	std::cout << " \n";
	std::cout << "End date: " << pSemester->endDate.day << "/" << pSemester->endDate.month << "/" << pSemester->endDate.year;
	std::cout << " \n";
	std::cout << "_________________________________\n";
	//getAllCourse_Data(pSemester->pCourseList);
}
void getAllSemesterData(s_Semester* pSemester)
{
	if(pSemester == nullptr)		return;
	while (pSemester != nullptr)
	{
		getASemesterData(pSemester);
		pSemester = pSemester->pNextSemester;

	}
}

s_Semester* gotoSemesterNo(s_Semester* pSemester, int semesterNo)
{
	if (pSemester == nullptr) return nullptr;

	while (pSemester != nullptr && pSemester->No != semesterNo)
	{
		pSemester = pSemester->pNextSemester;
	}

	if (pSemester == nullptr) return nullptr;

	return pSemester;
}
void deleteAllSemester(s_Semester*& pSemester)
{
	while (pSemester != nullptr)
	{
		s_Semester* phead = pSemester->pNextSemester;
		delete pSemester;
		pSemester = phead;
	}
}

//course funtion////////////////////////////////////////////////
void addCourse(s_Course*& pCourse)
{
	if (pCourse == nullptr)
	{
		s_Course* new_Course = new s_Course;
		new_Course->pNext = nullptr;
		pCourse = new_Course;

		setCourseData(new_Course);

		return;
	}


	s_Course* cur = pCourse;
	while (cur->pNext != nullptr)
	{
		cur = cur->pNext;
	}

	s_Course* new_Course = new s_Course;
	new_Course->pNext = nullptr;

	cur->pNext = new_Course;
	setCourseData(new_Course);

}
void setCourseData(s_Course*& pCourse)
{
	if(pCourse == nullptr) return;
	std::cout << "Course id: ";
	getline(std::cin, pCourse->courseID);
	std::cout << "\n";

	std::cout << "Course name: ";
	getline(std::cin, pCourse->courseName);
	std::cout << "\n";

	std::cout << "Class name: ";
	getline(std::cin, pCourse->className);
	std::cout << "\n";

	std::cout << "Teacher name: ";
	getline(std::cin, pCourse->teacherName);
	std::cout << "\n";

	std::cout << "Number of credit(s): ";
	std::cin >> pCourse->credits;
	std::cout << "\n";

	std::cout << "Day of week: \n \
(MON / TUE / WED / THU / FRI / SAT): ";
	std::cin.ignore();
	getline(std::cin, pCourse->dayOfWeek);
	std::cout << "\n";

	std::cout << "Session: \n \
(S1(07:30), S2(09:30), S3(13:30), S4(15:30)): ";
	getline(std::cin, pCourse->session);

	std::cout << "\n";
}
void getACourseData(s_Course* pCourse)
{
	if(pCourse == nullptr) return;
	std::cout << "\nCourse id: " << pCourse->courseID;
	std::cout << "\n";
	std::cout << "Course name: " << pCourse->courseName;
	std::cout << "\n";
	std::cout << "Class name: " << pCourse->className;
	std::cout << "\n";
	std::cout << "Teacher name: " << pCourse->teacherName;
	std::cout << "\n";
	std::cout << "Number of credit(s): " << pCourse->credits;
	std::cout << "\n";
	std::cout << "Day of week: " << pCourse->dayOfWeek;
	std::cout << "\n";
	std::cout << "Session: " << pCourse->session;
	std::cout << "\n_________________________________\n";
}
void getAllCourseData(s_Course* pCourse)
{
	if (pCourse == nullptr)	return;

	while (pCourse != nullptr)
	{
		getACourseData(pCourse);
		pCourse = pCourse->pNext;
	}
}

void deleteAllCourse(s_Course*& pCourse)
{
	while (pCourse != nullptr)
	{
		s_Course* phead = pCourse->pNext;
		delete pCourse;
		pCourse = phead;
	}
}
//student function////////////////////////////////////////////
void addStudentDataFromFile(std::string studentList, s_Course* pCourse, s_Student*& pStudentList)
{

	std::ifstream In_Student_List;
	In_Student_List.open(studentList);
	if (!In_Student_List.is_open())
	{
		std::cout << "Unable to open " << studentList << " file \n";
		return;
	}

	unsigned int number_of_students = 0;

	while (!In_Student_List.eof())
	{
		std::string s = "";
		std::getline(In_Student_List, s);
		number_of_students++;
	}
	In_Student_List.close();

	number_of_students -= 1;
	s_Student* student_number = new s_Student[number_of_students];

	In_Student_List.open(studentList);
	if (!In_Student_List.is_open())
	{
		std::cout << "Unable to open " << studentList << " file \n";
	}

	unsigned int j = 0;
	std::string s = "";
	std::getline(In_Student_List, s);
	while (!In_Student_List.eof())
	{

		getline(In_Student_List, s, ',');
		student_number[j].No = stoi(s);
		s = "";
		getline(In_Student_List, student_number[j].studentID, ',');
		getline(In_Student_List, student_number[j].firstName, ',');
		getline(In_Student_List, student_number[j].lastName, ',');
		getline(In_Student_List, student_number[j].gender, ',');
		getline(In_Student_List, s, '/');
		student_number[j].dateOfBirth.day = stoi(s);
		s = "";
		getline(In_Student_List, s, '/');
		student_number[j].dateOfBirth.month = stoi(s);
		s = "";
		getline(In_Student_List, s, ',');
		student_number[j].dateOfBirth.year = stoi(s);
		s = "";
		getline(In_Student_List, student_number[j].socialID);
		student_number[j].pNext = nullptr;

		s_Student* cur_Student = &student_number[j];
		addCourseToStudent(pCourse, cur_Student);
		addStudentToCourse(pCourse, pStudentList, student_number[j]);
		j++;
	}


	delete[] student_number;


	In_Student_List.close();

}
void addCourseToStudent(s_Course* pCourseList, s_Student*& student)
{
	if (pCourseList == nullptr) return;

	s_Course* nCourse = new s_Course;
	nCourse->pNext = nullptr;
	*(nCourse) = *(pCourseList);

	if (student->pCourseList == nullptr)
	{
		student->pCourseList = nCourse;
		return;
	}

	s_Course* cur = student->pCourseList;
	while (cur->pNext != nullptr)
		cur = cur->pNext;
	cur->pNext= nCourse;
}
void addStudentToCourse(s_Course* pCourse, s_Student*& pStudentList)
{
	if (pCourse == nullptr) return;
	if (pStudentList == nullptr)
	{
		s_Student* new_Student = new s_Student;
		new_Student->pNext = nullptr;
		setStudentData(new_Student);
		addCourseToStudent(pCourse, new_Student);
		pStudentList = new_Student;
		return;
	}

	s_Student* cur = pStudentList;
	while (cur->pNext != nullptr)
	{
		cur = cur->pNext;
	}

	s_Student* new_Student = new s_Student;
	new_Student->pNext = nullptr;
	setStudentData(new_Student);
	addCourseToStudent(pCourse, new_Student);
	cur->pNext = new_Student;

}
void addStudentToCourse(s_Course* pCourse, s_Student*& pStudentList, s_Student& newStudent)
{
	if (pStudentList == nullptr)
	{
		s_Student* student = new s_Student;
		*(student) = *(&newStudent);
		student->pNext = nullptr;
		pStudentList = student;
		return;
	}

	s_Student* curStudent = pStudentList;
	while (curStudent->pNext != nullptr)
	{
		curStudent = curStudent->pNext;
	}

	s_Student* student = new s_Student;
	*(student) = *(&newStudent);
	student->pNext = nullptr;
	curStudent->pNext = student;
}
void setStudentData(s_Student*& pStudentList)
{
	if(pStudentList == nullptr) return;
	std::cout << " Student No: ";
	std::cin >> pStudentList->No;
	std::cout << "\n";
	std::cout << " Student ID: ";
	std::cin.ignore();
	getline(std::cin, pStudentList->studentID);
	std::cout << "\n";
	std::cout << "First name: ";
	getline(std::cin, pStudentList->firstName);
	std::cout << "\n";
	std::cout << "Last name: ";
	getline(std::cin, pStudentList->lastName);
	std::cout << "\n";
	std::cout << "Gender: ";
	getline(std::cin, pStudentList->gender);
	std::cout << "\n";
	std::cout << "Date of birth \n \
(dd/mm/yyyy): ";
	std::string date;
	getline(std::cin, date);
	std::stringstream dateOfBirth(date);
	std::string token;
	getline(dateOfBirth, token, '/');
	pStudentList->dateOfBirth.day = stoi(token);

	getline(dateOfBirth, token, '/');
	pStudentList->dateOfBirth.month = stoi(token);

	getline(dateOfBirth, token, '/');
	pStudentList->dateOfBirth.year = stoi(token);

	std::cout << "\n";
	std::cout << "Social ID: ";
	getline(std::cin, pStudentList->socialID);
	std::cout << "\n";
}
void getAStudentData(s_Student* pStudentList)
{
	if(pStudentList == nullptr) return;
	std::cout << "No: " << pStudentList->No << "\n";
	std::cout << "Student ID: " << pStudentList->studentID << "\n";
	std::cout << "First name: " << pStudentList->firstName << "\n";
	std::cout << "Last name: " << pStudentList->lastName << "\n";
	std::cout << "Gender: " << pStudentList->gender << "\n";
	std::cout << "Date of birth: " << pStudentList->dateOfBirth.day;
	std::cout << "/" << pStudentList->dateOfBirth.month;
	std::cout << "/" << pStudentList->dateOfBirth.year << "\n";
	std::cout << "Social ID: " << pStudentList->socialID << "\n";
	if (pStudentList->pCourseList != nullptr)
	{
		std::cout << "all course of student: \n";
		getAllCourseData(pStudentList->pCourseList);
	}
}
void getAllStudentData(s_Student* pStudentList)
{
	if(pStudentList == nullptr) return;
	while (pStudentList != nullptr)
	{
		getAStudentData(pStudentList);
		pStudentList = pStudentList->pNext;
	}

}
void deleteAllStudent(s_Student*& pStudentList)
{
	if(pStudentList == nullptr) return;
	s_Student* cur = pStudentList;
	while (pStudentList != nullptr)
	{
		cur = pStudentList;
		pStudentList = pStudentList->pNext;
		delete cur;
	}
}
void removeACourseFromStudent(s_Student*& pStudent, std::string delCourseID)
{
	if (pStudent == nullptr) return;
	s_Student* cStudent = pStudent;
	while (cStudent && cStudent->pCourseList && cStudent->pCourseList->courseID != delCourseID)
	{
		cStudent = cStudent->pNext;
	}
	if (!cStudent || !cStudent->pCourseList) return;
	s_Course* delCourse = cStudent->pCourseList;
	cStudent->pCourseList = delCourse->pNext;
	delete delCourse;
}
void removeAStudentFromCourse(s_Course*& pCourse, std::string delStudentID)
{
	if (pCourse == nullptr || pCourse->Studs == nullptr ) return;
	s_Student* cStudent = pCourse->Studs;
	while (cStudent->pNext && cStudent->pNext->studentID != delStudentID)
	{
		cStudent = cStudent->pNext;
	}
	if (!cStudent->pNext) return;
	s_Student* delStudent = cStudent->pNext;
	cStudent->pNext = delStudent->pNext;
	removeACourseFromStudent(delStudent, pCourse->courseID);
	delete delStudent;
}
void removeAllCourseFromStudent(s_Student*& pStudent)
{
	if (pStudent->pCourseList == nullptr ) return;


	while (pStudent->pCourseList) 
	{
		s_Course* cCourse = pStudent->pCourseList;
		pStudent->pCourseList = pStudent->pCourseList->pNext;
		delete cCourse;
	}

}
void removeAllStudentFromCourse(s_Course*& pCourse)
{
	if (pCourse == nullptr || pCourse->Studs == nullptr ) return;

	while (pCourse->Studs) 
	{
		s_Student* cStudent = pCourse->Studs;
		pCourse->Studs = pCourse->Studs->pNext;
		removeACourseFromStudent(cStudent, pCourse->courseID);
		delete cStudent;
	}


}
void deleteCourse(s_Semester*& pSemester, std::string delCourseID)
{
	if (pSemester == nullptr ) return;

	s_Semester* cSemester = pSemester;

	while (cSemester->pCourseList && cSemester->pCourseList->pNext->courseID != delCourseID)
	{
		cSemester->pCourseList = cSemester->pCourseList->pNext;
	}
	if (!cSemester->pCourseList) return;
	s_Course* delCourse = cSemester->pCourseList->pNext;
	cSemester->pCourseList->pNext = delCourse->pNext;
	delete delCourse;
}
s_Course* gotoCourseID(s_Course* pCourseList, std::string CourseID)
{
	if (pCourseList == nullptr) return nullptr;
	while (pCourseList && pCourseList->courseID != CourseID)
	{
		pCourseList = pCourseList->pNext;
	}

	return pCourseList;
}
s_Student* gotoStudentID(s_Student* pStudentList, std::string StudentID)
{
	if (pStudentList == nullptr) return nullptr;
	while (pStudentList && pStudentList->studentID != StudentID)
	{
		pStudentList = pStudentList->pNext;
	}
	return pStudentList;
}
void removeACourseFromSemester(s_Semester*& pSemester, std::string delCourseID)
{
	if (pSemester == nullptr) return;
	s_Course* cCourse = pSemester->pCourseList;
	while (cCourse && cCourse->pNext && cCourse->pNext->courseID != delCourseID)
	{
		cCourse = cCourse->pNext;
	}
	if (!cCourse || !cCourse->pNext) return;
	s_Course* delCourse = cCourse->pNext;
	cCourse->pNext = delCourse->pNext;
	removeAllStudentFromCourse(delCourse);
	delete delCourse;
}
