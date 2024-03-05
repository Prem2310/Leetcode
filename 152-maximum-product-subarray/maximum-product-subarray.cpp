class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res =*max_element(nums.begin(),nums.end());
        cout << res<<endl;
        int currMin = 1;
        int currMax = 1;

        for (auto n : nums){
            if (n==0){
                currMin = 1;
                currMax =1;
                continue;
            }   
            int temp = n * currMax;
            currMax = max(max(n*currMax,n*currMin),n);
            currMin = min(min(temp,n*currMin),n);
            cout << currMin <<" "<< currMax<<endl;
            res = max(currMax,res);
        }
        return res;

        
    }
};