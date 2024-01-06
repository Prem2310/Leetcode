class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string p = s; 
        reverse(p.begin(), p.end()); 
        cout << p;
        return (s == p); 
    }
};