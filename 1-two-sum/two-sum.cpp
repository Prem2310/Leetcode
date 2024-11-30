class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0 ; i < nums.size(); i++){
            int curr = target - nums[i]; 
            if(mp.find(curr) != mp.end()){
                return {mp[curr] , i};
            }
            mp[nums[i]] = i;
        }
    return {};
    }
};