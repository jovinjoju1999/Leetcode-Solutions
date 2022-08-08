class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat[0].size();
        if(n==1) return mat[0][0];
        int i=0,j=0;
        int count=0;
        while(i<=n-1)
        {
            count+=mat[i][j];
            i++;
            j++;
        }
        int k=0,l=n-1;
        while(k<=n-1)
        {
            count+=mat[k][l];
            k++;
            l--;
            if(k==l)
        {
            k++;
            l--;
                
        }
          
        }
        
        
        
            return count;
        
        
    }
};