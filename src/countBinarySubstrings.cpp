//
// Created by lx on 19-3-20.
//

#include <string>

using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0;
        char pre = s[0];
        int pre_cnt = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == pre) {
                cnt ++;
            }
            else {
                pre = s[i];
                res += min(cnt, pre_cnt);
                pre_cnt = cnt;
                cnt = 1;
            }
        }
        res += min(cnt, pre_cnt);

        return res;
    }
};
