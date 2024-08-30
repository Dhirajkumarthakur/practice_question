#include<iostream>
using namespace std;
int main(){
    // for(int row=1;row<=5;row++){
    //     //space printing
    //     for(int col=1;col<=5-row;col++){
    //         cout<<"  ";
    //     }
    //     //star printing
    //     for(int col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


//number printing
    // for(int row=1;row<=4;row++){
    //     //for space
    //     for(int col=1;col<=4-row;col++){
    //         cout<<"  ";
    //     }
    //     //for row
    //     for(int col=1;col<=row;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    //char printing

    for(int row=1;row<=5;row++){
        for(int col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(char name='A';name<='A'+row-1;name++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}