class Solution {

    bool isvowel(char c) {
        char c1 = tolower(c);
        if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u') {
            return true;
        } else {
            return false;
        }
    }

public:
    bool halvesAreAlike(string s) {
        int n = 0;
        int m = s.size() - 1;
        int count = 0;
        int count1 = 0;
        while (n < m) {
            if (isvowel(s[n])) {
                count++;
            }
            if (isvowel(s[m])) {
                count1++;
            }
            n++;
            m--;
        }
        return (count == count1);
    }
};