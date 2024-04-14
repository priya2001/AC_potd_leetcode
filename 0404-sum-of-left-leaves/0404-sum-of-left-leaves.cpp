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
    int solve(TreeNode* curr,bool itself)
    {
        if(curr==NULL)
        {
            return 0;
        }
        if(curr->left==NULL&&curr->right==NULL&&itself==true)
        {
            return curr->val;
        }
        return solve(curr->left,true)+solve(curr->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        return solve(root,false);
        
    }
};