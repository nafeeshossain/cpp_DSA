#include<iostream>
#include<vector>
using namespace std;

    void swap(vector<int>&v,int i,int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    }

    void sortColors(vector<int>& nums) {
        for (int i = 0; i <= nums.size()-1; i++){
        for (int j = i; j <= nums.size()-1; j++){
            if(nums[i]>nums[j]) swap(nums,i,j);
            }
        }
    }
