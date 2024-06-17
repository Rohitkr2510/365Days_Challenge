class Solution {
public:
    
    
    
    bool judgeSquareSum(int c) {
        
        /* 
        Brute force approach using two loop 
        tring all combination and finding the 
        result
        */
        long long int n = sqrt(c)+1;
        for(long long int i=0;i<=n;i++)
        {
            if(i*i>c)
                continue;
            long long int x = c-i*i;
            long long int sr = sqrt(x);
                if(sr*sr==x)
                    return true;
        }
        
        return false;
        
    }
};