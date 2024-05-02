class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi = -1;
        int n = nums.size();
        
        for(int i=0;i<n;i++) {
            for(int j = i+1;j<n;j++) {
                if(nums[i] + nums[j] == 0 && abs(nums[i])>maxi) {
                    maxi = abs(nums[i]);
                }
            }
        }
        
        return maxi;
        
    }
};