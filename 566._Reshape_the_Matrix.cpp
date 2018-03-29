class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int init_row = nums.size(), init_col = nums[0].size();
        if (m * n != r * c) {
            return nums;
        }
        vector<vector<int>> rev(r, vector<int>(c, 0));
        for (int i = 0; i < init_row; i++) {
            for (int j = 0; j < init_col; j++) {
                int k = i * init_col + j;
                rev[k / c][k % c] = nums[i][j];
            }
        }
        return res;
    }
};

