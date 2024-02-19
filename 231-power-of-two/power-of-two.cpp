class Solution {
public:
    bool isPowerOfTwo(int n) {
        double num = log(n)/log(2);
        cout<<num;
        if (n == 536870912){
            return true;
        }
        if (n<=0){
            return false;
        }
        if((int)num == num){
            return true;
        }
        return false;
    }
};