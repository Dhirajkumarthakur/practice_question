#include<iostream>
using namespace std;
int main(){
    //star printing
    // for(int row=1;row<=5;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //number printing

    // for(int row=1;row<=5;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }
//reverse of the number

    // for(int row=1;row<=5;row++){
    //     for(int col=row;col>=1;col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    //char printing
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
        char name='a'+row-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}