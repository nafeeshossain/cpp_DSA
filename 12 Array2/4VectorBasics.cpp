#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; //No need to mention the size 

    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(6);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    
    return 0;
}