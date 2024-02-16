class Solution {
public:
    static bool comp(pair<int,int> &a,pair<int,int>&b) {
        return a.second > b.second;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        //count the number and it frequency
        unordered_map<int,int> eleVsCount;
        
        for(auto ele : arr) {
            eleVsCount[ele]++;
        }
        
        //sort the elevscount in a vector
        vector<pair<int,int>> listEleVsCount;
        for(auto it : eleVsCount) {
            listEleVsCount.push_back({it.first,it.second});
        }
        
        sort(listEleVsCount.begin(),listEleVsCount.end(),comp);
        
        int uniqueEle = listEleVsCount.size()-1;
        
        while(k>0) {
            int count = listEleVsCount[uniqueEle].second;
            if(count <= k) {
                listEleVsCount.pop_back();
                k -= count;
                uniqueEle--;
            } else {
                return uniqueEle+1;
            }
            
        }
        
        return uniqueEle+1;
        
    }
};