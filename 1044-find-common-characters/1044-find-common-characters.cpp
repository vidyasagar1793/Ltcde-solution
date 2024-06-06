class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,priority_queue<int,vector<int>,greater<int>>> mp;

        for(int i=0;i<words.size();i++)
        {
            map<char,int> lmp;
            for(int j=0;j<words[i].size();j++)
            {
                lmp[words[i][j]]++;
            }

            for(auto itr=lmp.begin();itr!=lmp.end();itr++)
            {
                mp[itr->first].push(itr->second);
            }
        }

        vector<string> ans;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second.size()==words.size())
            {
                for(int i=0;i<itr->second.top();i++)
                {
                   string str;
                   str.push_back(itr->first);

                   ans.push_back(str);
                }
            }
        }       

        return ans;
    }
};