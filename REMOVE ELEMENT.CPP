class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> k;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]!=val)
                k.push_back(nums[i]);
        }
        nums = k; 
        return k.size();
    }
};
