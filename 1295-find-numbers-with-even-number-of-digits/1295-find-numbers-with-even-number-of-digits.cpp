class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int m=0;
      for(int i=0;i<nums.size();i++)
      {
          count=0;
          while(nums[i]!=0)
          {
              nums[i]/=10;
              count++;
          }
          if(count%2==0)
          {
              m++;
          }
      }
        return m;
    }
};