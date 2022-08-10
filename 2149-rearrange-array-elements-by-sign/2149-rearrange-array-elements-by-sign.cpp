class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                a.push_back(nums[i]);
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i+=2)
        {
            nums[i]=a[i/2];
            nums[i+1]=b[i/2];
        }
        
       return nums; 
    }
};