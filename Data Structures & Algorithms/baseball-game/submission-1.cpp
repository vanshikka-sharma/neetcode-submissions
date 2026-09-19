class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum = 0;
        for(int i = 0; i<operations.size(); i++) {
            if(operations[i] == "+") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int sum = x+y;
                st.push(y);
                st.push(x);
                st.push(sum);
            } else if(operations[i] == "D") {
                int x = st.top();
                int prev_score = 2*x;
                st.push(prev_score);
            } else if(operations[i] == "C") {
                int x = st.top();
                st.pop();
            } else {
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};