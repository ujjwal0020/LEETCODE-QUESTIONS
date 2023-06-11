class Solution {
public:
    int minimizedStringLength(string s) {
    unordered_set<char>uset;
    for (int i = 0; i < s.size(); i++)
{
if (uset.find(s[i]) == uset.end())
uset.insert(s[i]);
}
return uset.size();
    }
};
