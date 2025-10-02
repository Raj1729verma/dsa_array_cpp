#include<bits/stdc++.h>
using namespace std;
int main (){
int row;
cout<<"Enter the value of row:";
cin>>row;
int column;
cout<<"Enter the value of column:";
cin>>column;
int arr[row][column];
cout<<"Enter element of matrix :"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cin>>arr[i][j];
    }
}
cout<<endl;
for(int i=0;i<column;i++){
    for(int j=0;j<row;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
}
