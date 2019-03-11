//
// Created by lx on 19-3-11.
//
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> res_vec;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> res;

        for (int i = 0; i < n; i++) {
            string s;
            for (int j = 0; j < n; j++) s.push_back('o');
            res.push_back(s);
        }
        try_line(res, 0, n);

        return res_vec;
    }

    void try_line(vector<string> res, int level, int n) {
        for (int i = 0; i < n; i++) {
            if (res[level][i] == 'o') {
                if (level == n - 1) {
                    res[level][i] = 'Q';
                    res_vec.push_back(res);
                    break;
                }
                vector<string> tmp_res = res;
                tmp_res[level][i] = 'Q';
                for (int k = 0; k < n; k++) {
                    if (tmp_res[level][k] != 'Q') tmp_res[level][k] = '.';
                }
                for (int k = level+1; k < n; k++) {
                    tmp_res[k][i] = '.';
                    if (i-k+level >= 0) tmp_res[k][i-k+level] = '.';
                    if (i+k-level < n) tmp_res[k][i+k-level] = '.';
                }
                try_line(tmp_res, level+1, n);
            }
        }
    }
};
