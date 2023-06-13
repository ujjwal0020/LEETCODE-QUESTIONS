class Solution {
public:
    char repeatedCharacter(string s) {
        int repeated[256]={0}; //256 for ascii
        for(int i=0;i<s.length();i++)
        {
            repeated[s[i]]++;
            if(repeated[s[i]]==2)
                return s[i];
        }
        return -1;
    }
};
