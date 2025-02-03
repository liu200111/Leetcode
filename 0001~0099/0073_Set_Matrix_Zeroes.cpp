class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> place = getZeros(matrix);
        while ( place.size() != 0 ) {
            for (int i = 0; i < matrix[0].size(); ++i)
                matrix[place[0]][i] = 0;
            for (int i = 0; i < matrix.size(); ++i)
                matrix[i][place[1]] = 0;
            place.erase(place.begin(), place.begin() + 2); //delete the first two digits in the vector
        }
    }
    // get the position of each zero
    vector<int> getZeros(vector<vector<int>>& matrix) {
        vector<int> place;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] == 0) {
                    place.push_back(i);
                    place.push_back(j);
                }
            }
        }
        return place;
    }
};
