#include<bits/stdc++.h>
using namespace std;
int main (){
int n;//row/column
cout<<"Enter the value of row/column:";
cin>>n;
int arr[n][n];
cout<<"Enter element of matrix :"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
//transpose of matrix
for(int i=0;i<n;i++){
    for(int j=1+i;j<n;j++){
       int temp=arr[i][j];
       arr[i][j]=arr[j][i];
       arr[j][i]=temp;
    }
}
//output of transpose matrix
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
