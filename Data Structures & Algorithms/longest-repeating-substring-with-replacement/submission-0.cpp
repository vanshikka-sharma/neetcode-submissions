class Solution {
public:
    int characterReplacement(string s, int k) {

        int left = 0;
        int ans = 0;
        int maxFreq = 0;

        int freq[26] = {0};

        for (int right = 0; right < s.size(); right++) {

            // Add current character
            freq[s[right] - 'A']++;

            // Maximum frequency in current window
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            // Characters that need to be replaced
            int windowSize = right - left + 1;
            int replacements = windowSize - maxFreq;

            // If too many replacements are needed
            if (replacements > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            // Update answer
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};