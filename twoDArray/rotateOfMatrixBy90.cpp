#include<bits/stdc++.h>
//Algorithm
//1. transpose first
//2. reverse of every row
using namespace std;
int main (){
int n;//row/column
cout<<"Enter the value of row/column:";
cin>>n;
int arr[n][n];
//enter the element of matrix
cout<<"Enter element of matrix :"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
//transpose of matrix
//rotates of matrix by 90 degree clockwise
for(int i=0;i<n;i++){
    for(int j=1+i;j<n;j++){
       int temp=arr[i][j];
       arr[i][j]=arr[j][i];
       arr[j][i]=temp;
    }
}
//reverse of each rows
for(int i=0;i<n;i++){
    for(int j=0,k=n-1;j<k;j++,k--){
       int temp=arr[i][j];
       arr[i][j]=arr[i][k];
       arr[i][k]=temp;   
    }
}
//rotates matrix
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}
