class Solution {
public:
    int numberOfSpecialChars(string word) {
       unordered_map<char,int> mp1,mp2;

       for(int i=0;i<word.size();i++){
        if(word[i]>='a' and word[i]<='z'){
            mp1[word[i]]=i;
        }
        else if(mp2.find(word[i]) == mp2.end()){
            mp2[word[i]]=i;
        }
       } 

       int cnt=0;

       for(auto i:mp2){
        char c= tolower(i.first);
        if(mp1.count(c) && i.second> mp1[c]){
            cnt++;
        }
       }
       return cnt;
    }
};