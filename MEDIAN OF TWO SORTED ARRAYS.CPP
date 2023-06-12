class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++) {
            v.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int s = v.size();
        if (s % 2 != 0) {
            int r = (s + 1) / 2;
            return v[r - 1];
        } else {
            int u = s / 2;
            return (v[u] + v[u - 1]) / 2.0;
        }
    }
};
