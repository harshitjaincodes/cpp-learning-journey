#include<iostream>
using namespace std;
int main(){
string s;
cout<<"Enter a String: ";
cin>>s;
for(int i = 0;i<=s.length()-1;i++){
    int freq = 0;
    for(int j = 0;j<=s.length()-1;j++){
        if(s[i]==s[j]){
            freq++;
        }
    }
        bool alreadyprinted = false;
        for(int k = 0;k<i;k++){
            if(s[k]==s[i]){
                alreadyprinted = true;
                break;
            }
        }
        if(! alreadyprinted){
            cout<<s[i]<<"->"<<freq<<endl;
        }
    }

}
