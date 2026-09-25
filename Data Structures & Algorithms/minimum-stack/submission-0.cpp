class MinStack {
public:
    stack<int>st;
    stack<int> st1;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(st1.empty() || val <= st1.top()) {
            st1.push(val);
        }
    }
    
    void pop() {
        if(st.top() == st1.top()) {
            st1.pop();
        }
        st.pop();
    }
    
    int top() {
        int x = st.top();
        return x;
    }
    
    int getMin() {
        return st1.top();
    }
};
