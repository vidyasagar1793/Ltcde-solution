class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;

        if (s.size() < t.size()){
            return "";
        }

        for (auto value:t){
            m[value]++;
        }

        unordered_map<char,deque<int> > position;
        set<int> sorted;
        pair<int,int> res = {0,INT_MAX},initial;
        initial = {0,INT_MAX};
        for (int i = 0 ; i < s.size() ; i++){
            if (m.find(s[i]) != m.end()){
                
                position[s[i]].push_back(i);
                sorted.insert(i);

                //we have too much so remove stuff
                if (m[s[i]] < position[s[i]].size()){
                    int temp = position[s[i]].front();
                    position[s[i]].pop_front();
                    sorted.erase(temp);
                }

                if (sorted.size() == t.size()){
                    if (res.second - res.first > i - *sorted.begin()){
                        res = {*sorted.begin(),i};
                        cout<<"res being updated\t"<<res.first<<"\t"<<res.second<<endl;
                    }
                }
            }
        }
        cout<<res.first<<"\t"<<res.second<<endl;
        string ans;
        if (res != initial){
            ans = s.substr(res.first,res.second - res.first + 1);
        }

        else{
            ans = "";
        }

        return ans;
    }

};