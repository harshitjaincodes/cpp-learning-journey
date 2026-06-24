#include<iostream>
using namespace std;
int main(){
    int n = 12345;
    string s = to_string(n); //Converts Integer to String
    cout<<n<<endl;
    
    string str = "1234";
    int x = stoi(str); //Converts String to Integer
    cout<<x;
}