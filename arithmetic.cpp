#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the number of a" << endl;
    cin >> a;
    int b;
    cout << "enter the number of b" << endl;
    cin >> b;
    int sum = a + b;
    cout << "sum of two numbers is = " << sum << endl;
    int diff = a - b;
    cout << "diff of two numbers is =" << diff << endl;
    int mul = a * b;
    cout << "mul of two number is =" << mul << endl;
    int div = a / b;
    cout << "div of two number is =" << div << endl;
    int mod = a % b;
    cout << "mod of two number is =" << mod << endl;

    return 0;
}