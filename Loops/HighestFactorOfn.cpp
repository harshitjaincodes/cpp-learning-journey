#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int f = 1;
    for(int i = n/2;i>0;i--){
        if(n%i==0){
            f = i;
            cout<<"Highest Factor is "<<f;
            break;
        }
    }
}