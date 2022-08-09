class Solution {
public:
    bool pal(string str)
    {
        int l=0;int r=str.size()-1;
        while(l<=r)
        {
            if(str[l]!=str[r])
            {
                return false;
                
            }
            l++;
            r--;
            
        }
        return true;
    }
    
    
    
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(pal(words[i]))
            {
                return words[i];
                break;
            }
        }
        return "";
    }
};