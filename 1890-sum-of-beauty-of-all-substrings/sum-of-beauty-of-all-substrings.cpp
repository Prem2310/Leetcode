class Solution {
public:
    int minFreq(vector<int>& count ){
        int mini = INT_MAX;
        for(int frq : count){
            if (frq > 0){
                mini = min(mini , frq);
            }
        }
        return mini;
    }

    int beautySum(string s) {
        int n = s.length();
        int ans = 0;

        for ( int i = 0 ; i < n ; i ++){
            vector<int> count(26);
            for ( int j = i ; j < n ; j ++){
                count[s[j]-'a']++;
                ans += ranges::max(count) - minFreq(count);
            }

        }
        return ans;
    }
};