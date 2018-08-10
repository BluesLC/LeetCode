class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0) return false;
        std::sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size()-1;++i){
           if(nums[i]==nums[i+1])
               return true;
        }
        return false;
       
    }
};
/*运行超时
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0;i<nums.size();++i){
            for(int j = 0;j<nums.size();++j){
                if(nums[i]==nums[j]&&i!=j)
                    return true;
            }
        }
        return false;
    }
};
*/