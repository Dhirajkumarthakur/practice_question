#include <iostream>
using namespace std;
int main()
{

    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    // Calculating the area
    // double area = 3.14 * radius * radius;
    // cout << "The area of the circle is: " << area << endl;

    // calcilating the circumference
    double circumference = 2 * 3.14 * radius;
    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}