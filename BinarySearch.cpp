#include<iostream>

int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid;

    while(start<=end){
        //mid ko find karo
        mid =(start+end)/2;
        //arr[mid]==key
        if(arr[mid]==key)
            return mid;
        
        //arr[mid]<key
        else if(arr[mid]<key)
        start=mid+1;

        //arr[mid]>key
        else
        end=mid-1;
    }

    return -1;
}






using namespace std;
int main(){
    int arr[20];
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"Enter the element:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"Enter the key:";
    cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}