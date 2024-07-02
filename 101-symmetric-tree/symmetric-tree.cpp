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
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left, root->right);
    }
    bool isSame(TreeNode* l, TreeNode* r) {
        if(l==NULL && r==NULL) {
            return true;
        }
        else if(l==NULL && r!=NULL) {
            return false;
        }
        else if(l!=NULL && r==NULL) {
            return false;
        }
        else {
            return (l->val==r->val) && isSame(l->left, r->right) &&
            isSame(l->right, r->left);
        }
    }
};