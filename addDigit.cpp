#include<iostream>
using namespace std;
int main(){
//add Digit for number
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while(num>9){
        int ans=0,rem;
        while(num!=0){
            rem=num%10;
            num/=10;
            ans=ans+rem;
        }
        num=ans;
    }
    cout<<num;
}