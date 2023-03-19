#include<iostream>
#include<string>
#include"Semester.h"

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