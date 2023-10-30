/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */
#include <vector>

using namespace std;
// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int idLeft;
        int idRight = height.size()-1;
        int maxValue = 0;
        int currValue = 0; //used to store the temp value of the 

        for(idLeft = 0; idLeft != idRight ; idLeft++){
            
            if(height.at(idRight) >= height.at(idLeft)){
                currValue = (height.at(idLeft)) * ( idRight - idLeft);
            }
            else{
                currValue = (height.at(idRight)) * (idRight - idLeft);
            }

            if(currValue > maxValue){
                maxValue = currValue;
            }

            idRight--;
            if(idLeft != idRight){
                if(height.at(idRight) >= height.at(idLeft)){
                currValue = (height.at(idLeft)) * ( idRight - idLeft);
                }
                else{
                   currValue = (height.at(idRight)) * (idRight - idLeft);
                }

                if(currValue > maxValue){
                    maxValue = currValue;
                }
            }
        }

        return maxValue;
    }
};
// @lc code=end

