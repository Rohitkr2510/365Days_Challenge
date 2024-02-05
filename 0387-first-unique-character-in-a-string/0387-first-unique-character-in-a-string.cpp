class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int,int>> mp;
        int n = s.size();
        for(int i=0;i<n;i++) {
            if(mp.find(s[i]) == mp.end()) {
                mp[s[i]].first = 1;
                mp[s[i]].second = i;
            } else
            {
                mp[s[i]].first += 1;
            }
        }
        int mini = INT_MAX;

        for(auto it : mp ) {
            int count = it.second.first;
            int index = it.second.second;
            if(count ==1) {
                mini = min(mini,index);
            }
        } 
        if(mini == INT_MAX) return -1;
        return mini;
     }
};