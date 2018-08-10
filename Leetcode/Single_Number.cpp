class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        for(int i = 0; i<n;++i){
           if(isCouple(nums,i,n)==false) return nums[i];
        }
    }
private:
    bool isCouple(vector<int>& nums,int i,int n){
        for(int j = 0;j<n;++j){
            if(nums[i]==nums[j]&&i!=j)
            return true;
        }
        return false;
    }
};
    