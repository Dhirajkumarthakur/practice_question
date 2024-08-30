#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter your number" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "this is even";
    }
  
    else
    {
        cout << "this is not even";
    }

    return 0;
}