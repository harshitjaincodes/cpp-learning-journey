#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Number Of Rows: ";
    cin>>r;
    cout<<"Enter Number Of Columns: ";
    cin>>c;
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}