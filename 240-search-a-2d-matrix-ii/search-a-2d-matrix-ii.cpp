class Solution {
public:
    bool possible(vector<int>& nums , int target){
        int l = 0;
        int r = nums.size()-1;
        while( l <= r){
            int mid = ( l + r ) / 2;
            if (nums[mid] == target){
                return 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return 0;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size() ; i++){
            if (possible(matrix[i] , target)) return 1;
        }
        return 0;
    }
};