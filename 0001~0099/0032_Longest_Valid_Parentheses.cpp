class Solution {
public:
    int longestValidParentheses(string s) {
        string brackets_left;
        int ans = 0;

        for ( char c : s ) {
            if ( c == '(' )
                brackets_left += c;
            else {
                //避免右括弧多於左括弧的情況
                if ( brackets_left.length() != 0 ) {
                    if ( c == ')' ) {
                        brackets_left.pop_back(); //刪除配對到的左括弧(最後一個)
                        ans += 2;
                    }
                    // else 
                }
                // else 
            }
        }
        return ans;
    }
};
