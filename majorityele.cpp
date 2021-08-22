class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int c=1,ans=0;
        int n = nums.size() ;
        if(nums.size()==1)
        {
            ans = nums[0];
        }
        for(int i=1;i<nums.size() ;i++)
        {
            
            if(nums[i-1]==nums[i])
            {
                c++;
            }
            else
            {
                c=1;
            }
            if(c > n/2)
            {
                ans = nums[i];
                break;
            }
        }
        return ans ;
    }
};
