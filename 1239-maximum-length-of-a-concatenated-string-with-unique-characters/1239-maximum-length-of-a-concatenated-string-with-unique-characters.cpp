class Solution {
public:
    int maxlength=0;
    void backtrack(string s,string &t, int begin, vector<string>& arr)
    {
        s+=t;            
        unordered_set<char> f(s.begin(),s.end());
        if(f.size()!=s.length()) return;

        maxlength=max(maxlength,int(s.length()));

        for(int i=begin; i<arr.size(); i++)  backtrack(s,arr[i],i+1,arr);
    }

    int maxLength(vector<string>& arr) {
        string temp="";
        backtrack("",temp,0,arr);
        return maxlength;
    }
};