class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int idx = r;
        vector<int> res(nums.size());
        while(idx>=0){
            if(abs(nums[l]) > abs(nums[r])){
                res[idx] = nums[l] * nums[l];
                l++;
                idx--;
            }
            else{
                res[idx] = nums[r]*nums[r];
                r--;
                idx--;
            }
        }
        return res;

    }
};
