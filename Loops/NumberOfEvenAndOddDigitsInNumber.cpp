#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entyer a Number: ";
    cin>>n;
    int counteven = 0;
    int lastdigit = 0;
    int countodd = 0;
    while(n!=0){
        lastdigit= n%10;
        n= n/10;
        if(lastdigit%2==0){
            counteven++;
        }
        else
        countodd++;
    }
    cout<<"Number Of Even Digits are "<<counteven<<endl;
    cout<<"Number Of Odd Digits are "<<countodd<<endl;
}