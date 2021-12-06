class Solution:
    def maxPower(self, s: str) -> int:
        n = len(s)
        maxLen = 1
        left = 0
        right = 0
        while right < n:
            while right < n and s[left] == s[right]:
                right += 1
            maxLen = max(maxLen,right -left)
            left = right
        return maxLen