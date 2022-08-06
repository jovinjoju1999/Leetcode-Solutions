class Solution {
public:
    int rev(int n)
    {
        int rem;
        int reve=0;
        while(n!=0)
        {
            
          rem=n%10;
           reve=reve*10+rem;
        n/=10;
            
        }
        return reve;
        
    }
    
    
    
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        long count=0;
        for(int i=0;i<nums.size();i++)
        {
            count+=mp[nums[i]-rev(nums[i])];
            mp[nums[i]-rev(nums[i])]++;
        }
        int m=1000000007;
        return count%m;
    }
};