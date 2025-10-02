#include<iostream>
using namespace std;
int main(){
    int row=3;
    int col=4;
    int minr=0;
    int maxr=row-1;
    int minc=0;
    int maxc=col-1;
    int matrix[row][col];
    int count = 1;
    // form spiral matrix
    while(minr<=maxr && minc<=maxc){
        // right fill
        for(int i=minc;i<=maxc;i++){
            matrix[minr][i]=count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        // down fill
        for(int i=minr;i<=maxr;i++){
            matrix[i][maxc]=count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        // lift fill
        for(int i=maxc;i>=minc;i--){
            matrix[maxr][i]=count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        // top fill
        for(int i=maxr;i>=minr;i--){
            matrix[i][minc]=count++;
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
    // display matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}