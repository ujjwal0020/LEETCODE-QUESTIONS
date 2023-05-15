class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        while (n != 0) {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        if (sum == 1) {
            return true;
        }
     else if (sum == 4) {
            return false; // Avoid getting stuck in an infinite loop for unhappy numbers
        } else {
            return isHappy(sum);}
    }
};
