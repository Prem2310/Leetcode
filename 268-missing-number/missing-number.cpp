class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int actSum = (n * (n + 1)) / 2;
        int currSum = 0;
        for(int n : nums){
            currSum += n;
        }
        return actSum - currSum;
    }
};