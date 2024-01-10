class Solution {
public:
    int amountOfTime(TreeNode* root, int start) {
        int time = 0;    
        
        unordered_map<TreeNode*,TreeNode*> parent;
        FindParent(root,parent);
        
        TreeNode* target = Find(root,start);
        
        queue<TreeNode*> q;
        unordered_map<TreeNode*, bool> vis;       

        q.push(target);
        vis[target] = true;

        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                auto front = q.front();
                q.pop();
                vis[front] = true;

                if(front->left and !vis[front->left])
                {
                    q.push(front->left);
                    vis[front->left] = true;
                }

                if(front->right and !vis[front->right])
                {
                    q.push(front->right);
                    vis[front->right] = true;
                }

                if(parent[front] and !vis[parent[front]])
                {
                    q.push(parent[front]);
                    vis[parent[front]] = true;
                }
            }
            time++;
        }
        return time-1;
    }    
private:
    TreeNode* Find(TreeNode* node, int key) 
    {
        if(node== NULL) return NULL;

        if(node->val == key) return node;        
        else {
            TreeNode* foundNode = Find(node->left,key);
            if(!foundNode) foundNode = Find(node->right,key);              
            return foundNode;
        }
    }
    void FindParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent)
    {
        if(!root)return;
        if(root->left) parent[root->left] = root;     
        if(root->right) parent[root->right] = root;
        FindParent(root->left,parent);
        FindParent(root->right,parent);
    }
};