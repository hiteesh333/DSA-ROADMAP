class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)/2
        seta = list(set(nums))
        for i in range(len(seta)):
            if nums.count(seta[i]) > n:
                return seta[i]
