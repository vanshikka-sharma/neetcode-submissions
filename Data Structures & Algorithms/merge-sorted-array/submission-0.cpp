class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0;
        while(i < m || i < n) {
            if(i < m) {
                ans.push_back(nums1[i]);
            }
            if(i < n) {
                ans.push_back(nums2[i]);
            }
            i++;
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i<nums1.size(); i++) {
            nums1[i] = ans[i];
        }
    }
};