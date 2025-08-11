#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,4,4,4,4,4,4,5};
    int x = 4;
    int lo = 0;
    int hi = v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid]==x){
            if(v[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            } else { lo = mid+1; }
        } else if (v[mid]<x) lo = mid+1;
        else hi = mid - 1;
    } if(flag==false) cout<<-1;

}