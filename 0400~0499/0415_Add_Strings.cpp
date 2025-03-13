class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum;
        int carrier = 0;
        int digit1 = num1.length() - 1;
        int digit2 = num2.length() - 1;
        string ans = "";

        while (digit1 >= 0 && digit2 >= 0) {
            sum = (num1[digit1] - '0') + (num2[digit2] - '0') + carrier;
            if (sum > 9) {
                carrier = 1;
                sum -= 10;
            }
            else carrier = 0;

            ans.insert(0, to_string(sum));
            digit1--;
            digit2--;
        }

        // num1 is longer
        while (digit1 >= 0) {
            sum = num1[digit1] - '0' + carrier;
            if (sum > 9) {
                carrier = 1;
                sum -= 10;
            }
            else carrier = 0;

            ans.insert(0, to_string(sum));
            digit1--;
        }
        
        // num2 is longer
        while (digit2 >= 0) {
            sum = num2[digit2] - '0' + carrier;
            if (sum > 9) {
                carrier = 1;
                sum -= 10;
            }
            else carrier = 0;

            ans.insert(0, to_string(sum));
            digit2--;
        }
        // The final carrier is 1
        if (carrier) ans.insert(0, "1");

        return ans;
    }

};
