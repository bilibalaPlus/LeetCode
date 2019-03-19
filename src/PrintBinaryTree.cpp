//
// Created by lx on 19-3-19.
//

#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<string>> printTree(TreeNode* root) {
        int height = get_height(root);
        vector<vector<string>> res;
        int n = 0;
        for (int i = 0; i < height; i++) {
            n = 2*n + 1;
        }
        for (int i = 0; i < height; i++) {
            vector<string> line(n,"");
            res.push_back(line);
        }

        insert_node(res, root, 0, n-1, 0);

        return res;
    }

    int get_height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        else {
            return 1 + max(get_height(root->left), get_height(root->right));
        }
    }

    void insert_node(vector<vector<string>>& res, TreeNode* root, int begin, int end, int level) {
        if (root) {
            res[level][(begin+end)/2] = to_string(root->val);
            insert_node(res, root->left, begin, (begin+end)/2 - 1, level+1);
            insert_node(res, root->right, (begin+end)/2 + 1, end, level+1);
        }
    }
};