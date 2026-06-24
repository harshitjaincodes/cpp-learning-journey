#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int start = 0;
    string s = "Amit is Reading";
    cout<<s<<endl;
    for(int i = 0;i<=s.length();i++){
        if(i==s.length() or s[i]==' '){
             reverse(s.begin() + start,s.begin() + i);
            start = i+1;
        }
    }
    cout<<s;
}