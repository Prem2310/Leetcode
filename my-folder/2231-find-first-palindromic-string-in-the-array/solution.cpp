class Solution {
public:
    bool checkPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        string s = "";
        for (int i = 0; i < words.size(); i++) {
            if (checkPalindrome(words[i])) {
                s = words[i];
                break;
            }
        }
        return s;
    }
};

