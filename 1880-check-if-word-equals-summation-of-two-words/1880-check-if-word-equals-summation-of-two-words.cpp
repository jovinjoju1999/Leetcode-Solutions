class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int f=0,s=0,t=0;
        
        for(int i=0;i<firstWord.size();i++)
        {
            f=f*10+(firstWord[i]-'a');
        }
        for(int i=0;i<secondWord.size();i++)
        {
            s=s*10+(secondWord[i]-'a');
        }
        for(int i=0;i<targetWord.size();i++)
        {
            t=t*10+(targetWord[i]-'a');
        }
        
        if(f+s==t)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};