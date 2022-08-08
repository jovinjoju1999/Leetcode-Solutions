class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& matrix) {
       for(int i=0;i<matrix.size();i++)
       {
          reverse(matrix[i].begin(),matrix[i].end());
           for(int j=0;j<matrix[i].size();j++)
           {
               if(matrix[i][j]==0)
               {
                   matrix[i][j]=1;
               }
               else
               {
                   matrix[i][j]=0;
               }
           }
       }
        return matrix;
    }
};