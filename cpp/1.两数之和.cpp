/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> datas;
        vector<int> result;
        for (int i = 0; i != nums.size(); ++i)
        {
            int num=target-nums.at(i);
            auto p=datas.find(num);
            if(p!=datas.end())
            {
                result.push_back(p->second);
                result.push_back(i);
                return result;
            }
            else
            {
                datas.insert(make_pair(nums.at(i),i));
            }
            
        }
        return result;
    }

};
// @lc code=end

