class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        vector<pair<int,int>> freqPair;

        for(int num : nums){
            mp[num]++;
        }
 
        for(auto x:mp){
            freqPair.push_back({x.second , x.first});
        }
        sort(freqPair.rbegin(),freqPair.rend());

        for (int i = 0 ; i < k ; i++){
            ans.push_back(freqPair[i].second);
        }       
        return ans;
    }

};