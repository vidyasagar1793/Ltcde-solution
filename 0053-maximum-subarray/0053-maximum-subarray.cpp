class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int min1=INT_MIN;


        for(int i=0;i<nums.size();i++){
            sum =max(sum+nums[i],nums[i]);
            min1=max(min1,sum);
        }

        return min1;
    }
};