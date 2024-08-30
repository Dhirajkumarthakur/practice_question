#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<2){
        cout<<"not prime"<<endl;
        return 0;
    }
    else
    {
        for( i=2;i<n;i++){
            if(n%i==0){
                cout<<"not prime"<<endl;
                return 0;
            }
            cout<<"prime";
            return 0;
        }
    }
}