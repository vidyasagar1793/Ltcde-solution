class Solution {

    string pand(string s){
       reverse(s.begin(),s.end());    
        return s;
    }
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
       string s;
        for(int i=0;i<n;i++){
            string st=pand(words[i]);
             if(st==words[i]){
                 s=words[i];
                 break;
             }
        }
        return s;
            }
};