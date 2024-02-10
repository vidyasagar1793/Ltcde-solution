
class Solution {
    int solve(int l, int r, string &s) {
        int cnt = 0, n = s.size();
        while(l >= 0 && r < n && s[l] == s[r]) {
            cnt++;
            l--;
            r++;
        }
        return cnt;
    }
public:
    int countSubstrings(string s) {
        int n = s.size(), ans = 0;
        for(int i=0; i<n; i++) {
            ans += solve(i, i, s) + solve(i, i + 1, s);
        }
        return ans;
    }
};