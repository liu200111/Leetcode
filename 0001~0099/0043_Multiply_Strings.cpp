class Solution {
public:
    string multiply(string num1, string num2) {
        // string -> long long (stoll)
        long long x = std::stoll(num1);
        long long y = std::stoll(num2);
        return to_string(x * y);
    }
};
