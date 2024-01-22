class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int sum = n*(n+1)/2;
        int sum1 = 0;
        int sum2 = 0;
        int temp;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                res.push_back(nums[i]);
                temp = nums[i+1];
            }
            sum1 += nums[i];
        }
        sum1 += nums[n-1];
        sum2 = sum - sum1 + temp;
        res.push_back(sum2);
        return res;
    }
};