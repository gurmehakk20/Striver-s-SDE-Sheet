class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 1) return x;
        if (n == 0) return 1;
        if (n < 0){
            return myPow(1/x, -n);
        }
        double p = myPow(x, n/2);
        if (n%2) return x * p * p;
        else return p*p;
    }
};