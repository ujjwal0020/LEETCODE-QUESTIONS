class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        for (int num:nums) {
            umap[num]++;
        }
        int k=0;
        for (auto pair:umap) {
            if (pair.second==1) {
                k=pair.first;
                break;
            }
        }
        return k;
    }
};
