#include <string>
#include <iostream>

using namespace std;

class reverseInt {
public:
    string re_str(string s)
    {
        string out_str = s;
        for (int i = 0; i < out_str.size(); i++)
        {
            if (i >= out_str.size() - i - 1)
                break;
            char tmp = out_str[i];
            out_str[i] = out_str[s.size() - i - 1];
            out_str[s.size() - i - 1] = tmp;
        }
        return out_str;
    }
    long int to_int(string n)
    {
        cout << n.size() << endl;
        long int out_n = 0;
        for(int i = 0; i < n.size(); i++)
        {
            out_n = out_n * 10 + int(n[i]) - int('0');
            cout << i << " " << out_n << endl;
        }
        if (out_n > 2147483648) out_n = 0;
        return out_n;
    }
    int reverse(int x) {
        string sn = to_string(x);
        if (x == 0)
        {
            return x;
        }
        for (int i = sn.size()-1; i > 0; i++)
        {
            if (sn[i]=='0')
                sn.pop_back();
            else
                break;
        }
        if (sn[0]=='-')
        {
            sn = re_str(sn);
            sn.pop_back();
            return -to_int(sn);
        }
        else
        {
            sn = re_str(sn);
            return to_int(sn);
        }
    }
};