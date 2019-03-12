//
// Created by lx on 19-3-11.
//
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long>> node_que;
        node_que.push(pair<TreeNode*,long>(root,1));
        long max_width = 0;
        while (!node_que.empty()) {
            long b = node_que.front().second;
            long e = node_que.back().second;
            max_width = max(e-b+1, max_width);
            for (int i = 0, l = node_que.size(); i < l; i++) {
                TreeNode* n = node_que.front().first;
                long id = node_que.front().second;
                if (n->left) {
                    node_que.push(pair<TreeNode*,long>(n->left,id*2));
                }
                if (n->right) {
                    node_que.push(pair<TreeNode*,long>(n->right,id*2+1));
                }
                node_que.pop();
            }
        }

        return int(max_width);
    }
};