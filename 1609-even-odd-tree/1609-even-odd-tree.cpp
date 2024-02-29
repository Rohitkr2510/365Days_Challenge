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
    bool isEvenOddTree(TreeNode* root) {
        // Check if the tree is empty
        if (root == nullptr) {
            return true; // Empty tree is an evenoldTree
        }

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<int> temp; // Temporary vector to store values level

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);

                // Add child node in queue
                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
            }

            // Check values at the current level based on the level's parity
            if (level % 2 == 0) {
                // For even levels, 
				//1) value should be odd   
				//2) 2) strictly increasing
                for (int i = 0; i < temp.size(); i++) {
                    if (temp[i] % 2 != 1 || (i > 0 && temp[i] <= temp[i - 1])) {
                        return false; // Not an even-odd tree
                    }
                }
            } else {
                // For odd levels, 
				//1) values should be even
				//2) strictly decreasing
                for (int i = 0; i < temp.size(); i++) {
                    if (temp[i] % 2 != 0 || (i > 0 && temp[i] >= temp[i - 1])) {
                        return false; // Not an even-odd tree
                    }
                }
            }

            level++; // Move to the next level
        }

        return true; // The tree is an even-odd tree
    }
};