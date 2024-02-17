class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = (int)nums.size() / 2; 
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if (mp[nums[i]] > n) { 
                return nums[i]; 
            }
        }
        return -1; 
        }
};