class Solution {
public:
    string decodeString(string s) {

        stack<int> nums;
        stack<string> strs;

        string current = "";
        int num = 0;

        for (char c : s) {

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            else if (c == '[') {
                nums.push(num);
                strs.push(current);

                num = 0;
                current = "";
            }

            else if (c == ']') {

                int n = nums.top();
                nums.pop();

                string old = strs.top();
                strs.pop();

                string temp = "";

                for (int i = 0; i < n; i++) {
                    temp += current;
                }

                current = old + temp;
            }

            else {
                current += c;
            }
        }

        return current;
    }
};