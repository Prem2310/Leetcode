class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s) {
            mp[c]++;
        } 
        vector<pair<char,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](pair<char,int>& a, pair<char,int>& b) {
            return a.second > b.second;
        });
        string ans;
        for(auto& p:v) {
            for(int i=0;i<p.second;i++) {
                ans.push_back(p.first);
            }
        }
        return ans;
              

    }
};