class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i= n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        if(digits[0]==0){
            vector<int> result(n+1);
            result[0]=1;
            return result;
        }
    
    }
};
    
    
   /* vector<int> plusOne(vector<int>& digits) {
	int n = digits.size();
	long long int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum = (sum * 10) + digits[i];
	}
	sum = sum + 1;
	int count = 1;
	int tempsum = sum;
	while (tempsum/=10)
	{
		++count;
	}
	vector<int> newdigits(count);

	for (int j = count - 1; j >= 0; --j) {

		newdigits[j] = sum % 10;
		sum = sum / 10;
	}
	return newdigits;
}*/
