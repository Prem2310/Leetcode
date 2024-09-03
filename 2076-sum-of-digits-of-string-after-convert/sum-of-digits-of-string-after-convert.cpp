class Solution {
public:
    int getLucky(string s, int k) {
        string num;
        for (char c : s){
            int n = c -'a' +1;
            num.append(to_string(n));
        }
        while(k--){
            int res = 0;
            for(char c :num){
                res += c - '0';
            }
            num = to_string(res);
        }
        return stoi(num);
    }
};