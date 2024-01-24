
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    int prev =0;
    for(auto c:bank[0]){
        if(c=='1'){
            prev++;
        }
    }
    int res =0;

    for(int i = 1;i<bank.size();i++){
        int curr = 0;
        for(auto c:bank[i]){
            if(c=='1'){
                curr++;
            }
        }
        if(curr){
            res += (prev)*(curr);
            prev = curr;
        }
    }
    return res;
    }
};