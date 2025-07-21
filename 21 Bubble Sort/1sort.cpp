#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>v = {1,5,4,2,3};
    sort(v.begin(),v.end());
    cout<<v[0]<<" "<<v[4];

}