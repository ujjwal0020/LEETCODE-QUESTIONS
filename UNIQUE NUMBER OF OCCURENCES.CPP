class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap;
        for (int i = 0; i < arr.size(); i++) {
            umap[arr[i]]++;
        }
        unordered_set<int> occurrenceSet;
        for (auto it = umap.begin(); it != umap.end(); ++it) {
            int occurrenceCount = it->second;
            if (occurrenceSet.find(occurrenceCount) != occurrenceSet.end()) {
                return false;  // Duplicate occurrence count found
            }
            occurrenceSet.insert(occurrenceCount);
        }
        return true;  // All occurrence counts are unique
    }
};
