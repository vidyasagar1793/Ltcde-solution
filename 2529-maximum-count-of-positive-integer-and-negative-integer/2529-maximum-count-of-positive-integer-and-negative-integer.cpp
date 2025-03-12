class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a=0;
        int b=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>0){
                a++;
            }
            else if (nums[i]<0){
                b++;
            }
        }
        if (a>b){
            return a;
        }
        return b;
    }
};