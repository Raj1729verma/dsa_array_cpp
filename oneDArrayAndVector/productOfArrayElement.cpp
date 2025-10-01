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
    //product of array element 
    int product=1;
    for(int i=0;i<n;i++){
        product*=v[i];

    }
    cout<<product;

}