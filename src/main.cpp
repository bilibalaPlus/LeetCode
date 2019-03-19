#include "PrintBinaryTree.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    TreeNode root(5);
    root.left = new TreeNode(3);
    root.right = new TreeNode(6);
    root.left->left = new TreeNode(2);
    root.left->right = new TreeNode(4);
    root.right->right = new TreeNode(7);

    sl.printTree(&root);

    return 0;
}
