class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n-2; i++) {
            int left = i+1;
            int right = n-1;
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            while(left < right) {

                if(nums[i] + nums[left] + nums[right] == 0) {
                    st.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if(nums[i] + nums[left] + nums[right] < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        for(auto x : st) {
            ans.push_back(x);
        }
        return ans;
    }
};
