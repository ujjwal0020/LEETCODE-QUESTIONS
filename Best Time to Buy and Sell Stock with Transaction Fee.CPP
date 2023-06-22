class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        if (n<2) return 0;
    int maxProfit=0; 
    int buyPrice= prices[0];
        for (int i=1;i<n;i++){
            if(prices[i]<buyPrice) {
                buyPrice=prices[i];
            } 
            else if (prices[i]>buyPrice+fee) {
                maxProfit=maxProfit+prices[i]-buyPrice-fee;
                buyPrice=prices[i]-fee;
            }
        }
        return maxProfit;
    }
};
