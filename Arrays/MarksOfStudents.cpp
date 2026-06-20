#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number Of Students: ";
    cin>>n;
    int arr[n][4];
    for(int i = 0;i<n;i++){
            cout<<"Enter Roll No. Of Student "<<i+1<<": ";
            cin>>arr[i][0];
            cout<<"Enter Marks OF Physics: ";
            cin>>arr[i][1];
            cout<<"Enter Marks OF Maths: ";
            cin>>arr[i][2];
            cout<<"Enter Marks OF Chemistry: ";
            cin>>arr[i][3];
    }
    cout << "\nRollNo\tPhysics\tMaths\tChemistry\n";

    for(int i = 0;i<n;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}