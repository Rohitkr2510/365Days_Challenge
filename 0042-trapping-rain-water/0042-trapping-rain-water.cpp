class Solution {
public:
    int leftMax(int i, vector<int>& height)
    {
        int Max = height[i];
        while(i>=0)
        {
            Max = max(Max,height[i]);
            i--;
        }

        return Max;
    }

    int rightMax(int i, vector<int>& height)
    {
        int Max = height[i];
        while(i<height.size())
        {
            Max = max(Max,height[i]);
            i++;
        }

        return Max;
    }
    int trap(vector<int>& height) {
        int trapwater = 0;
        int n = height.size();

        vector<int> leftMax(n);
        vector<int> rightMax(n);
         
         int Max = height[0];

        for(int i=0;i<n;i++)
        {
            Max = max(Max,height[i]);
            leftMax[i] = Max;
        }

        Max = height[n-1];

        for(int i=n-1;i>=0;i--)
        {
            Max = max(Max,height[i]);
            rightMax[i] = Max;

        }

        for(int i=0;i<n;i++)
        {
            int left = leftMax[i];
            int right = rightMax[i];

            trapwater += min(left,right) - height[i];

        }

        return trapwater;

        
    }
};