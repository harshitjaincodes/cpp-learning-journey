#include<iostream>
using namespace std;
int main(){
    int n,a,d;
    cout<<"Enter First Term Of AP: ";
    cin>>a;
    cout<<"Enter Number Of Terms in AP: ";
    cin>>n;
    cout<<"Enter Difference Between Two Terms: ";
    cin>>d;
    cout<<"Arithmetic Progression is: "<<endl;
    for(int i = 0;i<=n;i++){
        cout<<a<<' ';
        a = a+d;
    }
}