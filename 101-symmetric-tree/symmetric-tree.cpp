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
    bool ruler(TreeNode* L, TreeNode* R){
        if(!L && !R){
            return true;
        }
        if(!L || !R){
            return false;
        }
        
        return (L->val == R->val) && ruler(L->left,R->right) && ruler(L->right,R->left);



        

        
    }
    bool isSymmetric(TreeNode* root) {
        return ruler(root->left,root->right);
    }
};