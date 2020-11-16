/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {

private:
    string state = "start";
    long long ans;
    int signs;

    unordered_map<string, vector<string>> tables = {
        {"start",
         {"start", "signs", "numbers", "end"}},
        {"signs",
         {"end", "end", "numbers", "end"}},
        {"numbers",
         {"end", "end", "numbers", "end"}},
        {"end",
         {"end", "end", "end", "end"}}};

    int  get_col(char ch)
    {
        if (isspace(ch))
            return 0;
        if (ch == '+'|| ch == '-')
            return 1;
        if (isdigit(ch))
            return 2;
        return 3;
    }
    
    void get(char ch)
    {
        state=tables[state][get_col(ch)];
        if(state=="signs")
        {
            signs = ch == '+' ? 1 : -1;
        }
        if(state=="numbers")
        {
            ans=ans*10+(ch-'0');
            ans = signs == 1 ? min(ans, (long long)INT_MAX) : min(ans, -(long long)INT_MIN); 
        }
        if(state=="end")
        {
            return;
        }
    }

public:
    int myAtoi(string s)
    {        
        ans=0;
        signs=1;
        for(char ch:s)
        {
            get(ch);
        }
        return ans*signs;
    }
};
// @lc code=end

