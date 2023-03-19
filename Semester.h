#pragma once;
#include "allStruct.h";

void set_Semster_Data(Semester*& p_Semester);
void add_Semester(Semester*& p_Semester);
void get_Semester_Data(Semester* p_Semester);
Semester* goto_Semester_numth(Semester* p_Semester, unsigned short semester_numth);
Semester* find_Semester_num(Semester* p_Semester, unsigned short semester_num);
void delete_All_Semester(Semester*& p_Semester);
