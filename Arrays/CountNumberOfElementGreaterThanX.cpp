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
    int x;
    int count = 0;
    cout<<"Count Elements greater than: ";
    cin>>x;
    for(int i = 0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count<<" Elements are greater than "<<x;
}