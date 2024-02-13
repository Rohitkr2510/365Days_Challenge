class Solution {
public:
    bool palindrome(string word) {
        int n = word.size();
        for(int i=0;i<=n/2;i++) {
            if(word[i] != word[n-i-1])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(auto word :  words) {
            if(palindrome(word)) {
                return word;
            }
        }
        return "";
        
    }
};