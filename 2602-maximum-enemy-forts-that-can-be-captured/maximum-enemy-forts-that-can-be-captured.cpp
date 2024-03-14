class Solution {
public:
    int captureForts(vector<int>& forts) {
        int count = 0;
        for(int i =0;i<forts.size();i++){
            if(forts[i]==1){
                int temp = 0;
                for(int j = i + 1;j<forts.size();j++){
                    if(forts[j]!=0 && forts[j] == -1){
                        count = max(count, temp);
                        break;
                    }
                    else if(forts[j] != 0){
                        break;
                    }
                    temp++;
                }
            }
            if(forts[i]==-1){
                int temp = 0;
                for(int j =i+1;j<forts.size();j++){
                    if(forts[j]!=0 && forts[j] == 1){
                        count = max(count,temp);
                        break;
                    }
                    else if(forts[j] != 0){
                        break;
                    }
                    temp++;
                }
            }
            else{
                continue;
            }
        }
        return count ;
    }
};