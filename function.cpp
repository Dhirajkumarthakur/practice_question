#include<iostream>
using namespace std;
//this is function definition
bool prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}


// function decalaration for factorial
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}








int main(){

   
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    // cout<<prime(a);  //this is for prime number   //this is function call
    cout<<factorial(a); //this is for factorial 

}