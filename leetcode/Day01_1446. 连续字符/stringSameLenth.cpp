class Solution {
public:
    int maxPower(string s) {
        char tmp = ' ';
        int maxCnt=0,cnt=0;
        for(auto i:s)
        {
            if(i != tmp)
            {
                cnt = 0;
                tmp = i;
            }
            cnt++;
            maxCnt = max(maxCnt,cnt);
        }
        return maxCnt;

    }
};