/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
        {
			return 0;
        }
        int dleft = maxDepth(root->left);
        int dright = maxDepth(root->right);
		if (dleft > dright)
		{
			return dleft+1;
		}
		else return dright+1;
    }
};