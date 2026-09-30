#include<iostream>
using namespace std;
  class Circle{
  private:
   double radius;
  public:
  	void setRadius(double r){
  		radius=r;
	  }
	double getArea(){
		return 3.14*radius*radius;
	}
  
  };
  
int main(){
	Circle c1;
	c1.setRadius(2);
	cout<<"Area: "<<c1.getArea();
	return 0;
}