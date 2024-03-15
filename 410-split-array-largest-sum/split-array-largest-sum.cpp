class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int maxi = nums[0];
        int sum = 0;
        for(int r: nums){
            maxi = max(maxi,r);
            sum += r;
        }
        int l = maxi;
        int r = sum;
        int res = sum;
        while ( l <= r){
            int mid = ( l + r ) /2;
            cout << mid<<"mid"<<endl;
            int currSum = 0;
            int count = 1;
            for (int i = 0; i < nums.size(); i++){
                currSum += nums[i];
                if (currSum > mid){
                    cout << currSum << endl;
                    currSum = nums[i];
                    count ++;
                    cout << count << endl;
                }
            }   
            if (count  <= k){
                r = mid - 1;
                res = min(res,mid);
            }
            else{
                l = mid + 1;
            }
        }
        return res;

    }
};