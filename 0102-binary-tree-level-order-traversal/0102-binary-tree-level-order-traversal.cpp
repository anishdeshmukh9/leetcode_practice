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
     int lh , rh =0; 
    int calmaxheight(TreeNode* root){
        if(root == nullptr) return 0; 

        int lh = calmaxheight(root->left); 
        int rh = calmaxheight(root->right); 

        return max(lh , rh) +1; 
    }

    void helper(TreeNode*  root , int level , int total , vector<vector<int>> &ans ){

        if(root == nullptr ) return; 

        ans[level].push_back(root->val); 

        level++;

        helper(root->left , level , total , ans );
        helper(root->right , level , total , ans );



        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int total_levels = calmaxheight(root); 
        vector<vector<int>> ans(total_levels , vector<int>{}); 
        helper(root, 0 , total_levels , ans);

        return ans;


        
    }
};