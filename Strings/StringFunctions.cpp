#include<iostream>
using namespace std;
int main(){
    string str = "Raghav";
    cout<<str<<endl;
    str.push_back('i'); //adds a character at the end of string
    cout<<str<<endl;

    str.pop_back(); //Removes last character of string
    cout<<str<<endl;

    str.append(" Garg"); // Can add string at the end
    cout<<str<<endl;

    // str.clear(); // Makes String Empty
    // cout<<str.length()<<endl;

    str = str + " Hello"; // + operator can add string easily
    cout<<str<<endl;

    str ="Hello " + str; // + operator can add string easily
    cout<<str<<endl;


}