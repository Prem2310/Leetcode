class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> res;
        stringstream ss(s1 + " " + s2);
        string word;
        while (ss >> word) {
            mp[word]++;
        }
        for (auto& [key, value] : mp) {
            if (value == 1) {
                res.push_back(key);
            }
        }
        return res;
    }
};