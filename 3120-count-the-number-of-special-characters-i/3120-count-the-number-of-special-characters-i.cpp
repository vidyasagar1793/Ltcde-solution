class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>v1 (26),v2(26);
       int n=word.size();

       for(auto i:word){
        if(i>= 'a'  and i<='z'){
            v1[i-'a']++;
        }
        else{
            v2[i-'A']++;
        }
       }

       int ans=0;
       for(int i=0;i<26;i++){
        if(v1[i]>=1 && v2[i]>=1) ans++;
       }

       return ans;
        
    }
};