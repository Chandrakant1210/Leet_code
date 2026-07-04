class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(auto x: strs){
            string k=x;
            sort(k.begin(),k.end());
            res[k].push_back(x);
        }
        vector<vector<string>> r;
        for(auto x: res){
            r.push_back(x.second);
        }
         return r;
    }
   
};