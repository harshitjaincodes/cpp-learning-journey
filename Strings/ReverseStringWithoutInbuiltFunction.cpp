#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    string reverse = "";
    for(int i = s.length()-1;i>=0;i--){
        reverse += s[i];

    }
    cout<<"Reverse String is: "<<endl<<reverse;
}