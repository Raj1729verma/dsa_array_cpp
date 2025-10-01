#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector <int> v;
    int num;
    cout<<"Enter the size of array: ";
    cin>>num ;
    cout<<"Enter the element of array :";
    for (int i=0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   
    int x=0;
    int y=0;
    for(int i=0;i<num;i++){
        int count=0;
        for(int j=i;j<num;j++){
             
            if(v[i]==v[j]){
                count++;
           }
         } 
     if(x<count){
         y=v[i];
        x=count;
      } 
           
     }
    cout<<x<<" "<<y;

    }
