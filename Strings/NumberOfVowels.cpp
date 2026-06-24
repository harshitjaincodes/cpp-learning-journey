#include<iostream>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a String: ";
    getline(cin,s);
    int n = s.length();
    int count = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            count += 1;
        }
    }
    cout<<"Number Of Vowels in String are "<<count;
}