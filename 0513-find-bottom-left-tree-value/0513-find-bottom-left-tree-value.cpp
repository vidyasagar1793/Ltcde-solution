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
    vector<vector<int>> levelOrderTraversal(TreeNode* root)
    {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> level;

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp == NULL)
            {
                ans.push_back(level);
                level.clear();
                if(!q.empty()) q.push(NULL);
            }
            else
            {
                level.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }

    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> ans = levelOrderTraversal(root);

        return ans[ans.size()-1][0];
    }
};