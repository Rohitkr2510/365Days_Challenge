class Solution {
public:
int findPermutationDifference(const string &s, const string &t) {
    int pos[26] = {}, res = 0;
    for (int i = 0; i < t.size(); ++i)
        pos[t[i] - 'a'] = i;
    for (int i = 0; i < s.size(); ++i)
        res += abs(i - pos[s[i] - 'a']);
    return res;
}
};