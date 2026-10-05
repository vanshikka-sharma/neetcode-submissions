class FreqStack {
public:
    unordered_map<int, int> freq;
    priority_queue<tuple<int, int, int>> heap;
    int time = 0;

    FreqStack() {
        
    }
    
    void push(int val) {

        freq[val]++;
        time++;

        heap.push({freq[val], time, val});
    }
    
    int pop() {

        while (true) {
            auto [f, t, val] = heap.top();
            if (f != freq[val]) {
                heap.pop();
                continue;
            }
            heap.pop();
            freq[val]--;
            return val;
        }
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */