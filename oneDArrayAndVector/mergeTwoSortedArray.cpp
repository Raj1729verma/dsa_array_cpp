#include<iostream>
#include<vector>
using namespace std;
int main (){
    int u[4]={6,3,2,8};
    int v[5]={5,2,0,8,6};
    int n=9;
    int w[9]={6,3,2,8,5,2,0,8,6};
    for(int i=0;i<9;i++){
        for(int j=i;j<9;j++){
            if(w[i]>w[j]){
                int temp=w[i];
                w[i]=w[j];
                w[j]=w[i];
            }
        }
         cout<<w[i]<<",";
    }


}