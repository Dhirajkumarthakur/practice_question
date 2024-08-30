#include<iostream>
using namespace std;

void swap(int a,int b){  //pass by value does not change the value and it doest point to the address
    int c;
    c=a;
    a=b;
    b=c;
}




int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";
}