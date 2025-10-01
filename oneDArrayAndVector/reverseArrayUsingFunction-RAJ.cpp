
// FOR LOOP ARE USE 


#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &v,int len){
	int a=v.size();
	cout<<a<<endl;
	for(int i=0,j=a-1;i<=j;i++,j--){
		int temp=v[i];
		v[i]=v[j];
		v[j]=temp;
	}
	for(int i=0;i<a;i++){
		cout<<v[i]<<" ";
	}
	return ;
}
int main(){
	vector<int> v;
	int size;
	cout<<"enter the size of vector/array : ";
	cin>>size;
	cout<<"enter the elements of vector/array : ";
	for(int i=0;i<size ;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	//reverse
	reverse(v,size);
}

// WHILE LOOP ARE USE


// #include<bits/stdc++.h>
// using namespace std;
// void reverse(vector<int> &a, int size){
// 	int i=0;
// 	int j=size-1;
//     while(i<j){
// 		int temp=a[i];
// 		a[i]=a[j];
// 		a[j]=temp;
// 		i++,j--;
// 	}
// 	return ;
// }
// int main (){
// 	vector<int> v;
// 	int size;
// 	cout<<"Enter the size of vector: ";
// 	cin>>size ;
// 	cout<<"Enter the element of vector:";
// 	for(int i=0;i<size;i++){
// 		int x;
// 		cin>>x;
// 		v.push_back(x);
// 	}
//	int i=0;
//	int j=size-1;
//    while(i<j){
//		int temp=v[i];
//		v[i]=v[j];
//		v[j]=temp;
//		i++,j--;
//	}
//         reverse(v,size);
// 		for(int i=0;i<size;i++){
// 		cout<<v[i]<<" ";	
// }
// }
// 		cin>>x;
// 		v.push_back(x);
// 	}
// 	//reverse of vector
// 	reverse(v,size);
// }