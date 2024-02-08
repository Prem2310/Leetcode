#include <vector>
class Solution {
public:
    int numSquares(int n) {
    vector<int> arr(n+1,INT_MAX);
    arr[0] = 0;

    for(int i=0;i<=n;i++){
        for(int j = 1;j*j<=i;j++){
            arr[i] = min(arr[i],1+arr[i-j*j]);
        }
    }    
    return arr[n];
    }
};