class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long count=0;
        unordered_map<int,int> mp;
        int n=nums.size();
        long total=1L*n*(n-1)/2;
    for(int i=0;i<n;i++)
    {
        count+=mp[i-nums[i]];
        mp[i-nums[i]]++;
    }
    return total-count;
    }
};