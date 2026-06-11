#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int reverse = 0;
    int lastdigit = 0;
    while(n>0){
        lastdigit = n % 10;
        reverse = reverse * 10;
        reverse += lastdigit;
        n= n/10;
    }
    cout<<"Reverse Number is "<<reverse;
} 