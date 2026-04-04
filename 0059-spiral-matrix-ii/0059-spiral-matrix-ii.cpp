class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> result(n , vector<int>(n));

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        int m = 1;


        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result[top][i] = m;
                m++;
            }
            top++;
            

            for (int i = top; i <= bottom; i++) {
                result[i][right] = m;
                m++;
            }
            right--;
            

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result[bottom][i] = m;
                    m++;
                }
                bottom--;
                
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result[i][left] = m;
                    m++;
                }
                left++;
            }
        }
        return result;

        
    }
};