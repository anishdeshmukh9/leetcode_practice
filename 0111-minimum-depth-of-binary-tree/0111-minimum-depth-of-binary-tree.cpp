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

    int mind = 0;
    int maxd = 0;

    int helpermin(TreeNode* root){
     if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;

    if(root->left == NULL) return helpermin(root->right) + 1;
    if(root->right == NULL) return helpermin(root->left) + 1;

    return min(helpermin(root->left), helpermin(root->right)) + 1;
    } 
     int helpermax(TreeNode* root){
        if(root == NULL) return 0; 
        
        int lh = helpermax(root->left);
        int rh = helpermax(root->right);

          return  max(lh , rh ) + 1;
    } 
    int minDepth(TreeNode* root) {
        mind = helpermin(root);
        maxd = helpermax(root); 

        if(mind == 1) return maxd;

        return mind;
    }
};