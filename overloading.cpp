#include <iostream>
using namespace std;
double area(double radius) {
    return 3.14159 * radius * radius;
}
int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle with radius " << radius << " is: " << area(radius) << endl;
    return 0;
}
