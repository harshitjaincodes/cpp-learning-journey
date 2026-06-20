#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    cout<<"Enter Elements Of 1st Matrix:\n";
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
        cout<<"Enter Elements Of 2nd Matrix:\n";

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum Of matrices is: \n";
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout<<arr3[i][j]<<"\t"; 
        }
        cout<<endl;
    }

}