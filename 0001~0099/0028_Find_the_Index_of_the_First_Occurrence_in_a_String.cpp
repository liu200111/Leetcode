class Solution {
public:
    int strStr(string haystack, string needle) {
        int count = 0;
        if (haystack.length() < needle.length()) return -1;
        
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            for (int j = 0; j < needle.length(); ++j) {
                if ( haystack[i + j] == needle[j] )
                    ++count;
            }
            if ( count == needle.length() )
                return i;
            else
                count = 0;
        }
        return -1;
    }
};
