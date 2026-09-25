#include<iostream>
#include<cstring>
using namespace std;

struct Address
{
    char city[50];
    char street[50];
};

struct Employee
{
    char name[50];
    Address address;
};

Employee* searchEmployee(Employee arr[],int size,char city[])
{
    int i;

    for(i=0; i<size; i++)
    {
        if(strcmp(arr[i].address.city,city)==0)
        {
            return &arr[i];
        }
    }

    return nullptr;
}

int main()
{
    Employee arr[3];
    Employee *ptr;
    char city[50];

    int i;

    for(i=0; i<3; i++)
    {
        cout<<"Enter employee name: ";
        cin>>arr[i].name;

        cout<<"Enter city: ";
        cin>>arr[i].address.city;

        cout<<"Enter street: ";
        cin>>arr[i].address.street;
    }

    cout<<"Enter city to search: ";
    cin>>city;

    ptr=searchEmployee(arr,3,city);

    if(ptr!=nullptr)
    {
        cout<<"Employee found: "<<ptr->name<<endl;
        cout<<"Old street: "<<ptr->address.street<<endl;

        cout<<"Enter new street: ";
        cin>>ptr->address.street;

        cout<<"New street: "<<arr[0].address.street<<endl;
    }
    else
    {
        cout<<"Employee not found."<<endl;
    }

    return 0;
}