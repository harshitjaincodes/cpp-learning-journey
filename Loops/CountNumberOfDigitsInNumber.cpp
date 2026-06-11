#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int count = 0;
    while(n>0){
        n= n/10;
        count += 1;
    }
    cout<<"Number Of Digits In Numbers are "<<count;
}