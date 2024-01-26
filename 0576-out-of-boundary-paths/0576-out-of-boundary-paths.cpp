class Solution {
public:
    vector<vector<vector<int>>> dp;
    int mod = 1e9 + 7;
    int m, n;

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        dp = vector<vector<vector<int>>>(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        this->m = m;
        this->n = n;
        return helper(maxMove, startRow, startColumn);
    }

private:
    int helper(int maxMove, int x, int y) {
        if (x < 0 || x >= m || y < 0 || y >= n) return 1;
        if (maxMove <= 0) return 0;
        if (dp[x][y][maxMove] != -1) {
            return dp[x][y][maxMove];
        }
        int res = 0;

        res = (res + helper(maxMove - 1, x + 1, y)) % mod;
        res = (res + helper(maxMove - 1, x, y - 1)) % mod;
        res = (res + helper(maxMove - 1, x - 1, y)) % mod;
        res = (res + helper(maxMove - 1, x, y + 1)) % mod;

        dp[x][y][maxMove] = res;

        return res;
    }
};