class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long a = 0;
        multiset <long long>s;
        
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
            
        while(s.size()>1 && *(s.begin())<k)
        {
            long long t1 = *(s.begin());
            s.erase(s.begin());
            long long t2 = *(s.begin());
            s.erase(s.begin());
            t1 *= 2;
            t1 += t2;
            s.insert(t1);
            a++;
        }
        return a;
     
    }
};