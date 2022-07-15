class Solution {
public:
    double myPow(double x, int n) {
        /*
        recursive approach
        if(n==0) return 1;
        double temp = myPow(x,n/2);
        
        if(n%2==1) return temp*temp*x;
        return temp*temp;
        */
        
        
        double ans = 1.0;
        long nn = n;
        if(nn<0) nn = -1*nn;
        while(nn>0)
        {
            if(nn%2==1)
            {
                ans = ans * x;
                nn = nn-1;
            }
            else{
                x = x*x;
                nn = nn/2;                
            }
        }
        if(n<0) ans = (double)(1.0)/(double)(ans);
        return ans;
        
        
    }
};