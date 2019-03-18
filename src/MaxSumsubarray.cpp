//
// Created by lx on 19-3-13.
//

#include <vector>

using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {

        return maxSub(A);
    }

    int maxSub(vector<int>& A) {
        int sum = 0;
        int max_pre = 0;
        int max_res = A[0];
        int min_pre = 0;
        int min_res = A[0];
        for (int i = 0; i < A.size(); i++) {
            sum += A[i];
            int max_step = max(max_pre+A[i],A[i]);
            if (max_step > max_res) max_res = max_step;
            max_pre = max_step;
            int min_step = min(min_pre+A[i],A[i]);
            if (min_step < min_res) min_res = min_step;
            min_pre = min_step;
        }
        if (max_res < 0) {
            return max_res;
        }
        return max_res>sum-min_res?max_res:sum-min_res;
    }
};