#include<iostream>
#include<string>
#include"Semester.h"

//semester function//////////////////////////////////////////////
void add_Semester(Semester*& p_Semester)
{

	if (p_Semester == nullptr)
	{
		Semester* new_Semester = new Semester;
		new_Semester->p_Next_Semester = nullptr;
		p_Semester = new_Semester;
		set_Semster_Data(new_Semester);
		return;
	}


	Semester* p_Cur_Semester = p_Semester;
	while (p_Cur_Semester->p_Next_Semester != nullptr)
		p_Cur_Semester = p_Cur_Semester->p_Next_Semester;

	Semester* new_Semester = new Semester;
	new_Semester->p_Next_Semester = nullptr;

	p_Cur_Semester->p_Next_Semester = new_Semester;

	set_Semster_Data(new_Semester);

}
void add_Semester(Semester*& p_Semester, unsigned short num, unsigned short school_year, std::string start_date, std::string end_date)
{
	if (p_Semester == nullptr)
	{
		Semester* new_Semester = new Semester;
		new_Semester->p_Next_Semester = nullptr;
		p_Semester = new_Semester;
		set_Semster_Data(p_Semester, num, school_year, start_date, end_date);
		return;
	}


	Semester* p_Cur_Semester = p_Semester;
	while (p_Cur_Semester->p_Next_Semester != nullptr)
		p_Cur_Semester = p_Cur_Semester->p_Next_Semester;

	Semester* new_Semester = new Semester;
	new_Semester->p_Next_Semester = nullptr;

	p_Cur_Semester->p_Next_Semester = new_Semester;

	set_Semster_Data(new_Semester, num, school_year, start_date, end_date);
}
void set_Semster_Data(Semester*& p_Semester)
{
	std::cout << "Semester number: ";
	std::cin >> p_Semester->semester_num;
	std::cout << "\n";

	std::cout << "School year: ";
	std::cin >> p_Semester->school_year.year;
	std::cout << "\n";

	std::cout << "Date (dd mm yyyy): ";
	std::cout << "\n";

	std::cout << "Start date: ";
	std::cin >> p_Semester->start_date.day >> p_Semester->start_date.month >> p_Semester->start_date.year;
	std::cout << "\n";

	std::cout << "End date: ";
	std::cin >> p_Semester->end_date.day >> p_Semester->end_date.month >> p_Semester->end_date.year;
	std::cout << "\n";
}
void set_Semster_Data(Semester*& p_Semester, unsigned short num, unsigned short school_year, std::string start_date, std::string end_date)
{
	p_Semester->semester_num = num;
	p_Semester->school_year.year = school_year;

	//split date
	unsigned short* dateArr = new unsigned short[6];
	std::string s = "";
	unsigned int i = 0;
	unsigned short idx = 0;
	//start date
	while (start_date[i] != '\0')
	{
		if (start_date[i] == ' ')
		{
			dateArr[idx] = stoi(s);
			s = "";
			idx++;
		}
		else {
			s = s + start_date[i];
		}
		i++;
	}
	dateArr[idx] = stoi(s);
	idx++;
	//end date
	i = 0;
	s = "";
	while (end_date[i] != '\0')
	{
		if (end_date[i] == ' ')
		{
			dateArr[idx] = stoi(s);
			s = "";
			idx++;
		}
		else {
			s = s + end_date[i];
		}
		i++;
	}
	dateArr[idx] = stoi(s);


	p_Semester->start_date.day = dateArr[0];

	p_Semester->start_date.month = dateArr[1];

	p_Semester->start_date.year = dateArr[2];

	p_Semester->end_date.day = dateArr[3];

	p_Semester->end_date.month = dateArr[4];

	p_Semester->end_date.year = dateArr[5];


	delete[] dateArr;


}
void get_Semester_Data(Semester* p_Semester)
{

	while (p_Semester != nullptr)
	{
		std::cout << "Semester: " << p_Semester->semester_num;
		std::cout << " \n";
		std::cout << "School year: " << p_Semester->school_year.year;
		std::cout << " \n";
		std::cout << "Date (dd mm yyyy): \n";
		std::cout << "Start date: " << p_Semester->start_date.day << " " << p_Semester->start_date.month << " " << p_Semester->start_date.year;
		std::cout << " \n";
		std::cout << "End date: " << p_Semester->end_date.day << " " << p_Semester->end_date.month << " " << p_Semester->end_date.year;
		std::cout << " \n";
		get_Course_Data(p_Semester->p_CourseList);
		p_Semester = p_Semester->p_Next_Semester;

	}
}
Semester* goto_Semester_numth(Semester* p_Semester, unsigned short semester_numth)
{
	if (p_Semester == nullptr) return nullptr;
	for (unsigned short cur_Semester = 1; cur_Semester < semester_numth; cur_Semester++)
		p_Semester = p_Semester->p_Next_Semester;
	return p_Semester;
}
Semester* find_Semester_num(Semester* p_Semester, unsigned short semester_num)
{
	if (p_Semester == nullptr) return nullptr;

	while (p_Semester != nullptr && p_Semester->semester_num != semester_num)
	{
		p_Semester = p_Semester->p_Next_Semester;
	}

	if (p_Semester == nullptr) return nullptr;

	return p_Semester;
}
void delete_All_Semester(Semester*& p_Semester)
{
	while (p_Semester != nullptr)
	{
		Semester* phead = p_Semester->p_Next_Semester;
		delete p_Semester;
		p_Semester = phead;
	}
}

//course funtion////////////////////////////////////////////////

void add_Course(Course*& p_Course)
{
	if (p_Course == nullptr)
	{
		Course* new_Course = new Course;
		new_Course->p_Next_course = nullptr;
		p_Course = new_Course;

		set_Course_Data(new_Course);

		return;
	}


	Course* cur = p_Course;
	while (cur->p_Next_course != nullptr)
	{
		cur = cur->p_Next_course;
	}

	Course* new_Course = new Course;
	new_Course->p_Next_course = nullptr;

	cur->p_Next_course = new_Course;
	set_Course_Data(new_Course);

}
void set_Course_Data(Course*& p_Course)
{
	std::cout << "Course id: ";
	getline(std::cin, p_Course->id);
	std::cout << "\n";

	std::cout << "Course name: ";
	getline(std::cin, p_Course->name);
	std::cout << "\n";

	std::cout << "Class name: ";
	getline(std::cin, p_Course->class_name);
	std::cout << "\n";

	std::cout << "Teacher name: ";
	getline(std::cin, p_Course->teacher_name);
	std::cout << "\n";

	std::cout << "Number of credit(s): ";
	std::cin >> p_Course->num_of_credits;
	std::cout << "\n";

	std::cout << "Day of week: \n \
(MON / TUE / WED / THU / FRI / SAT): ";
	std::cin.ignore();
	getline(std::cin, p_Course->day_of_week);
	std::cout << "\n";

	std::cout << "Session: \n \
(S1(07:30), S2(09:30), S3(13:30), S4(15:30)): ";
	getline(std::cin, p_Course->session);

	std::cout << "\n";
}
void get_Course_Data(Course* p_Course)
{
	while (p_Course != nullptr)
	{
		std::cout << "Course id: " << p_Course->id;
		std::cout << "\n";

		std::cout << "Course name: " << p_Course->name;
		std::cout << "\n";

		std::cout << "Class name: " << p_Course->class_name;
		std::cout << "\n";

		std::cout << "Teacher name: " << p_Course->teacher_name;
		std::cout << "\n";

		std::cout << "Number of credit(s): " << p_Course->num_of_credits;
		std::cout << "\n";

		std::cout << "Day of week: " << p_Course->day_of_week;
		std::cout << "\n";

		std::cout << "Session: " << p_Course->session;
		std::cout << "\n";
		p_Course = p_Course->p_Next_course;

	}
}
void delete_All_Course(Course*& p_Course)
{
	while (p_Course != nullptr)
	{
		Course* phead = p_Course->p_Next_course;
		delete p_Course;
		p_Course = phead;
	}
}
Course* goto_Course_numth(Course* p_Course_List, unsigned int course_idx)
{
	if (p_Course_List == nullptr) return nullptr;
	for (unsigned int cur_course = 1; cur_course < course_idx; cur_course++)
		p_Course_List = p_Course_List->p_Next_course;
	return p_Course_List;

}

//student function////////////////////////////////////////////
void add_Student_Data_From_File(std::string student_list, Course* p_Course, Student*& p_Student_list)
{

	std::ifstream In_Student_List;
	In_Student_List.open(student_list);
	if (!In_Student_List.is_open())
	{
		std::cout << "Unable to open " << student_list << " file \n";
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
	Student* student_number = new Student[number_of_students];

	In_Student_List.open(student_list);
	if (!In_Student_List.is_open())
	{
		std::cout << "Unable to open " << student_list << " file \n";
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
		getline(In_Student_List, s, ' ');
		student_number[j].dateOfBirth.day = stoi(s);
		s = "";
		getline(In_Student_List, s, ' ');
		student_number[j].dateOfBirth.month = stoi(s);
		s = "";
		getline(In_Student_List, s, ',');
		student_number[j].dateOfBirth.year = stoi(s);
		s = "";
		getline(In_Student_List, student_number[j].socialID);
		student_number[j].pNext = nullptr;

		Student* cur_Student = &student_number[j];
		add_Course_To_Student(p_Course, cur_Student);
		add_Student_To_Course(p_Course, p_Student_list, student_number[j]);
		j++;
	}


	delete[] student_number;


	In_Student_List.close();

}

void add_Student_To_Course(Course* p_Course, Student*& p_Student_list)
{
	if (p_Course == nullptr) return;
	if (p_Student_list == nullptr)
	{
		Student* new_Student = new Student;
		new_Student->pNext = nullptr;
		set_Student_Data(new_Student);
		add_Course_To_Student(p_Course, new_Student);
		p_Student_list = new_Student;
		return;
	}

	Student* cur = p_Student_list;
	while (cur->pNext != nullptr)
	{
		cur = cur->pNext;
	}

	Student* new_Student = new Student;
	new_Student->pNext = nullptr;
	set_Student_Data(new_Student);
	add_Course_To_Student(p_Course, new_Student);
	cur->pNext = new_Student;

}
void add_Student_To_Course(Course* pCourse, Student*& p_Student_list, Student& new_Student)
{
	if (p_Student_list == nullptr)
	{
		Student* student = new Student;
		*(student) = *(&new_Student);
		student->pNext = nullptr;
		p_Student_list = student;
		return;
	}

	Student* cur_Student = p_Student_list;
	while (cur_Student->pNext != nullptr)
	{
		cur_Student = cur_Student->pNext;
	}

	Student* student = new Student;
	*(student) = *(&new_Student);
	student->pNext = nullptr;
	cur_Student->pNext = student;
}

void set_Student_Data(Student*& p_Student_list)
{
	std::cout << " Student No: ";
	std::cin >> p_Student_list->No;
	std::cout << "\n";
	std::cout << " Student ID: ";
	std::cin.ignore();
	getline(std::cin, p_Student_list->studentID);
	std::cout << "\n";
	std::cout << "First name: ";
	getline(std::cin, p_Student_list->firstName);
	std::cout << "\n";
	std::cout << "Last name: ";
	getline(std::cin, p_Student_list->lastName);
	std::cout << "\n";
	std::cout << "Gender: ";
	getline(std::cin, p_Student_list->gender);
	std::cout << "\n";
	std::cout << "Date of birth \n \
(dd mm yyyy): ";
	std::cin >> p_Student_list->dateOfBirth.day;
	std::cin >> p_Student_list->dateOfBirth.month;
	std::cin >> p_Student_list->dateOfBirth.year;
	std::cout << "\n";
	std::cin.ignore();
	std::cout << "Social ID: ";
	getline(std::cin, p_Student_list->socialID);
	std::cout << "\n";
}

void get_Student_Data(Student* p_Student_list)
{
	while (p_Student_list != nullptr)
	{
		std::cout << "No: " << p_Student_list->No << "\n";
		std::cout << "Student ID: " << p_Student_list->studentID << "\n";
		std::cout << "First name: " << p_Student_list->firstName << "\n";
		std::cout << "Last name: " << p_Student_list->lastName << "\n";
		std::cout << "Gender: " << p_Student_list->gender << "\n";
		std::cout << "Date of birth: " << p_Student_list->dateOfBirth.day;
		std::cout << " " << p_Student_list->dateOfBirth.month;
		std::cout << " " << p_Student_list->dateOfBirth.year << "\n";
		std::cout << "Social ID: " << p_Student_list->socialID << "\n";
		if (p_Student_list->pCourse_List != nullptr)
			std::cout << "Course ID:" << p_Student_list->pCourse_List->id << "\n";
		p_Student_list = p_Student_list->pNext;
	}

}
Student* goto_Student_number(Student* p_Student_List, unsigned int student_idx)
{
	if (p_Student_List == nullptr) return nullptr;
	for (unsigned int cur_student = 1; cur_student < student_idx; cur_student++)
		p_Student_List = p_Student_List->pNext;
	return p_Student_List;
}
void add_Course_To_Student(Course* p_Course_list, Student*& student)
{
	if (p_Course_list == nullptr) return;

	Course* nCourse = new Course;
	nCourse->p_Next_course = nullptr;
	*(nCourse) = *(p_Course_list);

	if (student->pCourse_List == nullptr)
	{
		student->pCourse_List = nCourse;
		return;
	}

	Course* cur = student->pCourse_List;
	while (cur->p_Next_course != nullptr)
		cur = cur->p_Next_course;
	cur->p_Next_course = nCourse;
}
void delete_All_Student(Student*& p_Student_List)
{
	Student* cur = p_Student_List;
	while (p_Student_List != nullptr)
	{
		cur = p_Student_List;
		p_Student_List = p_Student_List->pNext;
		delete cur;
	}
}

void remove_Student_From_Course(Course*& pCourse, Student*& pStudent)
{
	if (pCourse == nullptr || pCourse->p_Student_list == nullptr || pStudent == nullptr) return;

	Course* curCourse = pCourse;
	Student* curStudent = pStudent;
	while (curCourse->p_Student_list && curCourse->p_Student_list->pNext->studentID != curStudent->studentID)
	{
		curCourse->p_Student_list = curCourse->p_Student_list->pNext;
	}

	if (!curCourse->p_Student_list) return;

	Student* delStudent = curCourse->p_Student_list->pNext;

	curCourse->p_Student_list->pNext = delStudent->pNext;

	remove_Course_From_Student(curCourse, delStudent);
	delete delStudent;


}


void remove_Course_From_Student(Course*& pCourse, Student*& pStudent)
{
	if (pStudent->pCourse_List == nullptr || pCourse == nullptr) return;

	Course* cCourse = pCourse;
	Student* cStudent = pStudent;

	while (cStudent->pCourse_List && cStudent->pCourse_List->p_Next_course->id != cCourse->id)
	{
		cStudent->pCourse_List = cStudent->pCourse_List->p_Next_course;
	}

	if (!cStudent->pCourse_List) return;

	Course* delCourse = cStudent->pCourse_List->p_Next_course;
	cStudent->pCourse_List->p_Next_course = delCourse->p_Next_course;
	delete delCourse;

}

void deleteCourse(Semester*& pSemester, Course* pCourse)
{
	if (pSemester == nullptr || pCourse == nullptr) return;

	Semester* cSemester = pSemester;
	Course* cCourse = pCourse;

	while (cSemester->p_CourseList && cSemester->p_CourseList->p_Next_course->id != cCourse->id)
	{
		cSemester->p_CourseList = cSemester->p_CourseList->p_Next_course;
	}

	Course* delCourse = cSemester->p_CourseList->p_Next_course;
	cSemester->p_CourseList->p_Next_course = delCourse->p_Next_course;
	delete delCourse;
}

