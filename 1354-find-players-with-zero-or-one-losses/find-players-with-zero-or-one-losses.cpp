class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> losses;
        set<int> played;

        for (const auto& match : matches) {
            played.insert(match[0]);
            played.insert(match[1]);
            losses[match[1]]++;
        }

        vector<int> noLoss, oneLoss;

        for (const auto& player : played) {
            if (losses[player] == 0) {
                noLoss.push_back(player);
            } else if (losses[player] == 1) {
                oneLoss.push_back(player);
            }
        }

        return {noLoss, oneLoss};
    }
};