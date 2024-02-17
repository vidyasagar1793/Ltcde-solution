class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        int n = nums.size()-1;
        if(nums[0]>nums[1])
            return 0;
        if(nums[n]>nums[n-1])
            return n;
        int s = 1, e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid-1]>nums[mid])
                e = mid-1;
            else
                s = mid+1;
        }
        return -1;
    }
};