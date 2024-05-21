class Solution {
public:
    void help(int i, vector<int> &sub,vector<int> &nums,set<vector<int>> &st)
    {
        if(i == nums.size())
        {
            st.insert(sub);
            return ;
        }

        //pick
        sub.push_back(nums[i]);
        help(i+1,sub,nums,st);
        // not pick
        sub.pop_back();
        help(i+1,sub,nums,st);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Ans;
        vector<int> sub;
        set<vector<int>> st;


        help(0,sub,nums,st);

        for(auto it: st)
        Ans.push_back(it);

        return Ans;
        
    }
};