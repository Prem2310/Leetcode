class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1, r = 1e9;
        while (l < r)
        {
            int m = (l + r) / 2, t = 0;
            for (int p : piles)
                t += (p + m - 1) / m;
            if (t > h)
                l = m + 1;
            else
                r = m;
        }
        return l;
    }
};
