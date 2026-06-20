#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr[i];
    }
    cout<<"Input Array is:\n";
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<5/2;i++){
        int temp = arr[i];
        arr[i] = arr[5-i-1];
        arr[5-i-1] = temp;
    }
    cout<<"\nReversed Array is:\n";
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}