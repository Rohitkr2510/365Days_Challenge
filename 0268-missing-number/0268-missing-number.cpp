class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto a : nums) {
            sum += a;
        }
        int n = nums.size();
        int sum1 = (n*(n+1))/2;
        
        if(sum == sum1) return 0;
        return sum1-sum;
        
    }
};