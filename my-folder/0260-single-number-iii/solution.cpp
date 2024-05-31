class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;
        for (int n : nums){
            xr ^= n;
        }
        int diff_bit = 1;
        while ((xr & diff_bit) == 0) {
            diff_bit = diff_bit << 1;
        }
        int a =0;
        int b = 0;
        for (int n :nums){
            if (diff_bit & n){
                a = a ^ n;
            }
            else{
                b = b ^ n; 
            }
        }
        return  {a,b};
    }
};
