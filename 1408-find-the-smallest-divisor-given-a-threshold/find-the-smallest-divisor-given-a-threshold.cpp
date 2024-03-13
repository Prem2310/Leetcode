class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int maxi = 0;
        for(int i =0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        int r = maxi;
        int ans = maxi;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int sum = 0;
            for(int it: nums){
                sum += ceil((double)it/(double)mid);
            }
            cout <<sum<<endl;
            if(sum<=threshold){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};