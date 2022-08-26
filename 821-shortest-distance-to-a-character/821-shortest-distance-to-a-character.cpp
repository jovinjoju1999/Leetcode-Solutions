class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int l=0;
        int r=0;
        int mini=INT_MAX;
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
            mini=INT_MAX;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==c)
                {
                    mini=min(mini,abs(i-j));
                }
                
            }
            v.push_back(mini);
        }
        return v;
    }
};