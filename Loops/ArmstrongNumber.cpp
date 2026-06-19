#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int ogNumber = n;
    int count = 0;
    int lastdigit;
    int sum = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    n = ogNumber;
    while(n!=0){
            int power = 1;
         lastdigit = n%10;
         for(int i = 0;i<count;i++){
            power *= lastdigit;
         }
         sum += power;
          n = n/10;
    }
    if(ogNumber==sum){
        cout<<"Armstrong Number";
    }
    else
    cout<<"Not a Armstrong Number";
    
}