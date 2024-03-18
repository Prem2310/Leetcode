class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<int> prev = points[0];
        int ans = points.size();

        for (auto i : points){
            cout << i[0] <<" "<< i[1]<<endl;
        }
        for(int i = 1; i < points.size() ; i++){
            vector <int> curr = points[i];

            if (curr[0] <= prev[1]){
                ans -= 1;
                prev[0] = curr[0];
                prev[1] = min (curr[1] , prev[1]);
            }
            else{
                prev = curr;
            }
        }
        return ans;
    }
};