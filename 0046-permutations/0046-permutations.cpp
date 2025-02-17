class Solution {
public:
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>>v;
        sort(arr.begin(),arr.end());
     
        v.push_back(arr);
        while(next_permutation(arr.begin(),arr.end())){
         
               v.push_back(arr); 
            
        }
        return v;  
    }
};