class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        int curr = 0;
        for(int i = 0 ; i < s.length() - 1 ; i++){
            curr = abs(s[i] - s[i+1]);
            ans += curr;
        }
        return ans;
    }
};