class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
       string a="";
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            {
                a+=s[i];
            }
        }
        int m=a.size();
        int l=0,r=m-1;
        while(l<=r)
        {
            if(tolower(a[l])!=tolower(a[r]))
                return false;
            l++;
            r--;
        }
        return true;
    }
};