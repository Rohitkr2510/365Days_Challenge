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
     void preorder(TreeNode *p,TreeNode *q,int  &flag)
    {
        if(p == NULL && q == NULL)
        {
            return ;
        }
        else if(p == NULL && q !=NULL)
        {
            flag = 1;
            return;
        }
        else if(p!=NULL && q == NULL)
        {
            flag = 1;
            return ;
        }

        if(p->val != q->val)
        {
            flag = 1;
            return;
        }

        preorder(p->left,q->left,flag);
        preorder(p->right,q->right,flag);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int flag = 0;

        preorder(p,q,flag);

        if(flag) 
        return false;
        return true;
        
    }
};