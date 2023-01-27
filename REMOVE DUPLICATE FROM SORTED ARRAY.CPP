class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>u;
        for(int i=0;i<nums.size();i++)
        {
          u.insert(nums[i]);
        }
         nums.clear();
       for(auto it=u.begin();it!=u.end();it++) 
        {
       nums.push_back(*it);
        }
        sort(nums.begin(),nums.end());
       return nums.size(); 
    }
};
