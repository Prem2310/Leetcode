class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0 ;
        int h = nums.size()-1;

        for(int i = 0 ; i <= h;){
            if(nums[i] == 0){
                swap(nums[i] , nums[l]);
                i++;
                l++;
            }
            else if (nums[i] == 1){
                i++;
            }
            else{
                swap(nums[i] ,nums[h]);
                h--;
            }
        }
    }
};
