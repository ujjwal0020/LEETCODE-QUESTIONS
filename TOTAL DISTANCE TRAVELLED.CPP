class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int res = 0;
        while(mainTank>=5 && additionalTank>=1){
            res=res+(5*10);
            mainTank -= 5;
            mainTank++;
            additionalTank--;
        }
        res += (mainTank*10);
        return res;
    }
};
