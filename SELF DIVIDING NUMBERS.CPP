class Solution {
public:
    bool isSelfDividing(int n) {
        int num = n;
        while(num > 0) {
            int digit = num % 10;
            if(digit == 0 || n % digit != 0) {
                return false;
            }
            num /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++) {
            if(isSelfDividing(i)) {
                res.push_back(i);
            }
        }
        return res;
    }
};
