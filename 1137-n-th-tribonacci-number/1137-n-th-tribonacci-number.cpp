class Solution {
    int help(int n,vector<int>&dp)
    {
        if(n ==0)
        return dp[n] =  0;
        else if(n<=2)
        return dp[n] =  1;

        if(dp[n] != -1) return dp[n];

        return dp[n] =  help(n-3,dp) + help(n-2,dp) + help(n-1,dp);
    }
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);

        return help(n,dp);
        
    }
};