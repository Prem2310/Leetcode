class Solution {
public:
    int windowSize(vector<int>& nums, int goal){
        if (goal < 0) return 0;
        int res = 0;
        int l = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            res += (i-l) +1;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return windowSize(nums,goal) - windowSize(nums,goal-1);
     }
};