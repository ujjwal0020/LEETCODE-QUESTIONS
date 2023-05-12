class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum=arrivalTime+delayedTime;
        int d;
        if(sum>=24)
        {
           d=sum%24;
           return d;
        }
        return sum;
    }
};
