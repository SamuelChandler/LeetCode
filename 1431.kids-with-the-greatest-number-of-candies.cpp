/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */
#include <vector>
#include <algorithm>

using namespace std;
// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // get the largest amount of candies 
        int MC = *max_element(candies.begin(), candies.end());
        vector<bool> result; 

        // traversing and comparing after candies have been added 
        for(int i =0; i < candies.size();i++){
            if(candies.at(i)+extraCandies >= MC){
                result.emplace_back(true);
            }
            else{
                result.emplace_back(false);
            }
            
        }
        return result;
    }
};
// @lc code=end

