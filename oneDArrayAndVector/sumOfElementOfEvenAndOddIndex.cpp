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
    //sum of even and sum of odd indices difference
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<n;i++){
        if (i%2==0) evenSum+=v.at(i);
        else oddSum+=v.at(i);
    } 
    cout<<evenSum-oddSum;

}