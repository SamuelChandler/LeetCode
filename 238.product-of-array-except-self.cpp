/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */
#include <vector>

using namespace std; 
// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();

        vector<int> left(size);
        vector<int> right(size);
        vector<int> ans(size);

        left[0] = 1;
        right[size-1]= 1;

        for(int i = 1; i < size; i++){
            left[i] = left[i-1]*nums[i-1];
        }

        for(int i = size-2; i >= 0; i--){
            right[i] = right[i+1]*nums[i+1];
        }

        for(int i = 0; i < size; i++){
            ans[i] = left[i]*right[i];
        }
        return ans;
    }
};
// @lc code=end

