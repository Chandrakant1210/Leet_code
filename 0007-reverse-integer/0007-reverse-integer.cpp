class Solution {
public:
    int reverse(int x) {
        long int s=0;
        cout<<INT_MAX<<" "<<INT_MIN;
        
        while(x){
            s=s*10+(x%10);
            x/=10;
        }
        if(s>INT_MAX || s<INT_MIN)
        return 0;
        return s;

    }
};