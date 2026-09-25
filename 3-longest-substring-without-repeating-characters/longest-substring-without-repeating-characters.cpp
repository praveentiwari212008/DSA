class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> freq(256,0);
      int left=0,result=0;
      for(int right=0;right<s.size();right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            result=max(result,right-left+1);
      }   
       return result; 
    }
};