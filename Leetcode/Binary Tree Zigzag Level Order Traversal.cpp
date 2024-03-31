// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

class Solution {
private:
    queue<TreeNode*> level;
    vector<vector<int>> res;
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int> ele;
        int count = 0;

        if(root)
        level.push(root);

        while(level.size() > 0) {
            int size = level.size();
            ele.clear();
            for(int i=0; i<size; i++) {
                root = level.front();
                ele.push_back(root->val);
                level.pop();

                if(root->left != nullptr)
                level.push(root->left);

                if(root->right != nullptr)
                level.push(root->right);
            }
            if(count % 2 != 0) reverse(ele.begin(), ele.end());
            res.push_back(ele);
            count++;
        }

        return res;
    }
};
