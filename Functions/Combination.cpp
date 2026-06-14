#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 or n==0){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    //combination (nCr) = n! / r! *(n-r)!
    cout<<"Combination is "<<factorial(n)/(factorial(r) * factorial(n-r));

}