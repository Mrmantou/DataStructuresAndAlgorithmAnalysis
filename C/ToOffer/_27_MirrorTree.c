#include <stdio.h>

/**
 * Definition for a binary tree node.
 */
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *mirrorTree(struct TreeNode *root)
{
    if (root != NULL)
    {
        mirrorTree(root->left);
        mirrorTree(root->right);

        struct TreeNode *node = root->left;
        root->left = root->right;
        root->right = node;
    }

    return root;
}

int main()
{
    return 0;
}