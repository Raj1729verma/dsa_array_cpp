#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array : ";
    cin>> n;
    int arr[n];
    cout<<"enter the element of array :";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int X;
    cout<<"enter the target  number X : ";
    cin>>X;
    int count =0;
    for(int i=0;i<n;i++){
        if(X<arr[i]) count++;
    }
    cout <<"total number of greater than "<<X<<" is " <<count;
    
return 0;
}