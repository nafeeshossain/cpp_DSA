#include<iostream>
#include<vector>

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
    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl;

    for(int j=n-1; j>=0; j--){
        for(int i=0; i<j; i++){
            if(v[i]>v[i+1]){
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }



    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }


}