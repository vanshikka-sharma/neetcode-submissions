class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        k = k % n;
        int j = n - k;

        for(int i = n-1; i >= n-k; i--) {
            ans.push_back(nums[j]);
            j++;
        }
        for(int i = 0; i < n-k; i++) {
            ans.push_back(nums[i]);
        }
        for(int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }
    }
};