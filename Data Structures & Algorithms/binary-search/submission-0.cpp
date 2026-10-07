class Solution {
public:

    int binarySearch(int start , int end, vector<int>& nums, int target) {
        if(start > end) {
            return -1;
        }
        int mid = start + (end - start) / 2;
        if(target == nums[mid]) {
            return mid;
        } else if (target < nums[mid]) {
            return binarySearch(start, mid-1, nums, target);
        } else {
            return binarySearch(mid+1, end, nums,target);
        }
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = binarySearch(0, n-1, nums, target);
        return ans;
    }
};
