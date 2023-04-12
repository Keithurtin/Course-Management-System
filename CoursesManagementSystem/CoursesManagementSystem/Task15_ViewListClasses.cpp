#include"allStruct.h"

void displayClassesInSchoolYear(Class* pHead)
{
    Class* p_CurrentClass = pHead;

    cout << "List of classes: " << endl;
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
