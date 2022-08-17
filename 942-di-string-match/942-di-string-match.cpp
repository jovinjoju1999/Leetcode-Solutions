class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0,h=s.size(),i=0;
        vector<int> v;
        while(l<=h)
        {
            if(s[i]=='I')
            {
                v.push_back(l);
                l++;
            }
            else
            {
                v.push_back(h);
                h--;
            }
            i++;
        }
        return v;
    }
};