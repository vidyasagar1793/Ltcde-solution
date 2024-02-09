class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
         unordered_map<int ,int> row;
         unordered_map<int ,int> col;


         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[0].size();j++){
                 if(mat[i][j]==0){
                     row[i]=1;
                     col[j]=1;
                 }
             }
         }


         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[0].size();j++){
                 if(row[i] || col[j]){
                     mat[i][j]=0;
                 }
             }
         }

        
    }
};