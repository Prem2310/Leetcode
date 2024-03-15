class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int s=0,e=n*m-1;
        while(s<=e){
            int mid=(s+e)>>1;
            int t=matrix[mid/m][mid%m];
            if(t==target)return 1;
            else if(t<target)s=mid+1;
            else e=mid-1;
        }

        return 0;
    }
};