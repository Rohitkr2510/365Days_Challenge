class Solution {
public:
    void help(int ind,int target,vector<int>& candidates,vector<int>& sub,vector<vector<int>>& ans)
    {
        if(target == 0)
        {
            ans.push_back(sub);
            return;

        }

        if(target < 0 || ind  == candidates.size()) return ;

        for(int i=ind;i<candidates.size();i++)
        {
            if(i>ind && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;

            sub.push_back(candidates[i]);
            help(i+1,target-candidates[i],candidates,sub,ans);
            sub.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> sub;

        help(0,target,candidates,sub,ans);

        return ans;
        
    }
};