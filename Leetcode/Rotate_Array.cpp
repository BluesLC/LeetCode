class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		int n = nums.size();
        if(k>n){
            k%=n;
        }
        vector<int> temp(k);
		for (int i = 0; i < k; ++i) {
			temp[i] = nums[n - k + i];
		}
		for (int j = n - k; j >0 ; --j) {
			nums[j +k- 1] = nums[j - 1];
		}
		for (int l = 0; l < k; ++l) {
			nums[l] = temp[l];
		}
  
        
    }
};