class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (const string& detail : details) {
            char c = detail[11]; // 12th character (0-indexed)
            char d = detail[12]; // 13th character (0-indexed)
            int age = stoi(string(1, c) + string(1, d));
            cout << "Detail: " << detail << ", Age: " << age << endl; // Debug output
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};
