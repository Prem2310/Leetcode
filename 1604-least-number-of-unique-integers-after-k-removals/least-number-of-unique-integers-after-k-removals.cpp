class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
    }
    vector<int> freq;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        freq.push_back(it->second);
    }
    sort(freq.begin(), freq.end());
    int n = freq.size();
    for (int i = 0; i < n; i++) {
        if (k >= freq[i]) {
            k -= freq[i];
            freq[i] = 0;
        } else {
            freq[i] -= k;
            k = 0;
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (freq[i] > 0) {
            ans++;
        }
    }
    return ans;
}
};