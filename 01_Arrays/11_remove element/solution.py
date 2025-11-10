class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        suma = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[suma] = nums[i]
                suma += 1
        return suma
