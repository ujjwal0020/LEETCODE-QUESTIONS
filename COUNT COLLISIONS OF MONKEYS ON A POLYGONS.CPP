class Solution { 
public: 
     
    long long power(long long x, long long y, long long p) 
{ 
  
    // Initialize answer 
    long long res = 1; 
  
    // Check till the number becomes zero 
    while (y > 0) { 
  
        // If y is odd, multiply x with result 
        if (y % 2 == 1) 
            res = (res * x)%p; 
  
        // y = y/2 
        y = y >> 1; 
  
        // Change x to x^2 
        x = (x * x)%p; 
    } 
    return res % p; 
} 
    int monkeyMove(int n) { 
         
        long long ans=1; 
        int mod=1e9+7; 
         
         
         
        return (power(2,n,mod)+mod-2)%mod; 
    } 
};
