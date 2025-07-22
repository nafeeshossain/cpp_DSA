#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0; i<v.size()-1; i++){
        int min = INT_MAX, k;
        for(int j=i; j<v.size(); j++){
            if(v[j]<min) {min = v[j];
                k=j;}
        } swap(v[k],v[i]);
    }



    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }


}