#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5};
    int n=sizeof (arr)/sizeof(arr[0]);
    // int pro[n];
    // int product=1;
    // for(int i=0;i<n;i++){
    //     product*=arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     pro[i]=product/arr[i];
    // }
    // for(auto element :pro){
    //     cout<<element<<" ";
    // }


    //without using division operation

    //concept: prefixproduct and sufixproduct ek kam wala
    int ans[n];
    int p[n];
    int s[n];
    p[0]=1;
    s[n-1]=1;
    for(int i=1;i<n;i++) {
       p[i]=p[i-1]*arr[i-1];
       s[n-i-1]=s[n-i]*arr[n-i];
        
    }
    for(int i=0;i<n ;i++){
        ans[i-1]=p[i-1]*s[i-1];
    }
    for(auto ele: ans){
        cout<<ele<<" ";
    }

}