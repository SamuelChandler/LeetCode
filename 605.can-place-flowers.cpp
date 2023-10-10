/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int x = 0; x < flowerbed.size(); x++){
            if(n == 0){
                return true;
            }
            if(flowerbed.size()==1){
                if(n == 0){
                    return true;
                }
                else if(n == 1 && flowerbed.at(0) == 0){
                    return true;
                }

                return false;
            }
            if (x == 0 ){
                if(flowerbed.at(x) != 1 && flowerbed.at(x+1) != 1){
                    n--;
                    x++;
                }
                else if (flowerbed.at(x+1) == 1)
                {
                    x = x+2;
                }
                else{
                    x++;
                } 
            }
            else if (x == flowerbed.size()-1)
            {
                if(flowerbed.at(x) != 1 && flowerbed.at(x-1) != 1){
                    n--;
                }
            }
            else{
                //normal loop
                if(flowerbed.at(x) != 1 && flowerbed.at(x+1) != 1 && flowerbed.at(x-1) != 1){
                    n--;
                    x++;
                }
                else if (flowerbed.at(x+1) == 1)
                {
                    x = x++;
                }
                
            }
        }
        if(n <= 0){
            return true;
        }
        return false;
    }
};
// @lc code=end

