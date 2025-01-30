class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // save previous matrix to a vector
        vector<int> store;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                store.push_back(matrix[i][j]);
        }

        // change previous matrix in different arrangement 
        for (int i = n - 1; i >= 0; --i) {
            for (int j = 0; j < n; ++j) {
                matrix[j][i] = store[0];
                store.erase( store.begin() );
            }
        }        
    }
};
