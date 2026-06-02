class Solution {
public:
    double calcPow(double x,int n)
    {
        if(n==0) return 1;
        if(n==1) return x;
        if(n%2==0) return calcPow(x*x,n/2);
        return x*calcPow(x*x,n/2);
    }
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        if(n<0)
        {
            x=1/x;
            n=-n;
        }
        return calcPow(x,n);
    }
};