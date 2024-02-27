/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int Height(TreeNode* root, int* maxHDiff)
    {
        if(root == NULL) return 0;
        int lh = Height(root->left,maxHDiff);
        int rh = Height(root->right,maxHDiff);

        if(lh+rh > *maxHDiff)
        *maxHDiff = lh+rh;
        return max(lh,rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {

        int maxHDiff =0 ;

        int h = Height(root,&maxHDiff);

        return maxHDiff;
        
    }
};