class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        int temp1=0;
        int temp2=0;
        vector<int> result(2);
        for(int i = 0;i<n;++i){
            temp1 = nums[i];
            temp2 = target-temp1;
            for(int j = 0;j<n;++j){
                if(temp2==nums[j]&&i!=j){
                    result[0]=i;
                    result[1]=j;
                    return result;
                }
            }
        }
    }
};