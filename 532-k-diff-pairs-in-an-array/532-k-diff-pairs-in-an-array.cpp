class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int i=0,j=1;
       while(j<n)
       {
           if(nums[j]-nums[i]==k)
           {
               count++;
               i++;
               j++;
               
               while(j<n && nums[j]==nums[j-1])
               {
                   j++;
               }
           }
           
           else if(nums[j]-nums[i]>k)
           {
               if(j-i>1)
               {
                   i++;
               }
               else
               {
                   j++;
               }
           }
           else
           {
               j++;
           }
       }
        return count;
    }
};