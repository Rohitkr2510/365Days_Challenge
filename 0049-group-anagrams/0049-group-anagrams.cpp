class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        if(n == 0) return ans;
        
        unordered_map<string, vector<string>> stringVsList;
        
        vector<string> dummyStrs = strs;
        
        for(int i=0;i<n;i++) {
            sort(dummyStrs[i].begin(),dummyStrs[i].end());
        }
        
        for(int i=0;i<n;i++) {
            // cout<<dummyStrs[i]<<" ";
            stringVsList[dummyStrs[i]].push_back(strs[i]);
        }
        
        for(auto it : stringVsList ) {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};