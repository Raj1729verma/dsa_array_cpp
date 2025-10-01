#include<iostream>
#include<vector>
using namespace std;
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
	int idx=-1;
	int num;
	cout<<"Target number: ";
	cin>>num;
	for(int i=size-1;i>=0;i--){
		if(num==v[i]){
			idx=i;
			break;
		}
	}
	
	cout<<"last index: "<<idx;
	
}