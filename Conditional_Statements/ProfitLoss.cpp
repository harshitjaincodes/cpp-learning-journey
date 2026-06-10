#include <iostream>
using namespace std;
int main()
{
    int c, s;
    cout << "Enter Cost Price: ";
    cin >> c;
    cout << "Enter Selling Price: ";
    cin >> s;
    if ((s - c) > 0)
    {
        cout << "Profit of Rs " << (s - c);
    }
    else if ((s - c) < 0)
    {
        cout << "Loss of Rs " << -(s - c);
    }
    else
    {
        cout << "Neither Profit Nor Loss";
    }
}