#include<iostream>
using namespace std;
int main(){
    int x;
     cout<<"Enter a Number: ";
    cin>>x;
    if(x<0){
        x = x*(-1);
        cout<<"Absolute value is "<<x;
    }
    else{
        cout<<"Absolute Value is "<<x;
    }
}