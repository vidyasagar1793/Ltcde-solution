class Solution {
    public:
int findMaxLength(vector<int>& nums) {
    unordered_map<int,int> mp;
    int x=0, maxLen=0, index=0;
    mp[0]=-1;
    for(int i : nums){
        if( !i ) x--;
        else x++;
        if( mp.find(x)!= mp.end() )
        {
           maxLen=max( maxLen, index-mp[x] );
           }
        else
        { 
        mp[x]=index;
        }
        index++;
        
    }
    return maxLen;
}
};