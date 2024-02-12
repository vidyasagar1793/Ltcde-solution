class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();

       sort(nums.begin(),nums.end());
       if(nums.size()==0){
           return 0;
       }

       int c=1,lc=1,prev=nums[0];

       for(int i=0;i<n;i++){
           if((nums[i]-1) == prev){
               prev=nums[i];
               c++;
           }

           else if(nums[i]!=prev){
               prev=nums[i];
               c=1;
           }
           lc=max(lc,c);
       }
    return lc;

    }
};