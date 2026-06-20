#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements Of Array: \n";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int sencondmax = arr[0];
    for(int i = 0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else
        max = max;
    }
    for(int i = 0;i<n;i++){
        if(arr[i] != max){
            sencondmax = arr[i];
        }
    }
    cout<<"Second Largest Element Of Array is "<<sencondmax<<endl;
}