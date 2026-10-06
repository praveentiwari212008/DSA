class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>map;
        map[0]=-1;
        int curSum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            curSum+=(nums[i]==1)? 1:-1;
            if(map.find(curSum)!=map.end()){
                ans=max(ans,i-map[curSum]);
            }
            else{
                map[curSum]=i;
            }
        }
        return ans;
        
    }
};