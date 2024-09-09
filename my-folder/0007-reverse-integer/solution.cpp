class Solution {
public:
    int reverse(int x) {
        long num = 0;
        while(x != 0){
            num = num * 10 + x % 10 ;
            x /= 10;
        }      
        return (num < INT_MIN || num > INT_MAX) ? 0 : num;

    }
};
