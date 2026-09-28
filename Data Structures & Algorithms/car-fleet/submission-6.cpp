class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int count = 0;
        stack<double> st;
        vector<double> time;

        vector<pair<int, int>> cars;
        for(int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        for(int i = 0; i < cars.size(); i++) {
            double t = (double)(target - cars[i].first) / cars[i].second;
            time.push_back(t);
        }

        for(int i = 0; i < time.size(); i++) {
            if(st.empty() || st.top() < time[i]) {
                count++;
                st.push(time[i]);
            }
        }

        return count;
    }
};