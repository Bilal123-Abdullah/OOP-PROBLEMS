#include<iostream>
#include<cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

double distance(Point p1,Point p2)
{
    double d;

    d=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));

    return d;
}

Point midpoint(Point p1,Point p2)
{
    Point mid;

    mid.x=(p1.x+p2.x)/2;
    mid.y=(p1.y+p2.y)/2;

    return mid;
}

int main()
{
    Point p1,p2,mid;
    double d;

    cout<<"Enter x and y of first point: ";
    cin>>p1.x>>p1.y;

    cout<<"Enter x and y of second point: ";
    cin>>p2.x>>p2.y;

    d=distance(p1,p2);
    mid=midpoint(p1,p2);

    cout<<"Distance = "<<d<<endl;
    cout<<"Midpoint = ("<<mid.x<<", "<<mid.y<<")"<<endl;

    return 0;
}

