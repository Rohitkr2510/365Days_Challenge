class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        
        for(auto it : nums) {
            if(it >0) positive.push_back(it);
            else negative.push_back(it);
        }
        
        for(int i=0;i<positive.size();i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }
        
        return ans;
        
    }
};