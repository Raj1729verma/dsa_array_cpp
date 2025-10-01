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
    int smax=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) max =arr[i];
    }
    for (int i=0;i<n;i++){
        if(smax<arr[i]&& arr[i] < max ) smax=arr[i];
    }
    cout <<" second max value in array : "<<smax;
    
return 0;
}