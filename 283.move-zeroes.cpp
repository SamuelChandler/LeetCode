/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

#include <vector>

using namespace std;
// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int j = 1;

        for(int i = 0; j < nums.size();){
            if(nums[i]==0 && nums[j] == 0){
                j++;
            } else if (nums[i]==0){
                nums.at(i) = nums[j];
                nums.at(j) =0;
                i++;
                j++;
            }else{
                i++;
                j++;
            }
        }
        
    }
};
// @lc code=end

