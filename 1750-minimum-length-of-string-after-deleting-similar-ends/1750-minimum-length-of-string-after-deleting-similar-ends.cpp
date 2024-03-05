class Solution {
public:
    int minimumLength(string s) {
        int i = 0 ; int j = s.size()-1;
        while(i<j && s[i] == s[j])
        {
            char ch = s[i];
            while(i < j && s[i] == ch)
            {
                i++;
            }while(j >= i && s[j] == ch)
            {
                j--;
            }
        }
        return j-i+1;
    }
};