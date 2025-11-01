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

    long prev  = LLONG_MIN; 
    bool flag = true;

    void traverse(TreeNode* root){

        if(root == NULL ) return; 

        traverse(root->left); 
        if(prev >= root->val){
            flag  = false;
        }
        else{
            prev  = root->val;
        }
        traverse(root->right);
    }

    
    bool isValidBST(TreeNode* root) {

        traverse(root);
        return flag; 


        
    }
};