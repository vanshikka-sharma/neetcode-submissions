class Solution {
public:
    int characterReplacement(string s, int k) {

        int left = 0;
        int ans = 0;

        map<char, int> freq;

        for (int right = 0; right < s.size(); right++) {

            freq[s[right]]++;

            int maxFreq = 0;

            // Find the character appearing most
            for (auto x : freq) {
                maxFreq = max(maxFreq, x.second);
            }

            int windowSize = right - left + 1;

            // Characters we need to replace
            int need = windowSize - maxFreq;

            if (need > k) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};