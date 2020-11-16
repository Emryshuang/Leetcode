/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start

#include<algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int result=0;
        std::set<char> datas;
        while (j < s.size())
        {
            if (datas.find(s.at(j)) == datas.end())
            {
                datas.insert(s.at(j++));
                continue;
            }
            result = std::max(j-i,result);
            datas.erase(s.at(i++));
        }

        return std::max(j-i,result);

    }
};
// @lc code=end

