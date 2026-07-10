class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n);
        stack<int> chek;
       
        for(int i=0;i<n;i++){
             while(!chek.empty() && temperatures[chek.top()]<temperatures[i]){
                res[chek.top()]=i-chek.top();
                chek.pop();
                
             }
             chek.push(i);
        }
        return res;
    }
};