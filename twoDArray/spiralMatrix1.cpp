#include<iostream>
using namespace std;
int main(){
    int n=3;
    int m=4;
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;
    int matrix[n][m];
    int count=1;
    //now formation of spiral matrix
    while(minr<=maxr && minc<=maxc){
        // right
        for(int i=minc;i<=maxc;i++){
            matrix[minr][i]=count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down
        for(int i=minr;i<=maxr;i++){
            matrix[i][maxc]=count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc)break;
        // left
        for(int i=maxc;i>=minc;i--){
            matrix[maxr][i]=count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc)break;
        // top
        for(int i=maxr;i>=minr;i--){
            matrix[i][minc]=count++;
        }
        minc++;
        if(minr>maxr || minc>maxc)break;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}