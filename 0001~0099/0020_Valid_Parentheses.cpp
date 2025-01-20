class Solution {
public:
    bool isValid(string s) {
        string brackets_left;
        
        for ( char c : s ) {
            if ( c == '(' || c == '[' || c == '{' )
                brackets_left += c;
            else {
                //避免右括弧多於左括弧的情況
                if ( brackets_left.length() != 0 ) {
                    if ( checkisClose( brackets_left[ brackets_left.length() - 1 ] , c ) )
                        brackets_left.pop_back(); //刪除配對到的左括弧(最後一個)
                    else return false;
                }
                else return false;
            }
        }
        if ( brackets_left.length() > 0 ) return false; //還存在沒被配對到的左括弧
        else return true;
    }
    bool checkisClose(char a, char b) {
        if ( abs(int(b) - int(a)) <= 2 ) return true;
        else return false;
    }
};
