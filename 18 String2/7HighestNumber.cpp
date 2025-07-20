#include<iostream>
#include<string>
#include<climits>
#include<vector>

using namespace std;
int main(){
    // vector<string> s(150,"0");
    // cout<<s[3]<<endl;
    vector<string>v = {"1240","3545","0009274","2454"};
    cout<<v.size()<<endl;
    int max = INT_MIN;
    int a;
    for(int i=0; i<v.size(); i++) {
        int x = stoi(v[i]);
        if(max < x) {max = x; a = i;}
    } cout<<v[a];

    
}