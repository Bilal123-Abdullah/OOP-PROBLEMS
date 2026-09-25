#include<iostream>
#include<cstring>
using namespace std;
struct Student
{
    char name[50];
    int rollNumber;
    float GPA;
};

Student* addStudent(Student **&directory,int &size,int &capacity,char name[],int rollNumber,float GPA)
{
    int i;
    Student *newStudent;
    Student **newDirectory;

    if(size==capacity)
    {
        capacity=capacity*2;

        newDirectory=new Student*[capacity];

        for(i=0; i<size; i++)
        {
            newDirectory[i]=directory[i];
        }

        delete[] directory;
        directory=newDirectory;
    }

    newStudent=new Student;

    strcpy(newStudent->name,name);
    newStudent->rollNumber=rollNumber;
    newStudent->GPA=GPA;

    directory[size]=newStudent;
    size++;

    return newStudent;
}

Student* searchStudent(Student **directory,int size,int rollNumber)
{
    int i;

    for(i=0; i<size; i++)
    {
        if(directory[i]->rollNumber==rollNumber)
        {
            return directory[i];
        }
    }

    return nullptr;
}

int main()
{
    Student **directory;
    Student *ptr;

    int size=0;
    int capacity=2;

    char name[50];
    int rollNumber;
    float GPA;
    int i;

    directory=new Student*[capacity];

    for(i=0; i<3; i++)
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter roll number: ";
        cin>>rollNumber;

        cout<<"Enter GPA: ";
        cin>>GPA;

        ptr=addStudent(directory,size,capacity,name,rollNumber,GPA);

        cout<<"Added: "<<ptr->name<<endl;
    }

    cout<<"Enter roll number to search: ";
    cin>>rollNumber;

    ptr=searchStudent(directory,size,rollNumber);

    if(ptr!=nullptr)
    {
        cout<<"Student found:"<<endl;
        cout<<"Name: "<<ptr->name<<endl;
        cout<<"Roll Number: "<<ptr->rollNumber<<endl;
        cout<<"GPA: "<<ptr->GPA<<endl;
    }
    else
    {
        cout<<"Student not found."<<endl;
    }

    for(i=0; i<size; i++)
    {
        delete directory[i];
    }

    delete[] directory;

    return 0;
}

