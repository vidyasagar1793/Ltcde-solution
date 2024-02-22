class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<int> in(n+1,0) ;
        vector<int> out(n+1,0);
        int j=-1;
        for(int i=0;i<t.size();i++){
            int u=t[i][0];
            int v=t[i][1];
            in[v]++;
            out[u]++;
        }
        for(int i=1;i<=n;i++){
            if(in[i]==n-1 && out[i]==0){
                j=i;
                return j;
            }
        }
        return j;

           }
};