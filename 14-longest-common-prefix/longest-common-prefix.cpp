class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs[0].size();
        int i = 0;
        if (strs.size() == 1) return strs[0];
        while (i < n) {
            char c = strs[0][i];
            for (int m = 1; m < strs.size(); m++) {
                if (strs[m][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
            i++;
        }
        return strs[0]; 
    }
};