class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-1;i++) {
            sum += nums[i];
        }
        
        int i = n-1;
        
        while(i>0) {
            
            if(sum > nums[i]) {
                return sum + nums[i];
            }
            sum -= nums[i-1];
            
            i--;
        }
        
        return -1;
        
    }
};