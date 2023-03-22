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

//student function
void get_Student_Data_From_File(std::string student_list, Student*& p_Student_list )
{
	std::ifstream In_Student_List;
	In_Student_List.open(student_list);
	if (!In_Student_List.is_open())
	{
		std::cout << "Unable to open " << student_list <<" file \n";
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
	std::getline(In_Student_List,s );
	while (!In_Student_List.eof() && j < number_of_students)
	{		
			getline(In_Student_List , s,',');
			student_number[j].No = stoi(s);
			s = "";
			std::cout << student_number[j].No << "\n";
			getline(In_Student_List, student_number[j].studentID,',');
			std::cout << student_number[j].studentID << "\n";
			getline(In_Student_List, student_number[j].firstName, ',');
			std::cout << student_number[j].firstName << "\n";
			getline(In_Student_List, student_number[j].lastName, ',');
			std::cout << student_number[j].lastName << "\n";
			getline(In_Student_List, student_number[j].gender, ',');
			std::cout << student_number[j].gender << "\n";
			getline(In_Student_List, s, ' ');
			student_number[j].dateOfBirth.day = stoi(s);
			s = "";
			std::cout << student_number[j].dateOfBirth.day << "\n";
			getline(In_Student_List, s, ' ');
			student_number[j].dateOfBirth.month = stoi(s);
			s = "";
			std::cout << student_number[j].dateOfBirth.month << "\n";
			getline(In_Student_List, s, ',');
			student_number[j].dateOfBirth.year = stoi(s);
			s = "";
			std::cout << student_number[j].dateOfBirth.year << "\n";
			getline(In_Student_List, student_number[j].socialID);
			std::cout << student_number[j].socialID << "\n";
			j++;

		
	}
	In_Student_List.close();

	for (unsigned int i = 0; i < number_of_students; i++)
	{
		add_Student_To_Course(p_Student_list, student_number[i]);
	}

	delete[] student_number;
}

void get_Student_Data(Student*& p_Student_list)
{
	while (p_Student_list != nullptr)
	{
		std::cout << " Student no: " << p_Student_list->No << "\n";
		std::cout << " Student ID: " << p_Student_list->studentID << "\n";
		std::cout << " Student First name: " << p_Student_list->firstName << "\n";
		std::cout << " Student Last name: " << p_Student_list->lastName << "\n";
		std::cout << " Student Gender: " << p_Student_list->gender << "\n";
		std::cout << " Student date of birth: " << p_Student_list->dateOfBirth.day;
		std::cout << " " << p_Student_list->dateOfBirth.month;
		std::cout << " " << p_Student_list->dateOfBirth.year << "\n";
		std::cout << " Student Social ID: " << p_Student_list->socialID << "\n";
		p_Student_list = p_Student_list->pNext;

	}

}
