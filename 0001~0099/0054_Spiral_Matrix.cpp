class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int height = matrix.size();
        int width = matrix[0].size();
        int boundary_top = 0;
        int boundary_bottom = height-1;
        int boundary_left = 0;
        int boundary_right = width-1;

        while ( boundary_top <= boundary_bottom && boundary_left <= boundary_right ) { 
            // right
            for (int i = boundary_left; i <= boundary_right; ++i) 
                ans.push_back(matrix[boundary_top][i]);
            boundary_top++;

            // down
            for (int i = boundary_top; i <= boundary_bottom; ++i) 
                ans.push_back(matrix[i][boundary_right]);
            boundary_right--;

            // left
            if ( boundary_top <= boundary_bottom ) {  // Avoid looking back when the matrix is ​​rectangular
                for (int i = boundary_right; i >= boundary_left; --i) 
                    ans.push_back(matrix[boundary_bottom][i]);
                boundary_bottom--;
            }
            
            // up
            if ( boundary_left <= boundary_right ) {  // Avoid looking back when the matrix is ​​rectangular
                for (int i = boundary_bottom; i >= boundary_top; --i) 
                    ans.push_back(matrix[i][boundary_left]);
                boundary_left++;
            }
        }
      
        return ans;
    }
};
