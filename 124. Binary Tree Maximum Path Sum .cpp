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
    int max_sum=INT_MIN;
    int max_gain(TreeNode* root)
    {
        if(!root)return 0;
        
        //compare with 0, cause we don't want negative
        int l=max(max_gain(root->left),0);
        int r=max(max_gain(root->right),0);
        int new_price=root->val+l+r;//this node be the turning point
        
        max_sum=max(max_sum,new_price);//max_sum is the answer
        
        return root->val+max(l,r);//the max value when you through this node, only can choice one side(left or right)
    }
    int maxPathSum(TreeNode* root) {
        max_gain(root);
        return max_sum;
    }
    
};
