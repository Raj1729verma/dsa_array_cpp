#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<int> v;
   
    cout<<"enter the size of vector/array : ";
    int size;
    cin>>size;
    cout<<"enter the element of vector/array : ";
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }

    //cheak palindrome or not usig "for loop"  .


    int count = 0;
    for(int i= 0,j = size-1; i < j ;i++ ,j--){
        if(v[i] == v[j])  count++;
    }
    if(count == (size/2)) cout<<"palindrome";
    else cout<<"not palindrome";


}