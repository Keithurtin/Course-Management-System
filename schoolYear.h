#pragma once
#include "allStruct.h";

void readSchoolYear(SchoolYear*& pHead);
void addSchoolYear(SchoolYear*& schoolYearList, SchoolYear*& curSchoolYear);
void updateSchoolYear(SchoolYear* pHead);
void addClass(Class*& classList, Class*& curClass, int& n);
SchoolYear* takeYear(SchoolYear* pHead, int startYear, int endYear);