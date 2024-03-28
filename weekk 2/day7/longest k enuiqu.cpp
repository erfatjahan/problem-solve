#include <string>
#include <unordered_map>
using namespace std;

class Solution{
public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int> freq;
        int i = 0, j = 0, n = s.size(), maxLen = 0, uniqueChars = 0;

        for (j = 0; j < n; ++j) {
            if (freq[s[j]] == 0) { // New unique character
                ++uniqueChars;
            }
            ++freq[s[j]]; // Increase frequency of current character

            // Shrink the window until uniqueChars becomes <= k
            while (uniqueChars > k) {
                if (--freq[s[i]] == 0) { // Decrease frequency of s[i] and check if it becomes 0
                    --uniqueChars; // If it becomes 0, decrement uniqueChars
                }
                ++i; // Move left pointer
            }

            // Update maxLen with the length of the current valid substring
            maxLen = max(maxLen, j - i + 1);
        }

        if (uniqueChars != k) {
            return -1;
        }

        return maxLen;
    }
};

