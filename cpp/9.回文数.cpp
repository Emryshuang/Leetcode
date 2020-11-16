/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {

        if(x==0)
        {
            return true;
        }

        if(x<0 || x%10==0)
        {
            return false;
        }

        int reverted=0;

        while (reverted<x)
        {
            int temp=x%10;
            reverted=reverted*10+temp;
            x/=10;
        }


        return x==  reverted || x==reverted/10;     


    }
};
// @lc code=end

