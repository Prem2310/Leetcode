class Solution{
public:
    string customSortString(string order, string s){
        vector <int> count (128);
        string ans;

        for(char c : s){
            count[c]++;
        }

        for(char c: order){
            while(count[c]>0){
                ans+=c;
                count[c]--;
            }
        }

        for (char c = 'a';c<='z';c++){
            while(count[c]>0){
                ans+=c;
                count[c]--;
            }
        }
    return ans;
    }

};
