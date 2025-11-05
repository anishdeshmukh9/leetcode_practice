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
    int sum  =0; 
    

    void helper(TreeNode* root ,bool flag  ){
        if(root == NULL) return; 


        if(!root->left && !root->right && flag){
            sum += root->val; 
        }

       

        helper(root->left ,  true ); 
        helper(root->right , false); 


    }
    int sumOfLeftLeaves(TreeNode* root) {

        if(root->left == nullptr && root->right == nullptr ) return 0;
         helper(root ,  false); 

         return sum; 
    }
};