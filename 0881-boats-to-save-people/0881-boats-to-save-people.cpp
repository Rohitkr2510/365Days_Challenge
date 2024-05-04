class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int countBoat = 0;
        
        for(int l=0, r=people.size()-1;l<=r;r--) {
            countBoat++;
            if(people[l] + people[r] <= limit) {
                l++;
            }
        }
        return countBoat;
        
    }
};