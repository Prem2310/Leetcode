class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        int median = total / 2;

        double currVal = 0;
        int preVal = 0 ;

        if (nums1.size()==0){
            currVal = nums2[0];
        }
        else if(nums2.size()==0){
            currVal = nums1[0];
        }
        else{
            currVal = min(nums1[0] , nums2[0]);
        }
        int itrNum1 = 0, itrNum2 = 0;
        for(int i = 0; i <= median ; i++ ){
            preVal = currVal;
            if (itrNum1 < nums1.size()  && itrNum2 < nums2.size()){
                if(nums1[itrNum1] < nums2[itrNum2]){
                    currVal = nums1[itrNum1];
                    itrNum1 ++; 
                }
                else {
                    currVal = nums2[itrNum2];
                    itrNum2 ++; 
                }
            }
            else if(itrNum1 < nums1.size()){
                currVal = nums1[itrNum1];
                itrNum1 ++;
            }
            else{
                currVal = nums2[itrNum2];
                itrNum2 ++; 
            }
        }

        if (total & 1){
            return currVal;
        }
        return (currVal + preVal) / 2;
    }
};