#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);
	v.push_back(3);
	cout<<v.at(0)<<endl;
	cout<<v.at(1)<<endl;
	cout<<v.at(2)<<endl;
	cout<<v.at(3)<<endl;
}