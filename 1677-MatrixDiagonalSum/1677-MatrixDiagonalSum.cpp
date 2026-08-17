// Last updated: 17/08/2026, 18:31:01
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum+=mat[i][i];
        }

        for(int i = 0; i<n; i++){
            sum += mat[i][n-i-1];
        }

        //for duplicate
        if(n&1){
            sum -= mat[n/2][n/2];
        }
        
        return sum;
    }
};