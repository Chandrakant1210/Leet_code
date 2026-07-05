class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> res(256,-1);
        int start=-1, len=0;
        for(int i=0;i<s.size();i++){
            if(res[s[i]]>start)
            start=res[s[i]];
            res[s[i]]=i;
            len=max(len,i-start);
        }
        return len;
    }
};