class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> record;
        vector<int> result;
        
        for(int i=0;i<n1;++i){
            record[nums1[i]]++;
        }
        for(int j=0;j<n2;++j){
            if(record[nums2[j]]>0){
                result.push_back(nums2[j]);
                record[nums2[j]]--;
            }
        }
        return result;
    }
};