#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,X;
    cout<<"enter the size of array : ";
    cin >> N ;
    cout<<"enter the target element :";
    cin >> X;
    int arr[N];
    cout<<"enter the array element : ";
    for(int i=0;i<N ;i++){
        cin>>arr[i];
    }
    int count=-1;
    bool found = false; // Flag to indicate if X is not found
    for (int i = 0; i < N; i++) {
        count++;
        if (arr[i] == X) {
            cout<<"index is : "<<count<<" ";
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}