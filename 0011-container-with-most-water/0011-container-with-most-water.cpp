class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=INT_MIN;
        int l=0;
        int r=height.size()-1;


    //    brute force
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int h=min(height[i],height[j]);
        //         int b=j-i;
        //         if(m<h*b)
        //         m=h*b;
        //     }
        // }
        while(l<r){
            int h=min(height[l],height[r]);
            int b=r-l;
            if(m<h*b)
            m=h*b;
            if(height[l]<height[r])
            l++;
            else
            r--;
        }

       
        return m;
   
   
   
   
  
  
  
  
    }
};