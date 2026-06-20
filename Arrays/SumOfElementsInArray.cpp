#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter Elements Of Array: ";
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<=4;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum Of Elements Of Array is "<<sum;
}