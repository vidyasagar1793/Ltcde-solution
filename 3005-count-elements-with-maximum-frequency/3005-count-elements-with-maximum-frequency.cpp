class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0;
        int maxi=-1;
      unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
         mp[nums[i]]++;
          maxi=max(maxi,mp[nums[i]]);
        }
    //    for(auto &i:mp){
    //        maxi=max(maxi,i.second);
    //    }
        
       for(auto &i:mp){
           if(i.second==maxi){
               count+=i.second;
           }
       }
        
        return count;
    }
};