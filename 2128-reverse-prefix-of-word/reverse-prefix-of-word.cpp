class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int i = 0;
        while (i < word.length() && word[i] != ch){
            i++;
        }
        if (i == word.length()) {
            return word;
        }

        for (int j = i; j >= 0 ; j--){
            ans.push_back(word[j]);
        }
        for (int j = i+1; j < word.length()  ; j++){
            ans.push_back(word[j]);
        }

        return ans;
    }
};