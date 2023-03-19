#include<iostream>
#include<string>
#include"Semester.h"

//semester functioin
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
void set_Semster_Data(Semester*& p_Semester)
{
	std::cout << "Semester number: ";
	std::cin >> p_Semester->semester_num;
	std::cout << "\n";

	std::cout << "School year: ";
	std::cin >> p_Semester->school_year.year;
	std::cout << "\n";

	std::cout << "Date: ";
	std::cout << "\n";

	std::cout << "Start date (dd/mm/yyyy): ";
	std::cin >> p_Semester->start_date.day >> p_Semester->start_date.month >> p_Semester->start_date.year;
	std::cout << "\n";

	std::cout << "End date (dd/mm/yyyy): ";
	std::cin >> p_Semester->end_date.day >> p_Semester->end_date.month >> p_Semester->end_date.year;
	std::cout << "\n";
}
void get_Semester_Data(Semester* p_Semester)
{

	while (p_Semester != nullptr)
	{
		std::cout << "Semester: " << p_Semester->semester_num;
		std::cout << " \n";
		std::cout << "School year: " << p_Semester->school_year.year;
		std::cout << " \n";
		std::cout << "Date: \n";
		std::cout << "Start date (dd/mm/yy): " << p_Semester->start_date.day << " / " << p_Semester->start_date.month << " / " << p_Semester->start_date.year;
		std::cout << " \n";
		std::cout << "End date (dd/mm/yy): " << p_Semester->end_date.day << " / " << p_Semester->end_date.month << " / " << p_Semester->end_date.year;
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

//Course function
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
	std::cin.ignore();
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
void get_Course_Data(Course*& p_Course)
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

