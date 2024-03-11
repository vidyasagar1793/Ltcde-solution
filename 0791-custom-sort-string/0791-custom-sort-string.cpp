class Solution {
public:
    string customSortString(string order, string s) {
    unordered_map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    string ans="";
    for(int i=0;i<order.size();i++){
        if(mpp.find(order[i])!=mpp.end()){
            for(int j=0;j<mpp[order[i]];j++){
                ans+=order[i];
            }
            mpp.erase(order[i]);
        }
    }
    for(int i=0;i<s.size();i++){
        if(mpp.find(s[i])!=mpp.end())ans+=s[i];
    }
    return ans;
    }
};