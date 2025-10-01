#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(2*pre[i]==pre[n-1]){
            cout<<"patition : "<<i;
            flag=true;
            break;
        } 
    }
    if(flag==false){
        cout<<"partition is not posible";
    }
}