class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i=0;
        unordered_set<int>st;
        while(i<nums.size()){
            if(st.find(nums[i])!=st.end()){
                return true;
            }else{
                st.insert(nums[i]);
                i++;
            }
        }
        return false;
    }
};