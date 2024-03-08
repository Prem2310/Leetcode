class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxFreq = 0;
        for(auto it:mp){
            if (it.second > maxFreq){
                maxFreq = it.second;
            }
        }
        int count = 0;
        for(auto it : mp){
            if (it.second == maxFreq) count+=it.second;
        }
        return count;
    }

};