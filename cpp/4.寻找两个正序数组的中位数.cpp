/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
private:
    inline double help_findTurnNumber(vector<int> &nums1, int nums1f, int nums1l,
                                      vector<int> &nums2, int nums2f, int nums2l,
                                      int sub, bool flag)
    {
        if (nums1f + 1 == nums1l)
        {
            return nums2.at(nums2f + sub);
        }

        if (nums2f + 1 == nums2l)
        {
            return nums1.at(nums1f + sub);
        }

        int nums1m = (nums1f + nums1l) / 2, nums2m = (nums2f + nums2l) / 2;

        if (nums1.at(nums1m) < nums2.at(nums2m))
        {
            help_findTurnNumber(nums1, nums1f, nums1l,
                                nums2, nums2f, nums2l, sub, flag);
        }

        
    }

    double findTurnNumber(vector<int>& nums1, vector<int>& nums2,int sub)
    {
        bool flag=false;
        double result=help_findTurnNumber(nums1,0,nums1.size() ,
        nums2,0,nums2.size() ,
        sub,flag);

    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size=nums1.size()+nums2.size();
     
        double data= findTurnNumber(nums1,nums2,size/2);
        
        if(size%2==0)
        {

        }

        return data;

    }
};
// @lc code=end

