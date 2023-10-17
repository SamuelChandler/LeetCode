/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */
#include <vector> 
#include <math.h>

using namespace std;

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        if(nums.size() < 3){
                return false;
        }  

        
        int left = INT_MAX;
        int mid = INT_MAX;

        for(int i =0; i < nums.size(); i++){
            if(nums[i] > mid){
                return true;
            }
            else if (nums[i]>left && nums[i] < mid){
                mid = nums[i];
            }
            else if (left> nums[i]){
                left = nums[i];
            }
        }

        return false;
    }
};
// @lc code=end

