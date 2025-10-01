#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    cout<<"enter the size of vector n : ";
    int n;
    cin>>n;
    cout<<"enter the element of vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
  //reverse the array
  int temp;
  for(int i=0,j=n-1;i<=j;i++,j--){
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
  }
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }

}