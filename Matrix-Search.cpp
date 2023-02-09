class Solution {
  public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    if (m == 0)
        return false;

    int n = matrix[0].size();
    // binary search
    int left = 0, right = m * n - 1;
    int pivotIdx, pivotElement;
    while (left <= right) {
      pivotIdx = left + (right-left)/2;
      pivotElement = matrix[pivotIdx / n][pivotIdx % n];
        if (target > pivotElement)
            left = pivotIdx + 1;
        else
            right = pivotIdx - 1;
    }
    int row = left/n, col = left%n;
    if(row<m && col < n && matrix[row][col] == target) return true;
    return false;
  }
};