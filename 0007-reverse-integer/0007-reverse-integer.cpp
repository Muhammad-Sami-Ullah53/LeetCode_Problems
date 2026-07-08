class Solution {
public:
    int reverse(int n) {
        int rev=0,rem=0;
        while(n!=0){
            rem=n%10;
            n/=10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
            return 0;
            else
            rev=(rev*10)+rem;
        }
    return rev;
    }
};