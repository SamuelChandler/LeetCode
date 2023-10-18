/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */
#include <vector>
#include <string>

using namespace std;
// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        
        string result;
        char current;
        int occurrance =0;

        for(int i =  0; i < chars.size();i++){
            if(chars[i] == current){
                occurrance++;
            } else {
                result.append(current+(to_string(occurrance)));
                current = chars[i];
                occurrance = 1;
            }
        }
        for(int j =  0; j < result.size();j++){
            chars.at(j) = result.at(j);
        }
        return result.size();
    }
};
// @lc code=end

