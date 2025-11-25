class Solution:
    def isPalindrome(self, s: str) -> bool:
        st = ""
        for i in range(len(s)):
            if s[i].isalnum():
                st+= s[i]
        st = st.lower()
        bef = st
        st = list(st)
        i = 0
        j = len(st) - 1
        while i < j:
            st[i],st[j] = st[j],st[i]
            i+=1
            j-=1
        st = "".join(st)
        if bef == st:
            return True
        return False