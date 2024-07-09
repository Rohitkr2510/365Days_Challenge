class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double waitingTime = 0.0;
        int numOfcustomers = customers.size();
        int startTime = 0;
        for(auto it : customers) {
            if(startTime < it[0]) {
                startTime = it[0];
            }
            startTime += it[1];
            waitingTime += startTime - it[0];
        }
        
        return waitingTime/numOfcustomers;
        
    }
};