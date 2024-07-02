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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        
        else {
            return preorderTraverse(root, 0, targetSum);
        }
        
    }

    bool preorderTraverse(TreeNode* root, int stp, int final) {
        if(root->left == NULL && root->right == NULL) {
            if((stp + root->val) == final) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            stp = stp+root->val;
            bool result = false;
            if(root->left !=NULL){
                result = result || preorderTraverse(root->left, stp, final);
            }
            if(root->right !=NULL){
                result = result || preorderTraverse(root->right, stp, final);
            }
            return result;
            
        }
    }
};