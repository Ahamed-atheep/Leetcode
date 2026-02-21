class Solution {
public:
    bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        {
            if (n % i == 0) return false;
        }

    return true;
}
    int countPrimeSetBits(int left, int right) {
        int anscnt=0;
        for(int i=left;i<=right;i++)
        {
            int cnt=0;
            int n=i;
            while(n>1)
            {
                cnt+=(n&1);
                n>>=1;
            }
            if(n==1) cnt++;
            if(isPrime(cnt)) anscnt++;
        }
        return anscnt;
    }
};