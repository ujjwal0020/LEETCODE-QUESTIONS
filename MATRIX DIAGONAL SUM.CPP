class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        
        for (int i = 0; i < n; i++) {
            sum += mat[i][i]; 
            sum += mat[i][n - 1 - i]; 
        }
        if (n % 2 == 1) {
            int mid = n / 2;
            sum -= mat[mid][mid];
        }
        
        return sum;
    }
};
