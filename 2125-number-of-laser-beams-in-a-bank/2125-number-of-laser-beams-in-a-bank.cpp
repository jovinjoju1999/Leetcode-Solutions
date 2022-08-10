class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       
        int maincount=0;
        vector<int> v;
        for(int i=0;i<bank.size();i++)
        {
            int count=0;
            for(int j=0;j<bank[i].size();j++)
            {
                
                if(bank[i][j]==49)
                {
                    count++;
                    
                }
               
            }
             if(count>0)
                {
                    v.push_back(count);
                }
      
        }
        for(int i=1;i<v.size();i++)
        {
           
            maincount+=v[i]*v[i-1];
        }
       return maincount;
    }
};