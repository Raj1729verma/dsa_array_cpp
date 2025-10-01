// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

//Algorithm

//step.1 let size of array =n then n -(k+1) ko subtract karo aur reversepart of array
// function (0 to n -(k+1))
//step.2 reversepart of array(n-k,n-1)
//step.3 reversepart of array(0,n-1)
void reverse(vector<int> &v,int st,int en){
   
    while(st<en){
        int temp=v[st];
        v[st]=v[en];
        v[en]=temp;
        st++,en--;
    }
    return ;
}
int main(){
    vector<int> v;
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    cout<<"Enter the element of array : ";
    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //output of array

     for(int i=0;i<num;i++){
      cout<<v[i]<<",";
     }
    cout<<endl;

    cout<<"Enter the rotating number: ";
    int k;
    cin>>k;
    int si=v.size();
    if(k>=si){
        k=k%si;
    }
    reverse( v ,0 ,si-1-k);
    reverse( v ,si-k,si-1);
    reverse( v ,0 ,si-1);
  
    for(int i=0;i<si;i++){
      cout<<v[i]<<",";
    }
   
     return 0;

}