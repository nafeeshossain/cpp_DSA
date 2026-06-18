#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subarr(vector<vector<int>> &s, vector<int> &ans, vector<int> &v, int idx){
    if(v.size()==0){ 
        s.push_back(ans);
        return;
    }
    int n = v[idx];
    subarr(s,ans,v,idx+1);
    ans.push_back(n);
    subarr(s,ans,v,idx+1);

}

int main(){
    
}
