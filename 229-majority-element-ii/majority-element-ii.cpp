class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int num : nums){
            mp[num]++;
        }
        int m = nums.size()/3;
        for(auto n : mp){
            if(n.second > m){
                ans.push_back(n.first);
            }
        }
        return ans;
    }

};