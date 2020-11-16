/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start

#include<limits>

class Solution {
public:
    int reverse(int x) {
        int result=0;

        while (x)
        {
            int pop=x%10;

            if(result>INT_MAX/10 || (result==INT_MAX/10&&pop>7))
            return 0;
            if(result<INT_MIN/10 || (result==INT_MIN/10&&pop<-8))
            return 0;
            result=result*10+pop;
            x=x/10;
        }
        
        return result;
    }
};
// @lc code=end

