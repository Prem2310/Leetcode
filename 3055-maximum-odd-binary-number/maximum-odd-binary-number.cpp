class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int num1 = count(s.begin(),s.end(),'1');
        int total = s.size();
        for(int i = 0; i < num1 - 1; i++){
            ans.push_back('1');
        }
        for(int i = 0; i < total - num1; i++){
            ans.push_back('0');
        }
        ans.push_back('1');
        return ans;
    }
};