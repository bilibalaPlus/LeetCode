#include <string>
#include <iostream>

using namespace std;

class longestSubstring {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if (len == 0)
            return 0;
        int hash_table[128] = {};
        int head  = 0;
        int tail = 0;
        int max_sublen = 0;
        for (tail = 0; tail < len; tail++)
        {
            if (hash_table[s[tail]] == 0)
            {
                hash_table[s[tail]]++;
            }
            else
            {
                if (tail - head > max_sublen)
                    max_sublen = tail - head;
                while (s[head] != s[tail])
                {
                    hash_table[s[head]] = 0;
                    head++;
                }
                head++;
            }
        }
        if (tail - head > max_sublen)
            max_sublen = tail - head;
        return max_sublen;
    }
};