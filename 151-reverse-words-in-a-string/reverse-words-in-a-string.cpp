class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>v;
        string word;
        while(ss >> word){
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string result;
        for(int i=0;i<v.size();i++){
            result+= v[i];
            if(i!=v.size()-1){
                result+=" ";
            }
        }
        return result;
    }
};