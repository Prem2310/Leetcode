class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int l =0;
        int r = tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        int res = 0;
        while(l<=r){
            if (tokens[l] <= power){
                power -= tokens[l];
                l++;
                res+=1;
            }
            else{
                if (l!=r && res >=1){
                    power += tokens[r];
                    r--;
                    res-=1;

                }
                else{
                    l++;
                }
            }
        }
        return res;
    }
};
