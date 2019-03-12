#include "MaxWidthofBT.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    TreeNode* tree = new TreeNode(1);
    tree->left = new TreeNode(3);
    tree->right = new TreeNode(2);
    tree->left->left = new TreeNode(5);
    tree->left->right = new TreeNode(3);
    tree->right->right = new TreeNode(9);

    cout << sl.widthOfBinaryTree(tree) << endl;

    return 0;
}
