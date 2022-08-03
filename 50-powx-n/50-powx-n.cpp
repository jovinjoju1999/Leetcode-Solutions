class Solution {
    public:
        double myPow(double x, long long int n) {
            
            if(n==0) 
            {
                return 1;
            }
            
             else if(n<0)
            {
                return myPow(1/x,-n);
            }
            
            
           else if(n%2==0) 
            {    
                double temp=myPow(x,n/2);
                return temp*temp;
            }
            else
            {
               return x* myPow(x,n-1);
            }
           
            
        }
    };