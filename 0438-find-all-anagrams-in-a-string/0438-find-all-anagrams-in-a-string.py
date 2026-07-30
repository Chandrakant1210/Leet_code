class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        pcount=[0]*26
        scount=[0]*26
        result=[]
        for i in  p:
            pcount[ord(i)-ord('a')]+=1
        for i in range(len(s)):
            scount[ord(s[i])-ord('a')]+=1
            if i>=len(p):
                 scount[ord(s[i-len(p)])-ord('a')]-=1
            if(pcount==scount):
                result.append(i-len(p)+1)
        return result
