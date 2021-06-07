class Solution:
        def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        j = 1
        leng = len(nums) #3
        while(j < leng):  #1 < 3
            if nums[i] == nums[j]:  
                nums.pop(j)
            else:
                i+=1
                j+=1
            leng = len(nums) 
        return len(nums)