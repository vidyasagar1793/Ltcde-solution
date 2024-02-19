class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = -1;
        vector<long long> pre(n, 0);
        pre[0]=nums[0];
        
        for(int i = 1;i < n;i++){

            pre[i] = nums[i]+pre[i-1];
            if(nums[i]<pre[i-1])
            ans=max(ans,pre[i]);
        }

        return ans;
    }
};