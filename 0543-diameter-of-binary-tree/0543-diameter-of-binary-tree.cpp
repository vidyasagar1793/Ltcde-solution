class Solution {

int d=0;
  int solve(TreeNode* root){
    if(root==NULL){
         return 0;
     } 
   
    int l=solve(root-> left);
    int r= solve(root->right);
  
    d= max(d,l+r);
    return 1+max(l,r);
   
  }

public:
    int diameterOfBinaryTree(TreeNode* root) {
       solve(root);

       return d;
    


    }
};