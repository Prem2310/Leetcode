class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1;
        int maxi = 0;
        for(int i =0;i<piles.size();i++){
            maxi = max(maxi,piles[i]);
        }
        int r = maxi;
        while (l < r)
        {
            int m = (l + r) / 2, t = 0;
            for (int p : piles)
                t += (p + m - 1) / m;
            if (t <= h)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }
};
