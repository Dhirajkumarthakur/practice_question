#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Input:";
    cin>>n;
    // for (int row = n; row >= 1; row--)
    // {
    //     //for space 
    //     for (int col = 1; col <= n - row; col++)
    //         cout << "  ";
    //         //for star
    //     for (int col = 1; col <= 2 * row - 1; col++)
    //         cout << "* ";
    //     cout << endl;
    // }

//two triangle and between space printing
    for(int row=n;row>=1;row--){
        //print star
        for(int col=1;col<=row;col++)
        cout<<"* ";
        //print space
        for(int col=1;col<=2*n-2*row;col++)
        cout<<"  ";
        //print *
        for(int col=1;col<=row;col++)
        cout<<"* ";
        cout<<endl;
    }
     for(int row=1;row<=n;row++){
        //print star
        for(int col=1;col<=row;col++)
        cout<<"* ";
        //print space
        for(int col=1;col<=2*n-2*row;col++)
        cout<<"  ";
        //print *
        for(int col=1;col<=row;col++)
        cout<<"* ";
        cout<<endl;
    }
}
