/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */
#include <string>

using namespace std;
// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        for(int i = 0; i<word1.length() || i <word2.length(); i++){
            if(i<word1.length()){
                result.append(1,word1[i]);
            }
            if(i<word2.length()){
                result.append(1,word2[i]);
            }
        }

        return(result);
    }
};
// @lc code=end

