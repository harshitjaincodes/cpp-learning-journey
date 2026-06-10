#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter First Side Of Triangle: ";
    cin >> a;
    cout << "Enter Second Side Of Triangle: ";
    cin >> b;
    cout << "Enter Third Side Of Triangle: ";
    cin >> c;
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << "It is a Triangle";
    }
    else
    {
        cout << "It is not a Triangle";
    }
}