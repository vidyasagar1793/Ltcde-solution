class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>map1;
        unordered_map<char,char>map2;

        string t1="";
        string t2="";

        for(int i=0;i<s.size();i++){
            map1[s[i]]=t[i];
            map2[t[i]]=s[i];
        }

  for(auto i:s){
      t1+=map1[i];

  }

for(auto i:t){
      t2+=map2[i];

  }

  if(t1==t  && t2==s){
    return true;
  }

  return false;


    }
};