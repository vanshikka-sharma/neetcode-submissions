class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> st;
       int sol = 0;
        for(int i = 0; i<tokens.size(); i++) {
            if(tokens.size() == 1) {
                sol = stoi(tokens[i]);
                return sol;
            }
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            } else {
                string operand = (tokens[i]);
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if (operand == "+")
                    sol = y + x;
                else if (operand == "-")
                    sol = y - x;
                else if (operand == "*")
                    sol = y * x;
                else
                    sol = y / x;

                st.push(sol);
            }
        }
        return sol;
    }
};
