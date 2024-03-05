class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int left = 0, right = tokens.size()-1;
        int maxScore = 0, currScore = 0;
        while(left <= right){
            if(power >= tokens[left]){
                currScore++;
                power -= tokens[left++];
            }else{
                currScore--;
                power += tokens[right--];
            }
            if(currScore < 0)break;
            maxScore = max(maxScore, currScore);
        }
        return maxScore;
    }
};