class Solution {
public:

    int tribonacci(int n) {
        int a = 0;
        int b = 1;
        int c = 1;
        if (n < 2) return n;
        int res = 1;
        for(int i = 2; i < n; i++){
            res = a + b +c;
            a = b;
            b = c;
            c = res;
        }
        return res;

    }
};
