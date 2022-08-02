class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_map<int,int> mp;
        int c=0;
        mp[0]=1;
        int pre=0;
        for(int i=0;i<n;i++)
        {
            pre+=nums[i];
            int rem=pre%k;
           if(rem<0) rem+=k;
            if(mp.find(rem)!=mp.end())
            {
                c+=mp[rem];
            }
            mp[rem]++;
        }
        
        return c; 
    }
};



