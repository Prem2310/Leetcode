class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long arraySum = accumulate(chalk.begin(), chalk.end(), 0LL);
        long long rem = k % arraySum;
        for(int i = 0 ; i < chalk.size();i++){
            if (chalk[i] > rem){
                return i;
            }
            rem -= chalk[i];
        }
        return 0;
    }

};