class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        for x in s:
            if(x=='(' or x=='{' or x=='['):
                st.append(x)
                continue
                
            
            if(len(st)!=0):
                char=st[-1]
                if( (char=='(' and x==')') or (char=='{' and x=='}') or ( char=='[' and x==']')):
                    st.pop()
                
                else:
                     return False 
            else:
                return False 
        return len(st)==0

        