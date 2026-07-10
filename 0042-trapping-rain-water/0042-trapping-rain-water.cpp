class Solution {
public:
    int trap(vector<int>& height) {
        int s=0;
        int n=height.size();
       vector<int> left;
       vector<int> right;
        
        int l_max=height[0];
        int r_max=height[n-1];
        for( int i=0,j=n-1;i<n,j>=0;i++,j--){
            if(height[i]>l_max){
                
                l_max=height[i];
                left.push_back(l_max);
                
            }
            else{
                left.push_back(l_max);
            }
            if(height[j]>r_max){
                r_max=height[j];
               right.push_back(r_max);
            }
            else{
                right.push_back(r_max);
            }
        }
        reverse(right.begin(), right.end());
        for(int i=0;i<n;i++){
           int m=min(left[i],right[i]);
           cout<<left[i]<<"  "<<right[i]<<" "<<s<<" "<<"\n";
           s=s+(m-height[i]);
        }
        return s;
    }
};