#include<iostream>
using namespace std;
int main(){
    float p = 5000;
    float r = 9;
    float t = 3.5;
    float SI = (p*r*t)/100;
    cout<<"Simple Interest is " <<SI <<endl;
    cout<<"Total Amount To Pay is "<<p+SI;
}  