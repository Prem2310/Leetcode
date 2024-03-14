class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxi = 0;
        for(int r : weights){
            sum+=r;
            maxi = max(maxi,r); 
        }
        int l = maxi;
        int r = sum;
        // int res = 0;

        while(l < r){
            int mid = ( l + r )/2;
            int count = 0;
            int currSum = 0;
            int j = 0;
            while(j < weights.size()){
                currSum += weights[j];
                if (currSum > mid){
                    // cout << j<<endl;
                    cout << currSum << endl;
                    currSum = weights[j];
                    count ++;
                    cout << count<< endl;
                }
                j++;
            }
            if(count+1 <= days ){
                // res = mid;
                r = mid;
            }
            else{
                l = mid + 1;
            } 
        }
        return l;

    }
};