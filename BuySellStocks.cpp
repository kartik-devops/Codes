class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int maxprof=INT_MIN , profit=0;
        int minprice=INT_MAX;        
        for(int i=0;i<arr.size();i++)
        {
            int curr_profit = arr[i]-minprice;
            maxprof = max(maxprof , curr_profit);
            minprice = min(minprice , arr[i]);
                
        }
        
        if(maxprof < 0)
            return 0;
     return maxprof ;  
    }
};
