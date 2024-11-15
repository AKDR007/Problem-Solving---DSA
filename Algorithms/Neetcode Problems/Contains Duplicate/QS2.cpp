/*

Model 2 Solution:

Problem Statement: 

    Given an integer array nums, return true if any value appears
    more than once in the array, otherwise return false

*/


#include <iostream>
#include <vector>
#include <unordered_set> // For set-based approach

using namespace std;


class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;  // Found a duplicate
            }
            seen.insert(num);
        }
        return false;  // No duplicates found
    }
};


