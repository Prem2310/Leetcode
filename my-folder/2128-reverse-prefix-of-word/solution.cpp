class Solution {
public:
    string reversePrefix(string word, char ch) {
       string ans;
       bool once = true;
       for (char x : word){
        if (x == ch && once){
            ans += x;
            reverse(ans.begin(), ans.end());
            once = false;
        }
        else{
            ans += x;
        }
       }
        return ans;
    }
};
