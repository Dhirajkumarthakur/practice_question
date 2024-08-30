#include<iostream>
using namespace std;
int main(){

// for(int row=1;row<=5;row++){
//     //for space
//     for(int col=1;col<=5-row;col++){
//         cout<<"  ";
//     }
//     //for star
//     for(int col=1;col<=2*row-1;col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

//for number in form of tringle

for(int row=1;row<=5;row++){
    //for space
    for(int col=1;col<=5-row;col++){
        cout<<"  ";
    }
    //for increasing row 
    for(int col=1;col<=row;col++){
        cout<<col<<" ";
    }
    //foe decreasing row
    for(int col=row-1;col>=1;col--){
        cout<<col<<" ";
    }
    cout<<endl;
}


    return 0;
}