// Distinct Permutations = n! / (f1! * f2! * f3! ...)
// Distinct Permutations = Factorial of total number of characters / Product of factorials of frequencies of repeated characters
#include<iostream>
using namespace std;
int main(){

    string s;
    cout<<"Enter a String: ";
    cin>>s;
    int f = 1;
    int denominater = 1;   // Stores product of factorials of repeated character frequencies

    for(int i = 1;i<=s.length();i++){
        f= f*i;
    }

    for(int i = 0;i<=s.length()-1;i++){
        int freq = 0;
        for(int j = 0;j<s.length();j++){
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

        // Calculate factorial of frequency
        int factfreq = 1;
        for(int l = 1;l<=freq;l++){
            factfreq = factfreq * l;
        }

        if(!alreadyprinted){
                    denominater *= factfreq;
            // cout<<s[i]<<"->"<<freq<<"->"<<factfreq<<endl;
        }
    }

    // cout<<f<<endl;  // factorial of Length of String
    // cout<<denominater<<endl;

    int answer = f/denominater;
    cout<<"Total Number Of Permutations of The String are "<<answer;
}