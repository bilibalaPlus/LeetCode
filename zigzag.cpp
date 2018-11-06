#include <string>
#include <iostream>

using namespace std;

class zigzag {
private:
     string out_str = "";
public:
    string convert(string s, int numRows) {
        if (s.size() == 0)
            return s;
        if ((numRows <= 0) | (numRows==1))
            return s;
        if (numRows >= s.size())
            return s;

        for (int i = 0; i < numRows; i++)
        {
            int j = 0;

            while(2*(numRows-1)*j <= s.size())
            {
                if(2*(numRows-1)*j+i+1 <= s.size())
                {
                    out_str += s[2*(numRows-1)*j+i];
                }
                if ((i>0)&&(i<numRows-1)&&(2*(numRows-1)*(j+1)-(i-1) <= s.size()))
                {
                    out_str += s[2*(numRows-1)*(j+1)-i];
                }
                j++;
            }
        }

        return out_str;
    }
};