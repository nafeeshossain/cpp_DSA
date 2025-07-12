#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void swap(vector<int>& v, int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void sort(vector<int>& v) {
    int low = 0, mid = 0, high = v.size() - 1;

    while (mid <= high) {
        if(v[mid]==2) { 
            swap(v, mid, high);
            high--;
        } else if (v[mid] == 0) {
            swap(v, mid, low);
            low++;
            mid++;
        } else if (v[mid] == 1) {
            mid++;
        } 
    }
}

int main() {
    vector<int> v = {2, 1, 2, 0, 1, 0};

    Display(v);
    sort(v);
    Display(v);

    return 0;
}
