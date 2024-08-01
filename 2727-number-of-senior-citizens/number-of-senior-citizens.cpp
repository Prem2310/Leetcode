class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(string person : details){
           count += stoi(person.substr(11, 2)) > 60;
        }
        return count;
    }
};