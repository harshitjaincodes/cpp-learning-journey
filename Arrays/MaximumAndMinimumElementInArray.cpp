#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element Of Array: \n";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else
        max = max;
    }
    for(int i = 0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        else
        min = min;
    }
    cout<<"Maximum Element Of Array is "<<max<<endl;
    cout<<"Minimum Element Of Array is "<<min;
}