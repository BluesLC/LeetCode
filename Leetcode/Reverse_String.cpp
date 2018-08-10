class Solution {
public:
    string reverseString(string s) {
        int n = s.size();
        string result;
        auto begin = s.begin();
        auto end = s.end();
        for(;end!=begin;end--){
            result+= *(end-1);
        }
        return result;
    }
};