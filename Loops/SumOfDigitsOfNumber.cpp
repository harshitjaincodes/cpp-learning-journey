#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int sum = 0;
    int lastdigit = 0;
    while(n>0){
        lastdigit = n % 10;
        n= n/10;
        sum = sum + lastdigit;
    }
    cout<<"Sum Of Digits Of Number is "<<sum;
} 