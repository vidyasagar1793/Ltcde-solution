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
long long sum=0;
   void solve(TreeNode* root, int ans){
   

    if(root->left==NULL && root->right==NULL){
        ans=ans*10 + root->val;
        sum+=ans;
        return;
    }
    if(root==NULL){
    return ;
   }

    ans = ans*10+ root->val;
    if(root->left){
        solve(root->left,ans);
    }
      if(root->right){
        solve(root->right,ans);
    }
}

    int sumNumbers(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return sum;
    }
};