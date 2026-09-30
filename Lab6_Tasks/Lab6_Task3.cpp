#include <iostream>
using namespace std;
class Circle {
private:
    double rad = 0;
    bool validateRadius(double r) {
        return r>0;
    }
public:
    bool setRadius(double r) {
        if (validateRadius(r)) {
            rad = r;
            return true;
        }
        cout << "Invalid Radius Value.\n";
        return false;
    }
    double calculateArea();
    double calculatePerimeter();
};

double Circle::calculateArea() {
    return 3.14*rad*rad;
}
double Circle::calculatePerimeter() {
    return 2*3.14*rad;
}
int main() {
    Circle c1;
    double r;
    cout << "Enter Radius: ";
    cin >> r;
    if (c1.setRadius(r)) {
        cout << "Area Of Circle: " << c1.calculateArea() << endl;
        cout << "Perimeter of Circle: " << c1.calculatePerimeter() << endl;
    }

    return 0;
}