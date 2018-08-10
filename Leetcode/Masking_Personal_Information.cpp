class Solution {
public:
    string maskPII(string S) {
        int n = S.size();
        string result;
		//判断为电子邮箱
        if((S[n-1]>64 && S[n-1]<91)||(S[n-1]>96 && S[n-1]<123)){                         
            int i =0;
            for(;i<n;++i){
                if(S[i]=='@'){
                    if(S[0]>64&&S[0]<91){
                        S[0] +=32; 
                    }
                    if(S[i-1]>64&&S[i-1]<91){
                        S[i-1]+=32;
                    }
                    result+=S[0];
                    result+="*****";
                    result+=S[i-1];
                    break;
                }
            }
            for(;i<n;++i){
                if(S[i]>64&&S[i]<91){
                        S[i]+=32;
                    }
                result+=S[i];
            }
            return result;
        }
		//判断为电话号码
        else{ 
            int count=0;
            string num;
            for(int i=0;i<n;++i){
                if(S[i]>47&&S[i]<58){
                    num+=S[i];
                    count++;
                }
            }
            if(count==10){
                result+="***-***-";
            }
            else if(count==11){
                result+="+*-***-***-";
            }
            else if(count==12){
                result+="+**-***-***-";
            }
            else if(count==13){
                result+="+***-***-***-";
            }
            for(int i=4;i>0;--i){
                result+=num[count-i];
            }
        }
        return result;
    }
};