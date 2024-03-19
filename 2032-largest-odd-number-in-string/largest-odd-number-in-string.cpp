class Solution {
public:
    string largestOddNumber(string num) {
    int i = num.length()-1;
    while (i>0){
        if ((int)num[i] % 2 == 0){
            i--;
        }
        else{
            break;
        }
    }   
    
    if (i == 0 && num[i] %2 == 0) return "";
    string  ans;
    for (int n=0; n <= i ;n++){
        ans += num[n];
    }
    return ans;
    }
};