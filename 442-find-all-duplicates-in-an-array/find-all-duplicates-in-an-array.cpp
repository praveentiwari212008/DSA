class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(int x : nums){
            map[x]++;
        }
        for(auto x : map){
            if(x.second ==2){
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};