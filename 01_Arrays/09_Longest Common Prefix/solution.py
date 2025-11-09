class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        out = ""
        minlen = min(len(w) for w in strs)
        for i in range(minlen):
            chars = []
            for w in strs:
                chars.append(w[i])
            if len(set(chars)) == 1:
                out += chars[0]
            else:
                break
        return out
