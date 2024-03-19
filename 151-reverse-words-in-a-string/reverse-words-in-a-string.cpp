class Solution
{
public:
    string reverseWords(string s)
    {
        deque<string> dq;
        string word;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (!word.empty())
                {
                    dq.push_front(word);
                    word.clear();
                }
            }
            else
            {
                word += s[i];
            }
        }
        if (!word.empty())
        {
            dq.push_front(word);
        }
        string res;
        while (!dq.empty())
        {
            res += dq.front();
            dq.pop_front();
            if (!dq.empty())
            {
                res += " ";
            }
        }
        return res;
    }
};
