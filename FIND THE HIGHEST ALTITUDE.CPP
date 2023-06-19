class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < gain.size(); i++) {
            int k = v[i] + gain[i];
            v.push_back(k);
        }
        int maxAltitude=*max_element(v.begin(),v.end());
        return maxAltitude;
    }
};
