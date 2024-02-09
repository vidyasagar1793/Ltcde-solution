class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int mini=INT_MAX;
        int sum=0;
        while(right<nums.size())
        {
            sum+=nums[right++];
            while(sum>=target)
            {
                mini=min(mini,right - left);
                sum-=nums[left++];
            }
        }
       if(mini<INT_MAX)
        return mini;
        else return 0; 
    }
};