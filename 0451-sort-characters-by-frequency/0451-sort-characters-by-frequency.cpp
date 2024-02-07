class Solution {
public:
    static bool compare(pair<char,int> &a , pair<char,int> &b)
    {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> charVsFreq;
        for(auto c : s){
            charVsFreq[c]++;
        }
        vector<pair<char,int>> charVsFreqList;
        for(auto it : charVsFreq) {
            charVsFreqList.push_back({it.first,it.second});
        }
        
        sort(charVsFreqList.begin(),charVsFreqList.end(), compare);
        
        string ans = "";
        
        for(auto it : charVsFreqList) {
            char c = it.first;
            int freq = it.second;
            while(freq>0) {
                ans += c;
                freq--;
                
            }
        }
        
        return ans;
        
    }
};