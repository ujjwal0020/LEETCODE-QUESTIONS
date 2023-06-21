class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
      vector<pair<int,string>>a;
        for(int i=0;i<names.size();i++)
        {
            a.push_back({heights[i],names[i]});
        }
        vector<string>ans;
        sort(a.rbegin(),a.rend());
        for(int i=0;i<names.size();i++)
        {
            ans.push_back(a[i].second);
        }
        return ans; 
    }
};
