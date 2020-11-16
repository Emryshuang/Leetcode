/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
class Solution {

private:
    const vector<pair<int, string>> datas_dics = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}

    };

public:
    string intToRoman(int num) {
        string res="";

        for(auto p=datas_dics.begin();p!=datas_dics.end();p=next(p))
        {
            while (num >= p->first)
            {
                res += p->second;
                num -= p->first;
            }
        }

        return res;

    }
};
// @lc code=end

