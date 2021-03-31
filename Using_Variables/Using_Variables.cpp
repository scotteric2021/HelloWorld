//This program will initialize and mathematically manipulate several variables

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius,circumference, area;
    const double pi = 3.14159;
    cout << "Find the circumference and area of a circle.\n";
    cout << "Enter the radius:";
    cin >> radius;
    circumference = radius * 2 * pi;
    area = pow(radius, 2) * pi;
    cout << "The circumference is ";
    cout << circumference;
    cout << "\nThe area is ";
    cout << area;

    return 0;
}