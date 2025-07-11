#include<iostream>
#include<vector>

using namespace std;

void chnage(vector<int>&w){ //without & it only pass the value
    w.at(0) = 100;
    return;
}

int main(){
    vector<int> v;

    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);

    for(int i = 0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    } cout<<endl;

    chnage(v);
    
    for(int i = 0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }

    return 0;
}