#include<iostream>
using namespace std;
   class Circle{
   	private:
   	string name;
   	int marks;
   	public:
   	void setdata(string n,int m){
   		name=n;
   		marks=m;
	   }	
	string getname(){
		return name;
	}
	int getmarks(){
		return marks;
	}
   };

int main(){
	Circle c1;
	c1.setdata("Ahmad",90);
	cout<<"Name: "<<c1.getname()<<"\n"<<"Marks: "<<c1.getmarks();
	
	return 0;
}