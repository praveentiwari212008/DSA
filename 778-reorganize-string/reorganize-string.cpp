class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        string ans="";
        unordered_map<char,int>mp;
        for(char it : s){
            mp[it]++;
            if(mp[it]>(n+1)/2){
                return "";
            }
        }
        priority_queue<pair<int,char>>pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        while(pq.size()>=2){
            auto p1=pq.top();
                pq.pop();
                auto p2=pq.top();
                pq.pop();
            ans.push_back(p1.second);
            p1.first--;
            ans.push_back(p2.second);
            p2.first--;
            if(p1.first>0){
                pq.push(p1);
            }
             if(p2.first>0){
                pq.push(p2);
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};