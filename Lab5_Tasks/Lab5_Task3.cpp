#include<iostream>
using namespace std;

struct Employee
{
    char name[50];
    float salary;
};

void giveRaise(Employee *staff,int size,float percentage)
{
    int i;

    for(i=0; i<size; i++)
    {
        staff[i].salary=staff[i].salary+(staff[i].salary*percentage/100);
    }
}

int main()
{
    Employee staff[3];
    int i;
    float percentage;

    for(i=0; i<3; i++)
    {
        cout<<"Enter name: ";
        cin>>staff[i].name;

        cout<<"Enter salary: ";
        cin>>staff[i].salary;
    }

    cout<<"Enter raise percentage: ";
    cin>>percentage;

    giveRaise(staff,3,percentage);

    cout<<"Employees after raise:"<<endl;

    for(i=0; i<3; i++)
    {
        cout<<"Name: "<<staff[i].name<<endl;
        cout<<"Salary: "<<staff[i].salary<<endl;
    }

    return 0;
}