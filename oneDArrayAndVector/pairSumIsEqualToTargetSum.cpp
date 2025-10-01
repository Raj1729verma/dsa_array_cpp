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
   //pair sum is equal to a target sum 
   cout<<"Enter the target element X : ";
   int X;
   cin>>X;
   for(int i=0;i<n-1 ;i++){
    for(int j = 1+i;j<n;j++){
       // if(v.at(i)+v.at(j)==X) cout<<"("<<i<<","<<j<<")"<<endl;
       if(v.at(i)+v.at(j)==X) cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
    }
   }

}