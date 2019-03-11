//
// Created by lx on 19-3-11.
//
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        string num;
        int flag = 0;
        string process = "begin";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ' && process == "begin") {
                continue;
            }
            if (str[i] != '+' && str[i] != '-' && (str[i] < '0' || str[i] > '9') && process == "begin") {
                return 0;
            }
            if (str[i] == '+' && process == "begin") {
                flag = 1;
                process = "num";
                continue;
            }
            if (str[i] == '-' && process == "begin") {
                flag = -1;
                process = "num";
                continue;
            }
            if (str[i] >= '0' && str[i] <= '9' && process == "begin") {
                flag = 1;
                process = "num";
                num.push_back(str[i]);
                continue;
            }
            if (str[i] >= '0' && str[i] <= '9' && process == "num") {
                num.push_back(str[i]);
            }
            else {
                break;
            }
        }

        if (num == "") return 0;

        int res = 0;
        for (int i = 0; i < num.length(); i++) {
            if (flag == 1 && res > 214748364) return 2147483647;
            if (flag == -1 && res > 214748364) return -2147483648;
            if (flag == 1 && num[i] - '0' > 2147483647 - res*10) return 2147483647;
            if (flag == -1 && num[i] - '0' >= 2147483648 - res*10) return -2147483648;
            res = res*10 + num[i] - '0';
        }

        return res*flag;
    }
};