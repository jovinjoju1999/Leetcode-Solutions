class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum1=0;
        for(auto i:nums)
        {
            sum1+=i;
        }
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=max(nums[i],nums[i-1]+1);
        }
        int sum2=0;
        for(auto i:nums)
        {
            sum2+=i;
        }
        return sum2-sum1;
    }
};