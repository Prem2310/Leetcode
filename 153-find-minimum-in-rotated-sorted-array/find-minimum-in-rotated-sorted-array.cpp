class Solution {
public:
    int findMin(vector<int>& nums) {
        int i =0 ;
        int j = nums.size()-1;
        int mini = nums[0];

        while(i<j){
            if (nums[i]>nums[j]){
                mini = min(mini,nums[j]);
                j--;
            }
            if (nums[i]<nums[j]){
                break;
            }    
        }        
        return mini;
    }
};