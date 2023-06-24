
class Solution {
public:
    int lengthOfLastWord(string s) {
         reverse(s.begin(), s.end());
    int n=s.size();
    int length=0;
    bool wordStarted = false;
    for (int i= 0;i<n;i++) {
        if (s[i]!= ' ') {
            if (!wordStarted){
                wordStarted = true;
            }
            length++;
        } else if(wordStarted){
            break;
        }
    }
    return length;
    }
};
