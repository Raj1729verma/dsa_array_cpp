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
int sum=0;

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        sum+=arr[i][j];
    }
}
cout<<"The of matrix is :"<<sum;


}
