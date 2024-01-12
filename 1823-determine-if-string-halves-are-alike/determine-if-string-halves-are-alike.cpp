class Solution {
public:
    bool countvowels(char c){
        unordered_set<char> vowels = {'A','E','I','O','U','a','e','i','o','u'};
        return vowels.count(c);
    }
    bool halvesAreAlike(string s) {
        
        int mid = s.length()/2;
        int count1 =0;
        int count2 =0;

        for(int i =0;i<mid;i++){
            if(countvowels(s[i])) count1++;
        }
        for(int i =mid;i<s.length();i++){
            if(countvowels(s[i])) count2++;
            
        }
        return (count1 == count2);
    }   
};