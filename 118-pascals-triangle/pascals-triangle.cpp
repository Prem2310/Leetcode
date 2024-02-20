class Solution {
public:
    vector<int> help(vector<int>& intital){
        vector<int> ans;
        ans.push_back(1);
        for(int i = 0; i < intital.size()-1; ++i){
            ans.push_back(intital[i]+intital[i+1]);
        }
        ans.push_back(1);
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        if(numRows == 1){
            return {{1}};
        }
        vector<vector<int>> total;
        total.push_back({1});
        vector<int> temp = {1};
        for(int i = 0; i < numRows-1; ++i){
            temp = help(temp);
            total.push_back(temp);
        }
        return total;
    }
};