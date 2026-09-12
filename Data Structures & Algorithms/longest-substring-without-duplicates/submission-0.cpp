class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        if(n == 0)
            return 0;

        int j = 0;
        int k = 1;
        int maxLength = 1;

        while(k < n) {

            bool duplicate = false;

            // Check if s[k] already exists
            // between j and k
            for(int i = j; i < k; i++) {

                if(s[i] == s[k]) {
                    duplicate = true;
                    break;
                }
            }

            if(duplicate) {
                j++;
            }
            else {
                k++;
            }

            maxLength = max(maxLength, k - j);
        }

        return maxLength;
    }
};
