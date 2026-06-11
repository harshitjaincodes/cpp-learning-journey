#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    bool flag = true;
    for(int i = 2;i<= n/2;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1){
        cout<<"Neither Prime nor Composite";
    }
     else if(flag == false){
        cout<<"Number is Composite";

    }
    else{
        cout<<"Number is Prime";
    }
}