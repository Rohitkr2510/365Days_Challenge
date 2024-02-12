class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maj = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(count == 0)
            {
                maj = nums[i];
                count = 1;
            }
            else if(maj == nums[i])
            {
                count ++;
            }
            else 
            {
                count--;
            }
        }

        int feq = 0;

       for(int i=0;i<n;i++)
       if(maj == nums[i]) feq++;

       if(feq> n/2 ) return maj;
       return maj;


    }
};