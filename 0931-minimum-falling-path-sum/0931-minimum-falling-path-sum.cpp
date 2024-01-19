class Solution {
public:
    int minFallingPathSum(std::vector<std::vector<int>>& matrix) {
        if (matrix.size() == 1) {
            return matrix[0][0];
        }
        int n = matrix.size();
        std::vector<std::vector<int>> dp(matrix); 
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int minPath = dp[i + 1][j];
                if (j > 0) {
                    minPath = std::min(minPath, dp[i + 1][j - 1]);
                }
                if (j < n - 1) {
                    minPath = std::min(minPath, dp[i + 1][j + 1]);
                }
                dp[i][j] += minPath;
            }
        }

        int result = INT_MAX;
        for (int num : dp[0]) {
            result = std::min(result, num);
        }
        return result;
    }
};