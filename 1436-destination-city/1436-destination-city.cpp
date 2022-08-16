class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;
        for(int i=0;i<paths.size();i++)
        {
            mp[paths[i][0]]++;
        }
         for(int i=0;i<paths.size();i++)
        {
            for(int j=0;j<paths[0].size();j++)
            {
                if(mp[paths[i][j]]<1)
                {
                    return paths[i][j];
                }
            }
        }
        return 0;
    }
};