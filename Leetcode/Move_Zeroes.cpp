class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int temp;
        for(int j=0;j<n-1;++j){
        for(int i=0;i<n-1-j;++i){
            if(nums[i]==0){
                
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
        }
    }
    }
};