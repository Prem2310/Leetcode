class Solution {
 public:
  int longestPalindrome(string s) {
    int ans = 0;
    vector<int> count(128);

    for (const char c : s){
      ++count[c];
      if (count[c] % 2  == 0){
        ans += 2;
      }
    }

    for (const int freq : count)
      if (freq % 2 == 1){
        ans += 1;
        break;
      }

    return ans ;
  }
};
