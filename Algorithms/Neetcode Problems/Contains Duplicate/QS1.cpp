/*

Model  1 Solution: 

Problem Statement: 

    Given an integer array nums, return true if any value appears
    more than once in the array, otherwise return false

*/



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){return false;}
        else{
        std::sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1; i++){

            if(nums[i]==nums[i+1]){
           return true;
            }
         
        }
        }
        return false;
    }
};