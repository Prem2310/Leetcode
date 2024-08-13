class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int x = 0;
        int y = n;
        int i = 0;
        while(i<nums.size()){
            ans[i++] = nums[x++];
            ans[i++] = nums[y++];
        }
        return ans;
    }
};