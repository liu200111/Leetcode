class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            string str = to_string(num);
            num = 0;
            for (int i = 0; i < str.length(); ++i)
                num += str[i] - '0';  // The original output is the ASCII code of the character, so the number 0 needs to be subtracted
        }
        return num;
    }
};
