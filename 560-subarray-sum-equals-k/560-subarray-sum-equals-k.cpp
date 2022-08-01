class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int c=0;
        int n=nums.size();
        int pre=0;
        for(int i=0;i<n;i++)
        {
            pre+=nums[i];
            if(pre==k) c++;
            if(mp.find(pre-k)!=mp.end())
            {
                c+=mp[pre-k];
            }
            mp[pre]++;
        }
        
        return c;
    }
};