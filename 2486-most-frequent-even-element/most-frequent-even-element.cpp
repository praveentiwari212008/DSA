class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        vector<pair<int,int>>v;
        for(auto it : mp){
            if(it.first%2==0){
            v.push_back({it.first,it.second});
            }
        }
        if (v.empty()) { 
            return -1; 
          }
        sort(v.begin(),v.end(),[] (auto &a ,auto &b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        }
        
        );
        return v[0].first;
    }
};