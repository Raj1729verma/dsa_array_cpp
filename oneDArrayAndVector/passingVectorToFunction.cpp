#include<bits/stdc++.h>
using namespace std;
void change(vector<int> a,int n){      //call by value
//void change(vector<int> &a,int n){      //call by referance
	a[0]=100;
	for(int i=0;i<n;i++){
		cout<<a.at(i)<<" ";
	}
	cout<<endl;
	return;
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
	cout<<"output:";
	for(int i=0;i<size;i++){     //(at) is output operator
									//alternate option is v[i]
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	change(v,size);
	for(int i=0;i<size;i++){
		cout<<v.at(i)<<" ";
	
	}
	cout<<endl;
}