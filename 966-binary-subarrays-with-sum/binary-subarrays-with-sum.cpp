class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int count=0,prefixsum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-goal)!=mp.end()){
                count+=mp[prefixsum-goal];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};