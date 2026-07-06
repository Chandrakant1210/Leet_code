class Solution {
public:
    bool isPalindrome(string s) {
        string s2="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            s2+=s[i];
        }
         transform(s2.begin(), s2.end(), s2.begin(),::tolower);
        string s3=s2;
        reverse(s2.begin(),s2.end());
        cout<<s3<<s2;
        
        return s3==s2;
    }
};