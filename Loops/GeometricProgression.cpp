#include<iostream>
using namespace std;
int main(){
    int n,a,r;
    cout<<"Enter First Term Of GP: ";
    cin>>a;
    cout<<"Enter Number Of Terms in GP: ";
    cin>>n;
    cout<<"Enter the Common Ratio: ";
    cin>>r;
    cout<<"Geometric Progression is: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<a<<' ';
        a = a*r;
    }
}