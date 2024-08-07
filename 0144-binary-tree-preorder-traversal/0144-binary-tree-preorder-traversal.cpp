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
    // void preorder(TreeNode* root,vector<int>&ans)
    // {
    //     if(root==NULL)return;
    //     ans.push_back(root->val);
    //     preorder(root->left,ans);
    //     preorder(root->right,ans);
    // }
    vector<int> preorderTraversal(TreeNode* node) {
        // vector<int>ans;
        // preorder(root,ans);
        // return ans;
        vector<int>ans;
        
        if(node==NULL)return ans;
        
        stack<TreeNode*>st;
        
        st.push(node);
       
        
        while(!st.empty())
        {
            node=st.top();
            
            st.pop();
            ans.push_back(node->val);
            if(node->right!=NULL)
            {
                st.push(node->right);
            }
            
            if(node->left!=NULL)
            {
                st.push(node->left);
            }
        }
        return ans;
    }
};