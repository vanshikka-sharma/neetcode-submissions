class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = 0;
        int ele = 0;
        unordered_map<int, int> mp;
        for(int x : nums) {
            mp[x] = mp[x] + 1;
        }

        for(auto x : mp) {
            if(max < x.second) {
                max = x.second;
                ele = x.first;
            }
        }
        return ele;
    }
};