#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1 for Calculating Area Of Rectangle: \n";
    cout<<"Enter 2 for Calculating Area Of Square: \n";
    cout<<"Enter 3 for Calculating Area Of Circle: \n";
    int l,b,r,s;
    int choice;
    cout<<"Enter Your Choice: ";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Enter Length Of Rectangle: ";
        cin>>l;
        cout<<"Enter Breadth Of Rectangle: ";
        cin>>b;
        cout<<"Area Of Rectangle is "<<l*b;
        break;

        case 2:
        cout<<"Enter Side Of Square: ";
        cin>>s;
        cout<<"Area Of Square is "<<s*s;
        break;

        case 3:
        cout<<"Enter Radius Of Circle: ";
        cin>>r;
        cout<<"Area Of Circle is "<<3.14*r*r;
        break;

        default:
        cout<<"Invalid Choice";
        break;
    }
    
}