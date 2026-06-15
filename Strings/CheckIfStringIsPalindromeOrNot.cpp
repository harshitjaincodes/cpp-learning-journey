#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a Strng: ";
    cin>>s;
    string rev = "";
    for(int i = s.length()-1;i>=0;i--){
        rev+= s[i];
    }
    if(rev==s){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}
