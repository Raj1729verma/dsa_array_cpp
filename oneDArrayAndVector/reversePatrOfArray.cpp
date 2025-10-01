#include<iostream>
#include<vector>
using namespace std;
void reversePart(vector<int> &v,int st,int en){//st=staring number,en=ending number
    int i=st;
    int j=en;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++,j--;
    }
    return ;
}
int main(){
    vector<int> v;
    cout<<"Enter the size of array: ";
     int num;
     cin>>num;
     cout<<"Enter the element of array : ";
    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"output of given array"<<endl;
     for(int i=0;i<num;i++){
      cout<<v[i]<<",";
     }
     cout<<endl;
    cout<<"Enter the starting rotating index : ";
     int k;
     cin>>k;
     cout<<"Enter the last rotating index : ";
     int end;
     cin>>end;
    
   reversePart( v , k, end);//function calling
   // result
    for(int i=0;i<num;i++){
      cout<<v[i]<<",";
    }
   
     return 0;

}