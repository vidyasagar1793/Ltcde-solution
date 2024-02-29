class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        queue<TreeNode*> q;
        q.push(root);
        int flag=1;
        while(!q.empty()){

            int n=q.size();
            int prev;


            if(flag){
                prev=INT_MIN;
            }
            else{
                prev=INT_MAX;
            }


            for(int i=0;i<n;i++){
                TreeNode* front=q.front();
                q.pop();
                if(flag){
                    if(front->val%2==0 || front->val<=prev){
                        return false;
                    }
                }
                else{
                    if(front->val%2!=0  || front->val>=prev){
                        return false;
                    }
                }

                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
                prev=front->val;
            }

            flag= !flag;

        }

        return true;

    }
};