class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      map<int,int> w,l;
      
      for(int i=0;i<matches.size();i++){
         w[matches[i][0]]++;
         l[matches[i][1]]++;
      }

      vector<int>ans1,ans2;

      for(auto x:w){
          if(l[x.first]==0){
              ans1.push_back(x.first);
          }
      }

    for(auto x:l){
        if(x.second==1){
            ans2.push_back(x.first);
        }
    }

     sort(ans1.begin(),ans1.end());
     sort(ans2.begin(),ans2.end());
      

      return {ans1, ans2 };

    }
};