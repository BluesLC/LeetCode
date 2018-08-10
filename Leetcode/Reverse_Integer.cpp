class Solution {
public:
    int reverse(int x) {
        int temp;
        long long result=0;
        if(x>0){
            while(x!=0){
                result=result*10 + x%10;
                x/=10;
            }
            if(result>INT_MAX){
                result=0;
            }
        }
        else if(x<0){
            while(x!=0){
                result=result*10 + x%10;
                x/=10;
            }
            if(result<INT_MIN){
                result=0;
            }
        }
       return result;
    }
};