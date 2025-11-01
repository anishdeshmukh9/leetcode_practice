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

    vector<int> ans;
    unordered_map<int , int> map;
 
    void  traverse(TreeNode* root){

        if(root == NULL ) return; 

        traverse(root->left);

        map[root->val]++;




        traverse(root->right); 


    }
    vector<int> findMode(TreeNode* root) {

        traverse(root); 

        int maxf = 0; 
        for(auto a : map){

            maxf = max(maxf , a.second); 

        }
        for(auto b : map){
            if(maxf  == b.second){
                ans.push_back(b.first);
            }
        }



        return ans; 




        
    }
};