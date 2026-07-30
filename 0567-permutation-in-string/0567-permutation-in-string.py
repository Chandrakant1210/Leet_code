class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1)>len(s2):
            return False
        hash1=[0]*26
        hash2=[0]*26
        for i in range(len(s1)):
            hash1[ord(s1[i])-ord('a')]+=1
            hash2[ord(s2[i])-ord('a')]+=1
        if hash1==hash2:
            return True
        for i in range(len(s1),len(s2)):
            hash2[ord(s2[i])-ord('a')]+=1
            hash2[ord(s2[i-len(s1)])-ord('a')]-=1
            if hash1==hash2:
                return True
        return False
            
