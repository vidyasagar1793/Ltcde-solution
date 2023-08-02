class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int l = matrix[0][0], h = matrix[n-1][n-1];
        while(l <= h)
        {
            int mid = l +(h-l)/2;
            int ans = 0;
            
            for(int i = 0; i<n; i++)
            {
                int s = 0, e = n-1;
                while(s <= e)
                {
                    int rmid = s+ (e-s)/2;
                    if(matrix[i][rmid] <= mid)
                        s = rmid+1;
                    else
                        e = rmid-1;
                }
                ans += s;
            }
            if(ans < k)
                l = mid+1;
            else
                h = mid-1;
        }
        return l;
    }
};