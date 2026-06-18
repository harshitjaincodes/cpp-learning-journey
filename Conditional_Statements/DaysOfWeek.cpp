#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Day Number: ";
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<"Monday";
    break;

    case 2:
    cout<<"Tuesday";
    break;

    case 3:
    cout<<"Wedday";
    break;

    case 4:
    cout<<"Thursday";
    break;

    case 5:
    cout<<"Friday";
    break;

    case 6:
    cout<<"Saturday";
    break;

    case 7:
    cout<<"Sundayday";
    break;
    
    default:
    cout<<"Invalid Choice";
    break;
    }
}