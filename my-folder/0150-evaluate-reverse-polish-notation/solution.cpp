class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> opr;
        int l = tokens.size();
        
        for(int i=0;i<l;i++){
            if(tokens[i] == "+" || tokens[i] =="-" || tokens[i] =="*" || tokens[i] =="/"){
                int num1= opr.top();
                opr.pop();
                int num2 = opr.top();
                opr.pop();
                
                int tempRes;
                if (tokens[i] == "+"){
                    tempRes = num1 + num2;
                }
                else if (tokens[i] == "-"){
                    tempRes = num2 - num1;
                }
                else if (tokens[i] == "*"){
                    tempRes = num1 * num2;
                }
                else{
                    tempRes = num2 / num1;
                }
                opr.push(tempRes);
            }
            else{
                opr.push(stoi(tokens[i]));
            }

        }
    return opr.top();        
    }
};
