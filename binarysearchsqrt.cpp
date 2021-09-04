class Solution {
public:
    int mySqrt(int num) {
        int ans;
        int start=1;
        int end = num;
        while(start <= end)
        {
        int mid = (start+(end-start)/2);
        if(mid == num/mid)
        {
            return mid ; 
        }
        if(mid < num/mid)
        {
            start = mid+1;
            ans = mid ;
        }
        if(mid > num/mid)
        {
            end = mid-1;
        }
    }
    
    return ans ;
    }
};
