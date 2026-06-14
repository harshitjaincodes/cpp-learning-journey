#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<p<<endl<<&x<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    *p = 6;
    cout<<*p;
}