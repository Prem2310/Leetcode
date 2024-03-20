class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>mp;
        int p1 = 0;
        int p2 = 0;
        string s1 = "";
        while(p2<s.length()){
            if (mp.find(s[p2]) == mp.end()){
                mp[s[p2]] = p1;
                p1++;
            }
            s1 += to_string(mp[s[p2]]);
            s1 += " ";
            p2++;
        }        
        p1 = 0;
        p2 = 0;
        string t1 = "";
        mp.clear();
        while(p2<t.length()){
            if (mp.find(t[p2]) == mp.end()){
                mp[t[p2]] = p1;
                p1++;
            }
            t1 += to_string(mp[t[p2]]);
            t1 += " ";
            p2++;
        }      
        // cout << s1 << " s1" << endl;
        // cout << t1 << " t1 " << endl;
        // string res = "";
        // cout << to_string(1) <<" "<<endl; 
        // res += to_string(1);
        // cout << res << " res"; 
        // return false;
        return s1 == t1;
    }
};