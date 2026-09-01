class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        n = len(s)
        l = 0
        r = 0
        maxFreq = 0
        maxLen = 0

        hash = [0] * 26

        while r < n:
            # Add current character
            hash[ord(s[r]) - ord('A')] += 1

            # Update maximum frequency
            maxFreq = max(
                maxFreq,
                hash[ord(s[r]) - ord('A')]
            )

            # If replacements required > k
            if (r - l + 1 - maxFreq) > k:
                hash[ord(s[l]) - ord('A')] -= 1
                l += 1

            # Update maximum length
            if (r - l + 1 - maxFreq) <= k:
                maxLen = max(maxLen, r - l + 1)

            r += 1

        return maxLen