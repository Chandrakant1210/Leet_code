class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        if(s1.size()>s2.size())
        return false;

        for(int i=0;i<s1.size();i++){
            hash1[s1[i]-'a']++;
            hash2[s2[i]-'a']++;
        }
        int i=0;
        int j=s1.size();
        
        while(j<s2.size()){
            if(hash1==hash2)
            break;
           
        else{
                
            hash2[s2[i]-'a']--;
            hash2[s2[j]-'a']++;
            i++; j++;
        }
            
        }
        if(hash1==hash2)
        return true;
        return false;
    }
};