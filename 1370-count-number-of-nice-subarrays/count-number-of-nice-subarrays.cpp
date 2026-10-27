class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int count=0;
        int prefixsum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                prefixsum++;
            }
            if(mp.find(prefixsum-k)!=mp.end()){
                count+=mp[prefixsum-k];
            }
           mp[prefixsum]++;
        }
        return count;
        
    }
};