class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        nums1.insert(nums1.end(), m, 0);
        
        int i = n-1;
        int j = m-1;
        int k = n + m -1;
        
        while(i>=0 && j>=0){
            if (nums1[i]<nums2[j]){
                nums1[k] = nums2[j];
                k--;
                j--; 
            }
            else{
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        for (int i : nums1){
            cout << i << endl;
        }

        double ans = 0;
        if ((n+m)%2 != 0){
            int mid = ( n + m )/2;
            ans = nums1[mid];
        }
        else{
            int mid = (n+m)/2;
            ans = (nums1[mid] + nums1[mid-1])/2.000;
        }


        return ans;
    }
};