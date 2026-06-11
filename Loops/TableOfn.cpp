#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i = 1;i<11;i++){
        cout<<n<<'*'<<i<<'='<<n*i<<endl;
    }
}