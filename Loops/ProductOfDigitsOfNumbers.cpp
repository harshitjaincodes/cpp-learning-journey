#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int product = 1;
    int lastdigit = 0;
    while(n>0){
        lastdigit = n % 10;
        n= n/10;
        product = product * lastdigit;
    }
    cout<<"Product Of Digits Of Number is "<<product;
} 