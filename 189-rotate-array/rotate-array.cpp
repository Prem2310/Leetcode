class Solution {
public:
    void reverse(vector<int> &nums,int start,int end){
        while(start<=end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n==0)return;
        k = k%n;
        if (k>n)return;
        //reverse first n-k element;
        reverse(nums,0,n-k-1);
        //reverse last k element;
        reverse(nums,n-k,n-1);
        //reverse whole arr;
        reverse(nums,0,n-1);

    }
};
