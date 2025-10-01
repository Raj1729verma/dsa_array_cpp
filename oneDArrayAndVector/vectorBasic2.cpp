#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(9);
    v.push_back(12);
    v.push_back(92);
    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //delete function
    v.pop_back();
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //inserting function
    v.insert(v.begin()+2,5);
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //deleting function
    v.erase(v.begin()+1);
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //All vector deleting function
    v.clear();
     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}