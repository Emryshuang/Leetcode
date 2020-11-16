/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */


// @lc code=start
class Solution {

public:
    int maxArea(vector<int>& height) {

        int res=0;
        int temp;

        auto left=height.begin(),right=--height.end();

        while (left<right)
        {         
           if(*left < *right)
           {
               temp=static_cast<int>(right-left)*(*left);

               left=next(left);
           }
           else
           {
                temp=static_cast<int>(right-left)*(*right);
               right=prev(right);
           }

           res=max(res,temp);         

        }
        return res;     
    }
};
// @lc code=end

