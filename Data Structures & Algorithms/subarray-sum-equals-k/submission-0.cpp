class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int count = 0;
        for(int i = 0; i<n; i++) {
            for(int j = i; j<n; j++) {
                if(ans + nums[j] == k) {
                    ans = ans + nums[j];
                    count++;
                } else {
                    ans = ans + nums[j];
                }
            } 
            ans = 0; 
        }
        return count;
    }
};