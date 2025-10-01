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
	int ans;
	for(int i=0;i<=size-1;i++){
		for(int j=1+i;j<size;j++){
			if(v[i] == v[j]) {
				ans=v[i];
				break;
			}
		}
	}
	cout<<"Non repeating first element: ";
	cout<<ans;
}