class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int n =S.size();
        vector<vector<int>> result;
        for(int i = 0;i<n;++i){
        int count =0;
        for(;i<n&&S[i]==S[i+1];++i){
            count++;
        }
        if(count>=2){
            vector<int> num={i-count,i};
            result.push_back(num);
        }
        }
        return result;
    }
};