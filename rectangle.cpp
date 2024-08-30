#include <iostream>
using namespace std;
int main()
{
    int lenght;
    cout << "Enter the length of the rectangle: ";
    cin >> lenght;
    int breath;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breath;
    int area = lenght * breath;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}
