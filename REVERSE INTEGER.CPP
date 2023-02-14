class Solution {
public:
    int reverse(int x) {
        long sum=0;

        while(x!=0)
        {
            long d=x%10;
            sum=sum*10+d;
            x=x/10;
        }
        if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }
        return sum;
        
    }
};
