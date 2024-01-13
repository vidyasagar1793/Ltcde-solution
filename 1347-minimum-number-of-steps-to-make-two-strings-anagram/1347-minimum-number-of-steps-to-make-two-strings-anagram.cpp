class Solution {
public:
    int minSteps(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int top=0,bottom=0;
        int count=0;
        while( top<s.size() && bottom<s.size()){
            if(s[top]==t[bottom]){
              count++;
              top++;
              bottom++;  
            } 
            else if(s[top]<t[bottom]) top++;
            else if(s[top]>t[bottom]) bottom++;
        }
        return s.size()-count;
    }
};