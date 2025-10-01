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
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) max =arr[i];
    }
    cout <<"max value in array : "<<max;
    
return 0;
}