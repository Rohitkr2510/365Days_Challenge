class Solution {
public:
   int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count =0,n=hours.size();
        for(auto it:hours){
            if(it>=target) count++;
        }
        return count;
}
};