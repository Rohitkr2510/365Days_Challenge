class Solution {
public:
    bool palindrome(string temp) {
        int n = temp.size();
        
        for(int i=0;i<n;i++) {
            if(temp[i] != temp[n-i-1]) {
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s2) {
        
        string temp = "";
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 

        int n = s2.size();
        
        for(int i=0;i<n;i++ ) {
            if(isalnum(s2[i]) ) {
                temp += s2[i];
                cout<<s2[i];
            }
        }
        
        return palindrome(temp);
    }
};