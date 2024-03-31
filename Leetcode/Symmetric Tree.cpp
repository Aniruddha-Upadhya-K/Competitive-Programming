// https://leetcode.com/problems/symmetric-tree/

class Solution {
private: 
    bool res = true;
public:
    bool isSymmetric(TreeNode* root) {
        preorder(root->left, root->right);
        return res;
    }

    void preorder(TreeNode* left, TreeNode* right) {
        if(!res) return;

        if(left == nullptr && right == nullptr) {
            return;
        } else if(left == nullptr || right == nullptr) {
            res = false;
            return;
        }

        if(left->val != right->val) {
            res = false;
            return;
        }
        preorder(left->left, right->right);
        preorder(left->right, right->left);
    }
};
