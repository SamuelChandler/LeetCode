/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */
#include <string>

using namespace std;

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int S_place = 0;
        
        if(s.size() > t.size()){
            return false;
        }
        else if(s.size() == 0){
            return true;
        }

        for(auto &ch : t){
            if(ch == s.at(S_place)){
                S_place++;
            }
            if(S_place == s.size()){
                return true;
            }
        }

        return false;

    }
};
// @lc code=end

