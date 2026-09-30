#include<iostream>
using namespace std;
class Employee{
  	private:
  		string name;
  		int age;
  		double salary;
  	public:
  		void setEmployeData(string n,int a,double s){
  		    name=n;
  		    age=a;
  		    salary=s;
		  }
		string getname(){
			return name;
		}
		int getAge(){
			return age;
		}
		double getSalary(){
		    return salary;
		}
  };

int main(){
	Employee e1;
	e1.setEmployeData("Bilal",21,23000);
	Employee *ptr=new Employee;
	ptr->setEmployeData("Ahmad",25,30000);
	Employee &eptr=e1;
	cout<<"....Employee Data...."<<endl;
	cout<<"Normal Object:"<<endl;
	cout<<"Name: "<<e1.getname()<<endl;
	cout<<"Age: "<<e1.getAge()<<endl;
	cout<<"Salary: "<<e1.getSalary()<<endl;

	cout<<"Pointer Object:"<<endl;
	cout<<"Name: "<<ptr->getname()<<endl;
	cout<<"Age: "<<ptr->getAge()<<endl;
	cout<<"Salary: "<<ptr->getSalary()<<endl;

	cout<<"Reference Object:"<<endl;
	cout<<"Name: "<<eptr.getname()<<endl;
	cout<<"Age: "<<eptr.getAge()<<endl;
	cout<<"Salary: "<<eptr.getSalary()<<endl;

	delete ptr;
	return 0;
}