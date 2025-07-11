#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(6);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    
    v.at(1) = 1; //use of at
    // cout<<v[2];

    for(int i = 0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    } cout<<endl;

    sort(v.begin(),v.end());

    for(int i = 0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }

    return 0;
}