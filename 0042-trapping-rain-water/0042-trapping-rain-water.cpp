class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;   
         int n=height.size();
        vector <int > lmax(n);
        vector <int > rmax(n);
    
        for(int i=1;i<n;i++){
            lmax[i]=max(height[i-1],lmax[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(height[i+1],rmax[i+1]);
        }
        for(int i=0;i<n;i++){
            int waterlevel=min(lmax[i],rmax[i]);
            if(waterlevel>height[i]){
                ans+=waterlevel-height[i];
            }
        }
        return ans;
    }
};