class Solution:
    def validPalindrome(self, s: str) -> bool:    
        def isPal(st):
            i, j = 0, len(st) - 1
            while i < j:
                if st[i] != st[j]:
                    return False
                i += 1
                j -= 1
            return True
        i = 0
        j = len(s) - 1
        while i < j:
            if s[i] != s[j]:
                return isPal(s[i+1:j+1]) or isPal(s[i:j])
            i += 1
            j -= 1
        return True
