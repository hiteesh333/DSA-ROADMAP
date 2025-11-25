class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = []
        arr = sorted(nums)
        count = 1
        for i in range(1, len(arr)):
            if arr[i] == arr[i-1]:
                count += 1
            else:
                freq.append((arr[i-1], count))
                count = 1
        freq.append((arr[-1], count))
        freq.sort(key=lambda x: x[1], reverse=True)
        res = []
        for i in range(k):
            res.append(freq[i][0])
        return res

