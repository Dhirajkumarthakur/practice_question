#include <iostream>
using namespace std;
int main()
{
  //This is the for loop
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Hello World!" << endl;
    // }

    //This is n natural number

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++){
    //     cout << i << endl;
    // }

    //this is squre of n number
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for(int i=1;i<=n;i++){
    //     cout <<i<<"*"<<i<<"="<<i*i << endl;
    // }

    //this is cube of n number
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for(int i=1;i<=n;i++){
    //     cout << i<<"*"<<i<<"*"<<i<<"="<<i*i*i << endl;
    // }

    //print the even number from given n number
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=2;i<=n;i+=2){
        cout << i << endl;
    }
}