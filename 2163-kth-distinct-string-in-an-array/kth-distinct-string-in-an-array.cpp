class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int> mp;
        for(const auto& temp : arr){
            mp[temp]++;
        }

        int count = 0;
        for (const auto& temp : arr){
            if(mp[temp] == 1){
                count ++;
                if (count == k){
                    return temp;
                }
            }
        }
        return "";
    }
};