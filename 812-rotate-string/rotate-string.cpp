class Solution
{
public:
    bool rotateString(string A, string B)
    {
        if (A.size() != B.size())
            return false;
        if (A == B)
            return true;
        for (int i = 0; i < A.size(); i++)
        {
            if (A == B)
                return true;
            A = A.substr(1) + A[0];
        }
        return false;
    }
};