class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        int zeroes = 0;
        string ans;
        for(auto c:s){
            if(c=='1'){
                ones ++;
            }
            else{
                zeroes++;
            }
        }
        if(ones==1){
            while(zeroes){
                ans+='0';
                zeroes--;
            }
            ans+='1';
        }
        else{
            while(ones-1){
                ans+='1';
                ones--;
            }
            while(zeroes){
                ans+='0';
                zeroes--;
            }
            ans+='1';
        }
    return ans;
    }
};