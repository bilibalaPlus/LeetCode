//
// Created by lx on 19-3-20.
//

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        map<pair<int, int>, int> next;
        next[pair<int, int>(0,1)] = 1;
        next[pair<int, int>(1,0)] = 1;
        int res = matrix[0][0];

        for (int i = 1; i < k; i++) {
            int min_val = matrix[matrix[0].size()-1][matrix[0].size()-1];
            pair<int, int> pos(matrix[0].size()-1,matrix[0].size()-1);
            for (auto p : next) {
                if (matrix[p.first.first][p.first.second] <= min_val && (p.first.first < pos.first || p.first.second < pos.second)) {
                    pos = p.first;
                    min_val = matrix[p.first.first][p.first.second];
                }
            }
            res = min_val;
            next.erase(pos);
            if (pos.first+1 < matrix[0].size()) next[pair<int,int>(pos.first+1,pos.second)] = 1;
            if (pos.second+1 < matrix[0].size()) next[pair<int,int>(pos.first,pos.second+1)] = 1;
        }

        return res;
    }
};
