class Solution {
public:
    int countGoodSubstrings(string s) {
         int count=0;
        if(s.size()<3)
        {
            return 0;
        }
        for(int i=0;i<s.size()-2;i++)
        {
            bool check=true;
         if(s[i]==s[i+1] || s[i+1]==s[i+2] || s[i+2]==s[i])
         {
             check=false;
         }
            if(check==true)
            {
                count++;
            }
        }
        return count;
    }
};