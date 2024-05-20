class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int result =0 ;
        
        for(auto a : nums) {
            result |= a; // doing or of all element
        }
        
        return result<< (nums.size()-1); // shifting the result bit by n-1 bit. as observe in pattern
        
    }
};