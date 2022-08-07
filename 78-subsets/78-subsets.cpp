class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        v.push_back({});
        
        for(int i=0;i<n;i++)
        {
            int m=v.size();
        for(int j=0;j<m;j++)
        {
            vector<int> k=v[j];
            k.push_back(nums[i]);
            v.push_back(k);
            
        }
        }
        return v;
    }
};