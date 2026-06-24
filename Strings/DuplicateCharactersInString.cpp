#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;
    cout<<"Duplicates In String are: \n";
    for(int i = 0;i<s.length();i++){
        int freq = 0;

        for(int j = 0;j<s.length();j++){
            if(s[i]==s[j]){
                freq+=1;
            }
        }
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++) {
            if(s[k] == s[i]) {
                alreadyPrinted = true;
                break;
            } 
        }
        if(freq>1 && !alreadyPrinted){  
            cout<<s[i]<<"->"<<freq<<endl;
       }
    }
}
