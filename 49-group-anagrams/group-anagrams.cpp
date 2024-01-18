class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string c:strs){
            string word = c;
            sort(word.begin(),word.end());
            mp[word].push_back(c);
        }

        vector <vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};