#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    int x = 1;

    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);

    int index = -1;
    int count = 0;
    for (int i = v.size()-1; i >= 0; i--){
        count++;
        if(x==v.at(i)){index = i;
        break;
    }

    }

    cout<<index<<" Loop Running "<<count<<" times.";
    
    


    return 0;
}