class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int indexCh = -1;
        
        for(int i=0;i<n;i++) {
            if(word[i] == ch) {
                indexCh = i;
                break;
            }
        }
        
        if(indexCh == -1) return word;
        
        for(int i=0;i<=indexCh/2;i++) {
            swap(word[i],word[indexCh-i]);
        }
        return word;
        
    }
};