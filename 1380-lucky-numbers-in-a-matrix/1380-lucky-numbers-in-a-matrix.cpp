class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        vector<int>min_row(m);
         for(int i=0;i<m;i++){
              min_row[i] = *min_element(mat[i].begin(),mat[i].end());
         }

         vector<int>max_col(n,INT_MIN);

         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            max_col[j]=max(max_col[j],mat[i][j]);
         }

         vector<int> ans;

         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==min_row[i] && mat[i][j]==max_col[j])

                ans.push_back(mat[i][j]);
            }
         }
         return ans;
        }
};