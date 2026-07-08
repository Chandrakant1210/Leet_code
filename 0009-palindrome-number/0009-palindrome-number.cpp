class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) {
            return false;
        }
       long n=0,t=x; 
       while(t){
        n=n*10+(t%10);
        t/=10;
       }
      
       return n==x;
    }
};