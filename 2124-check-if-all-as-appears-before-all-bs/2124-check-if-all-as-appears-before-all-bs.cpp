class Solution {
public:
    bool checkString(string s) {
        int count=0;
        bool b=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                count=i;
                b=true;
                break;
                
            }
        }
        for(int i=count;i<s.size();i++)
        {
            if(s[i]=='a' && b==true)
            {
                return false;
                break;
            }
        }
        return true;
    }
};