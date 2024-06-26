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
    void preorder(TreeNode* root, vector<int>& array)
    {
        if(root == NULL)
        return ;
        preorder(root->left,array);
        array.push_back(root->val);
        preorder(root->right,array);

    }

    TreeNode * BST(vector<int>& array, int low, int high)
    {
        if(low > high || low <0 || high>= array.size())
        return NULL;
        int mid = (low + high)/2;
        TreeNode* root = new TreeNode(array[mid]);
        root->left = BST(array,low,mid-1);
        root->right = BST(array,mid+1,high);
        // cout<<root->val<<endl;
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> array;
        preorder(root,array);

        return BST(array,0,array.size()-1);
        
    }
};