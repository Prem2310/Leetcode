class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        int mid = 0;
        int ans=h+1;
        
        while(l<=h){
            mid = (l+h)/2;
            if(nums[mid]>=target){
                ans = mid;
                h = mid -1;
            }
            else{
                l = mid +1;
            }
        }
        return ans;
    }
};