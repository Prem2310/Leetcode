class Solution {
public:
    int missingNumber(vector<int>& nums) {

       int count = 0;
        for(int i=0;i<nums.size();i++){
            count+=i-nums[i];
        }
        return count+nums.size();
        
    }
};