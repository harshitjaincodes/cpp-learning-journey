#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 or n==0)
        return 1;
    return n*fact(n-1);   
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int original = n;
    int sum = 0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        n = n/10;
        sum += fact(lastdigit); 
    }
    if(sum==original){
        cout<<"Strong Number";
    }
    else
    cout<<"Not a Strong Number";
}