class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int freq = 0;
        int num = 0;
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }

         priority_queue<pi,vector<pi>, greater <pi>> pq;
        for(auto x : mp) {
            freq = x.second;
            num = x.first;
            pq.push({x.second, x.first});
            if(pq.size() > k) {
                pq.pop();
            }
        }
        while(pq.size() > 0) {
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};
