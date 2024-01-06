class Solution {
public:
     int lengthOfLIS(vector<int>& v) {
        int n = v.size();
        vector<int> temp;
        temp.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i] > temp.back()){
                temp.push_back(v[i]);
            }
            else{
                int ind = lower_bound(temp.begin(),temp.end(),v[i]) - temp.begin();
                temp[ind] = v[i];
            }
        }
        return temp.size();
    }
};
