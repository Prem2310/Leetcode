class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int n = temperatures.size();
        vector<int> res(n,0);

        for(int i=n-1;i>-1;i--){
            while(st.size() && st.top().first <= temperatures[i])
                st.pop();
            if(st.size() && st.top().first > temperatures[i]){
                res[i] = st.top().second -i;
            }
            st.push({temperatures[i],i});
        }
        return res;
        
    }
};