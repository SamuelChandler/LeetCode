/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */
#include <string>
#include <stack> 
#include <queue>

using namespace std;
// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vowels;
        queue<int> place;

        //traverse sting for all vowels and their location
        for(int i = 0; i < s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowels.push(s[i]);
                place.push(i);
            }
        }

        //change each value through poping
        while(!place.empty()){
            s.at(place.front()) = vowels.top();
            place.pop();
            vowels.pop();
        }
        return(s);  
    }
};
// @lc code=end

