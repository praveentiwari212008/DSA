class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
         unordered_map<int,int>map;
         for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum=nums1[i]+nums2[j];
                map[sum]++;
            }
         }
         for(int k=0;k<nums3.size();k++){
            for(int l=0;l<nums4.size();l++){
                int sum=nums3[k]+nums4[l];
                if(map.find(-sum)!=map.end()){
                    count+=map[-sum];
                }


            }
         }
    return count;
    }
};