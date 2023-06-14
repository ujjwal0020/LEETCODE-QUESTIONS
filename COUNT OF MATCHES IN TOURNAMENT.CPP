class Solution {
public:
    int numberOfMatches(int n) {
        int matchcount=0;
         int s;
        while(n>1)
        {
        if(n%2==0)
        {
            matchcount=matchcount+n/2;
            n=n/2;
        }
        else
        {
            matchcount=matchcount+(n-1)/2;
            n=(n-1)/2+1;
        }
        }
        return matchcount;
    }
};
