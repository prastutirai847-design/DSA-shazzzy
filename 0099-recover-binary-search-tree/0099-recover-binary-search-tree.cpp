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
public: int gala=0;
TreeNode* prev=NULL;
TreeNode* g1first=NULL;
TreeNode* g2first=NULL;
TreeNode* g1sec=NULL;
TreeNode* g2sec=NULL;
void fun(TreeNode* root){
    if(root==NULL)
    return ;
    fun(root->left);
    if(prev==NULL)
    prev=root;
    else{
        if(root->val<prev->val){
            if(gala==0){
                g1first=prev;
                g1sec=root;
                gala++;
            }
            else{
                 g2first=prev;
                g2sec=root;
                gala++;

            }
            
        }
        prev=root;
       
        
    }
     fun(root->right);

}
    void recoverTree(TreeNode* root) {
        fun(root);
        if(gala==1){
            swap(g1first->val,g1sec->val);
        }
        else{
            swap(g1first->val,g2sec->val);
        }
        return;
    }
};