#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<char> &v,int st,int en){
   
    while(st<en){
        int temp=v[st];
        v[st]=v[en];
        v[en]=temp;
        st++,en--;
    }
    return ;
}
int main(){
    vector<char> v;
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    cout<<"Enter the element of array : ";
    for(int i=0;i<num;i++){
        char x;
        cin>>x;
        v.push_back(x);
    }
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