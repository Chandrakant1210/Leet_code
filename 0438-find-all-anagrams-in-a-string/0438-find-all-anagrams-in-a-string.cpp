class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> Pcount(26,0);
        vector<int> Scount(26,0);
        vector<int>result;
        for(auto x : p){
            Pcount[x-'a']++;
        }
        for(int i=0;i<s.size();i++){
           Scount[s[i]-'a']++;
           if(i>=p.size())
           Scount[s[i - p.size()] - 'a']--;
           if(Pcount == Scount)
           result.push_back(i-p.size()+1);
        }

        return result;
        
    }
};