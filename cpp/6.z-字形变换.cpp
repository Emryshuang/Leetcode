/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {

        vector<string>datas(min(numRows,int(s.size())));
        
        if(datas.size()==1)
        {
            return s;
        }


        bool down=true;

        string res;
        int turn=0;

        for(char ch:s)
        {
            datas[turn]+=ch;
            if(down)
            {
                if(turn+1==datas.size())
                {
                    down=false;
                    --turn;
                    continue;
                }
                ++turn;
            }
            else
            {
                if(0==turn)
                {
                    down=true;
                    ++turn;
                    continue;
                }
                --turn;
            }
            
        }

        for (string& data:datas)
        {
            res+=data;
        }
        return res;     


    }
};
// @lc code=end

