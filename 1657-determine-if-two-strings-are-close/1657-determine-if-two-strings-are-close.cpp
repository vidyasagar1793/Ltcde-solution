class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size()) return false;
        vector<int> freq1(26,0),freq2(26,0);
        for(auto it:w1) 
            freq1[it-'a']++;
        for(auto it:w2) 
           freq2[it-'a']++;
        
        
        for(int i=0;i<26;i++){
            if((freq1[i]>0 && freq2[i]==0) || (freq1[i]==0 && freq2[i]>0)) 
            return false;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2;
    }
};