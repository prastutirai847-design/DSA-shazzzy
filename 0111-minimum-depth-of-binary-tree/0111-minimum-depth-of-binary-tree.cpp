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
int len=0;
int fun(TreeNode* root){
    if(root==NULL)
    return 0;
   int x= fun(root->left);

   int y=  fun(root->right);
   
    if(x == 0) return 1 + y;
if(y == 0) return 1 + x;

return 1 + min(x,y);
    

    

}
    int minDepth(TreeNode* root) {
       return fun(root);
        
    }
};