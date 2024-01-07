class Solution {
public:
    int lastRemaining(int n) {
        int head=1,step =1,remain = n; 
        bool right = true;
        while(remain>1){
            if(right || remain % 2 == 1) head += step;
            remain /= 2;
            step *= 2;
            right = !right;
        }
        return head;
        

    }
};