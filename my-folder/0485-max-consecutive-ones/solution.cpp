class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0 ;
        int maxCnt = 0;

        for(int n : nums){
            if (n == 0){
                cnt = 0;
            }
            else{
                cnt ++;
                maxCnt = max(cnt , maxCnt);
            }
        }
        return maxCnt;
    }

};
