#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int> &v){
    int n=v.size();
    int low=0;
     int mid=0;
      int high=n-1;
      while(mid<=high){
        if(v[mid]==2){
            int temp=2;
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        if(v[mid]==0){
            int temp=0;
            v[mid]=v[low];
            v[low]=temp;
            low++,mid++;
        }
        if(v[mid]==1){
            mid++;
        }
   }
    return ;
}
int main (){
   vector<int> v;
   int size;
   cout<<"Enter the size of array :";
   cin>>size;
   cout<<"Enter the element of array :";
   for(int i=0;i<size;i++){
    int x;
    cin>>x;
    v.push_back(x);

   }
   sorting(v);
     for(int i=0;i<size;i++){
          cout<<v[i]<<" ";
        }
}