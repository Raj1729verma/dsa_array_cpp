#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={4,5,4,3,3,3,5,7,8};
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=arr1[i][j]+arr2[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
}