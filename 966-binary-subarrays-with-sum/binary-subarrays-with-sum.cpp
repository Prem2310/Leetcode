class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixSum = 0;
        map<int , int> mp;
        mp[0] = 1;
        int count = 0;
        for(int n: nums){
            prefixSum += n;

            int remove = prefixSum - goal;
            count += mp[remove];
            mp[prefixSum]++;
        }
        return count;
    }
};