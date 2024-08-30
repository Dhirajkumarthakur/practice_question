#include<iostream>
using namespace std;

   void swap(int &a,int &b) //it will change the value and point to the parameter
   {
    int c;
    c=a;
    a=b;
    b=c;
   }



int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);  
    cout<<"After swapping, a = "<<a<<" and b = "<<b<<endl;
    return 0;
 
}