class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int l, int r) {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] == target) {
                return m;
            }
            if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n==1 && nums[0] == target) return 0;
        if (n==1 && nums[0] != target) return -1;

        int res = binarySearch(nums,target,0,n);
        return res;
    }
};