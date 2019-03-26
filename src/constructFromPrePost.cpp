//
// Created by lx on 19-3-26.
//

#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        if (pre.size() == 0) return NULL;
        TreeNode* node = new TreeNode(pre[0]);
        if (pre.size() == 1) return node;
        vector<int> left_pre, left_post, right_pre, right_post;
        int left_pos = 1;
        for (int i = 1; i < pre.size(); i++) {
            if (pre[i] == post[post.size()-2]) {
                left_pos = i;
                break;
            }
        }
        for (int i = 1; i < left_pos; i++) left_pre.push_back(pre[i]);
        for (int i = left_pos; i < pre.size(); i++) right_pre.push_back(pre[i]);

        for (int i = 0; i < left_pos-1; i++) left_post.push_back(post[i]);
        for (int i = left_pos-1; i < post.size()-1; i++) right_post.push_back(post[i]);

        node->left = constructFromPrePost(left_pre, left_post);
        node->right = constructFromPrePost(right_pre, right_post);

        return node;
    }
};