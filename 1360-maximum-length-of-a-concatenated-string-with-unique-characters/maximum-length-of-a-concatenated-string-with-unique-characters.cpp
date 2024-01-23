class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int i=0;i<(1 << n);i++){
            int currAns = 0;
            vector<int> freq (26,0);
            for(int j=0;j<n;j++){
                if ((i>>j)&1){
                    currAns += arr[j].size();

                    for(auto x:arr[j]){
                        ++freq[x-'a'];
                    }

                }
            }
            bool ok = 1;
            for(auto x:freq){
                if(x > 1){
                    ok = 0;
                    break;
                }
            }
            if(ok){
                ans = max(ans,currAns);
            }


        }
        return ans;
    }
};