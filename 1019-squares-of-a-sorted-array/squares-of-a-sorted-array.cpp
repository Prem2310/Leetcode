class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        // int l = 0;
        // int r = nums.size()-1;
        // while(l<=r){
        //     if(nums[l] > nums[r]){
        //         int temp = nums[l];
        //         nums[l] = nums[r];
        //         nums[r] = temp;
        //         l++;
        //     }
        //     else{
        //         int temp = nums[l];
        //         nums[l] = nums[r];
        //         nums[r] = temp;
        //         r--;
        //     }
        // }
        return nums;

    }
};