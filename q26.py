class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
            i = 0
            j = 1
            leng = len(nums)
            while(j < leng):
                if nums[i] == nums[j]:
                    nums.pop(j)
                    leng = len(nums)
                else:
                    i+=1
                    j+=1
            return len(nums)
