#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"\nEnter 1 for Addition\n"
        <<"Enter 2 for Subtraction\n"
        <<"Enter 3 for Multiplication\n"
        <<"Enter 4 for Division\n"
        <<"Enter 5 for Finding Remainder\n\n";
    int choice;
    cout<<"Enter Your Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    cout<< a+b;
    break;

    case 2:
    cout<< a-b;
    break;

    case 3:
    cout<< a*b;
    break;

    case 4:
    cout<<a/b;
    break;

    case 5:
    cout<<a%b;
    break;
    
    default:
    cout<<"Invalid Choice";
        break;
    }
}
