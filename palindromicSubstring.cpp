#include <string>

using namespace std;

class pSubstring {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0)
            return s;
        else
        {
            string sub_str = s.substr(0,1);
            int max_len = 1;
            for (int i = 0; i < s.size(); i++)
            {
                int j = 0;
                if ((i > 0) && (s[i]==s[i-1]))
                {
                    while ((i - 1 - j >= 0) && (i + j < s.size()) && (s[i-1-j]==s[i+j]))
                        j++;
                    if (j*2 > max_len)
                    {
                        max_len = j*2;
                        sub_str = s.substr(i-j, j*2);
                    }
                }
                j = 0;
                while ((i - j >= 0) && (i + j < s.size()) && (s[i-j]==s[i+j]))
                        j++;
                if ((j-1)*2+1 > max_len)
                {
                    max_len = (j-1)*2+1;
                    sub_str = s.substr(i-j+1,(j-1)*2+1);
                }
            }
            return sub_str;
        }
    }
};