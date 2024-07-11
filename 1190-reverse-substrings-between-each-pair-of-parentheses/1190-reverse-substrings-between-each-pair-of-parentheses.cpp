class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<int>opened;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                opened.push(i);
            }
            else if(s[i]==')'){
                int j=opened.top();
                opened.pop();
                 mp[i]=j;
                 mp[j]=i;
            }
        }
        
      string result="";
      int i=0;
      int direction=1;

      while(i<n){
        if(s[i]=='(' || s[i]==')'){
            i=mp[i];
            direction=-direction;
        }

        else{
            result.push_back(s[i]);
        }
        i+=direction;
      }

      return result;
    }
};