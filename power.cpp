#include<iostream>
using namespace std;
int main(){

    //this is code power 
    // int n,pow,i,num;
    // cout<<"Enter the number: ";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;
    // num=n;
    // for(i=1;i<pow;i++){
    // num=num*n;
    // }
    // cout<<"The result is: "<<num;




    //sum of n natural number

    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
     
    // return 0;

    //factorial
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;  //input the number
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial of " << n << " number is : "<<fact;
}