class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if( prices.size()==0){
            return 0;
        }
        int profit=0;
        int bp=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<=bp){
                bp=prices[i];
                continue;
            }
            profit=max(profit,prices[i]-bp);
        }
        return profit;
    }
};