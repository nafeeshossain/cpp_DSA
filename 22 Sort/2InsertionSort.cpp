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
    
    for(int i=1; i<v.size(); i++){
        int k = i;
        for(int j=i-1; j>=0; j--){
            if(v[k]<v[j]) {swap(v[k],v[j]);
                k--;
            }
            else break;
        }
        
    
    }



    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }


}