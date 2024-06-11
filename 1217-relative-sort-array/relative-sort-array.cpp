class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> countMap;
        for (int num : arr1) {
            countMap[num]++;
        }
        vector<int> res;
        
        for (int num : arr2) {
            while (countMap[num] > 0) {
                res.push_back(num);
                countMap[num]--;
            }
            countMap.erase(num); 
        }

        vector<int> remaining;
        for (auto& pair : countMap) {
            while (pair.second > 0) {
                remaining.push_back(pair.first);
                pair.second--;
            }
        }
        sort(remaining.begin(), remaining.end());

        res.insert(res.end(), remaining.begin(), remaining.end());

        return res;
    }
};
