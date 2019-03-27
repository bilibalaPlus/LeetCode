//
// Created by lx on 19-3-27.
//

#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pre = 0, post = nums.size()-1;
        while (pre <= post) {
            int pos = (pre + post) / 2;
            if (nums[pos] == target) {
                return pos;
            }
            else if (nums[pos] < target) {
                pre = pos + 1;
            }
            else if (nums[pos] > target) {
                post = pos - 1;
            }
        }
        return -1;
    }
};

