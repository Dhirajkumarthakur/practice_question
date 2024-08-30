#include<iostream>
using namespace std;
int main(){
  //binary to decimal conversion
    int num=1101;
    int ans=0;
    int rem,mul=1;
    while(num>0){
        rem=num%10;
        ans+=rem*mul;
        mul*=2;
        num/=10;
    }
    cout<<ans<<endl;
}