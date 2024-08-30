#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    if (num > 0)
    {
        cout << num << " is a positive number" << endl;
    }
    else if (num < 0)
    {
        cout << num << " is a negetive number";
    }
    else
    {
        cout << num << " is zero";
    }
    return 0;
}