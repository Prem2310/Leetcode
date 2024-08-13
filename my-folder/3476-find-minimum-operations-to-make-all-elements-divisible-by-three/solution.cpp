class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int n = nums.size();
       int count = 0;
       for(int n : nums){
        if(n%3 == 0){
            count++;
        }
       } 
       return n-count;
    }
};
