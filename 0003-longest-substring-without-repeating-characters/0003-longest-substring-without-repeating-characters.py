class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res=[-1]*128
        start=-1
        siz=0
        for i in range(len(s)):
            if res[ord(s[i])-ord('a')]>start:
                start=res[ord(s[i])-ord('a')]
            res[ord(s[i])-ord('a')]=i
            siz=max(siz,i-start)
        return siz
        