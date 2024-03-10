class Solution {
public:
    int findMin(vector<int>& nums) {
        int i =0 ;
        int j = nums.size()-1;
        int mini = INT_MAX;

        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]>=nums[i]){
                mini = min(mini,nums[i]);
                i = mid+1;
            }
            else if(nums[j]>=nums[mid]){
                mini = min(mini,nums[mid]);
                j = mid-1;
            }
        }        
        return mini;
    }
};