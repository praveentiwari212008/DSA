class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            if(map.find(target-nums[i])!=map.end()){
                return {map[target-nums[i]]+1,i+1};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};