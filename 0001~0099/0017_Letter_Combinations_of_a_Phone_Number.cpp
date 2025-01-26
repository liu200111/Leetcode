class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans = {};
        vector<string> temp;

        if (digits != "") {
            ans = getInput(digits[0]);
            //Processing permutations and combinations
            for ( int i = 1 ; i < digits.length() ; ++i ) {
                temp.clear();
                temp = getInput(digits[i]);
                ans = changeVector(ans, temp, digits[i], i);
            }
        }        
        return ans;
    }

    vector<string> getInput(char number) {
        vector<string> temp;
        if (number == '2') {
            temp.push_back("a");
            temp.push_back("b");
            temp.push_back("c");
        }
        else if (number == '3') {
            temp.push_back("d");
            temp.push_back("e");
            temp.push_back("f");
        }
        else if (number == '4') {
            temp.push_back("g");
            temp.push_back("h");
            temp.push_back("i");
        }
        else if (number == '5') {
            temp.push_back("j");
            temp.push_back("k");
            temp.push_back("l");
        }
        else if (number == '6') {
            temp.push_back("m");
            temp.push_back("n");
            temp.push_back("o");
        }
        else if (number == '7') {
            temp.push_back("p");
            temp.push_back("q");
            temp.push_back("r");
            temp.push_back("s");
        }
        else if (number == '8') {
            temp.push_back("t");
            temp.push_back("u");
            temp.push_back("v");
        }
        else {
            temp.push_back("w");
            temp.push_back("x");
            temp.push_back("y");
            temp.push_back("z");
        }
        return temp;
    }

    vector<string> changeVector(vector<string> ans, vector<string> temp, char number, int times) {
        int multiple = 0;
        int length = ans.size();
        // size
        while ( multiple < temp.size() - 1) {
            for ( int i = 0; i < length; ++i ) {
                ans.push_back(ans[i]);
            }
            ++multiple;
        }

        // add element
        for ( int i = 0; i < temp.size(); ++i ) {
            for ( int j = i*ans.size()/temp.size(); j < (i+1)*ans.size()/temp.size(); ++j ) {
                ans[j] += temp[i];
            }
        }
        
        return ans;
    }
};
