#include <string>
#include <map>

class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (s.empty() || t.empty()) return "";

        std::map<char, int> mp;
        for (int i = 0; i < t.length(); i++) {
            char c = t[i];
            mp[c] = mp.count(c) ? mp[c] + 1 : 1;
        }

        int i = 0, j = 0, count = mp.size();
        int left = 0, right = s.length() - 1, minLength = s.length();

        bool found = false;

        while (j < s.length()) {
            char endChar = s[j++];
            if (mp.count(endChar)) {
                mp[endChar]--;
                if (mp[endChar] == 0) {
                    count--;
                }
            }
            if (count > 0) continue;

            while (count == 0) {
                char startChar = s[i++];
                if (mp.count(startChar)) {
                    mp[startChar]++;
                    if (mp[startChar] > 0) {
                        count++;
                    }
                }

                if ((j - i) < minLength) {
                    left = i;
                    right = j;
                    minLength = j - i;

                    found = true;
                }
            }
        }

        return !found ? "" : s.substr(left-1, right - left+1);
    }
};

