class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++) {
            if(asteroids[i] > 0) {
                st.push(asteroids[i]);
            }
            else {
                bool destroyed = false;
                while(!st.empty() && st.top() > 0) {
                    if(st.top() > abs(asteroids[i])) {
                        destroyed = true;
                        break;
                    } else if(st.top() < abs(asteroids[i])) {
                        st.pop();
                    } else {
                        st.pop();
                        destroyed = true;
                        break;
                    }
                }

                if(!destroyed) {
                    st.push(asteroids[i]);
                }
            }
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};