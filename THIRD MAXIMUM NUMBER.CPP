// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         unordered_set<int>intSet;
//         for (int i = 0; i < nums.size(); i++)
//             {
//                if (intSet.find(nums[i]) == intSet.end())
//                intSet.insert(nums[i]);
//             }
//             vector<int> nums1(intSet.begin(), intSet.end());
//     //    int s=nums.size();
//     int s=intSet.size();
// int k;
//         if(s<3)
//         {
//             for(int i=0;i<nums.size();i++)
//             {
//                 return nums[s-1];
//             }
//         }
//         if(s>=3)
//         {
//             for(int i=0;i<nums1.size();i++)
//             {
//                 k=nums1[2];
//             }
//         }
//         return k;
//     }
// };

// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         unordered_set<int> intSet;
//         int s=nums.size();
//         for (int i = 0; i < nums.size(); i++) {
//             if (intSet.find(nums[i]) == intSet.end()) {
//                 intSet.insert(nums[i]);
//             }
//         }
        
//         vector<int> nums1(intSet.begin(), intSet.end());
        
//         if (nums.size() < 3) {
//             for(int i=0;i<s;i++)
//             {
//                 return nums[s-1];
//             }
//         }
        
//         sort(nums1.rbegin(), nums1.rend());
        
//         return nums1[2];
//     }
// };

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> intSet; // Using a set instead of an unordered_set for ordered storage
        for (int i = 0; i < nums.size(); i++) {
            intSet.insert(nums[i]);
            if (intSet.size() > 3) {
                intSet.erase(intSet.begin()); // Keep the set size limited to 3
            }
        }
        
        if (intSet.size() < 3) {
            return *max_element(intSet.begin(), intSet.end());
        }
        
        return *intSet.begin(); // Return the third largest element
    }
};

