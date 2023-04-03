#include"allStruct.h"

void displayClassesInSchoolYear(SchoolYear* p_SchoolYear)
{
    Class* p_CurrentClass = p_SchoolYear->classroom;

    cout << "List of classes in " << "School year: " << p_SchoolYear->startYear  << " - " << p_SchoolYear->endYear << ":" << endl;
    cout << "------------------------"<<endl;
    cout  << "| " << setw(20) << left << "Name Class:" << " |" << endl;
    cout << "------------------------"<<endl;
    while (p_CurrentClass != nullptr)
    {
        cout <<"| " << setw(20) << left << p_CurrentClass->name<<" |" << endl;
        cout << "------------------------"<<endl;
        p_CurrentClass = p_CurrentClass->pNext;
    }
}
