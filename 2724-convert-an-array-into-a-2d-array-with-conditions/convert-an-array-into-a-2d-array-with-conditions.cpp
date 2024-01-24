class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mapp;
        vector<vector<int>> res;
        for (auto n : nums){
            int row = mapp[n];
            if (res.size() == row){
                res.push_back(vector<int>());
            }
            res[row].push_back(n);
            mapp[n] +=1;

        }
        return res;
    }
};