class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string s="";
        if(m>=n)
        {
            for(int i=0;i<n;i++)
            {
                s+=word1[i];
                s+=word2[i];
            }
            for(int i=n;i<m;i++)
            {
                s+=word2[i];
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                s+=word1[i];
                s+=word2[i];
            }
            for(int i=m;i<n;i++)
            {
                s+=word1[i];
            }
        }
        return s;
    }
};