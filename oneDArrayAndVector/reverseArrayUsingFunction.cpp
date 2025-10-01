#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &a, int size){
	int i=0;
	int j=size-1;
    while(i<j){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++,j--;
	}
	return ;
}
int main (){
	vector<int> v;
	int size;
	cout<<"Enter the size of vector: ";
	cin>>size ;
	cout<<"Enter the element of vector:";
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
//	int i=0;
//	int j=size-1;
//    while(i<j){
//		int temp=v[i];
//		v[i]=v[j];
//		v[j]=temp;
//		i++,j--;
//	}
        reverse(v,size);
		for(int i=0;i<size;i++){
		cout<<v[i]<<" ";	
}
}