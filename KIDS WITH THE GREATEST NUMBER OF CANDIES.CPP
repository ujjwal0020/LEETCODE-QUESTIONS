class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandy=*max_element(candies.begin(), candies.end());
        vector<bool>ret;
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=maxcandy) ret.push_back(true);
            else ret.push_back(false);

        }
        return ret;
    }
};
