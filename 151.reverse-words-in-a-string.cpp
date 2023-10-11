/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */
#include <string>
#include <stack>
#include <sstream>

using namespace std;
// @lc code=start
class Solution {
public:
    string reverseWords(string s) {

        //setting up input, result, and stack for reversal 
        stringstream stream(s);
        stack<string> stc;
        string result = "";
        string temp;

        while(stream >> temp){
            stc.push(temp);
        }

        while(!(stc.empty())){
            result.append(stc.top());
            stc.pop();
            if(stc.empty()){
                return result;
            }
            else {
                result.append(" ");
            }
        }

        return result;




    }
};
// @lc code=end

