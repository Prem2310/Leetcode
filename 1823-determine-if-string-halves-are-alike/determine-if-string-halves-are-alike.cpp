class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char> v = {'A','E','I','O','U','a','e','i','o','u'};
        int mid = s.length()/2;
        int count1 =0;
        int count2 =0;

        for(int i =0;i<mid;i++){
            for(auto j: v){
                if(j == s[i]){
                    count1 ++;
                }
            }
        }
        for(int i =mid;i<s.length();i++){
            for(auto j: v){
                if(j == s[i]){
                    count2 ++;
                }
            }
        }
        if (count1==count2){
            return true;
        }
        else{
            return false;
        }
    }   
};