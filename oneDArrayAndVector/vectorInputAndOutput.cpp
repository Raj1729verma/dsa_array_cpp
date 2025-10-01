#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int size;
	cout<<"Enter the size of vector : ";
	cin>>size;
	cout<<"Enter the element  vector :";
    for(int i=0;i<size;i++){
    	int x;
    	cin>>x;
    	v.push_back(x);
	}
	cout<<"output :";
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
}