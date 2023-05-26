class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> uSet;
        unordered_set<int> uSet2;
        
        for (int i = 0; i < nums1.size(); i++) {
            if (uSet.find(nums1[i]) == uSet.end())
                uSet.insert(nums1[i]);
        }
        
        for (int i = 0; i < nums2.size(); i++) {
            if (uSet2.find(nums2[i]) == uSet2.end())
                uSet2.insert(nums2[i]);
        }
        
        vector<int> result;
        for (int num : uSet) {
            if (uSet2.find(num) != uSet2.end())
                result.push_back(num);
        }
        
        return result;
    }
};
