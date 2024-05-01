class Solution {
public:
    string reversePrefix(string word, char ch) {
       string ans;
       int i = 0;
       while (i < word.length() && word[i] != ch){
            ans.push_back(word[i]);
            i++;
       }
        if (i == word.length()) {
            return word;
        }
       ans.push_back(word[i]);
       i++;
       reverse(ans.begin(),ans.end());
       while (i < word.length()){
             ans.push_back(word[i]);
        i++;
       } 

       return ans;
    }
};