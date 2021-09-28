def twoSum(self, nums: List[int], target: int) -> List[int]:
  if not nums or len(nums) < 2:
    return None
  s = dict()
  for i in range(len(nums)):
    remainder = target - nums[i]
    if remainder in s:
      return (s[remainder], i)
    else:
      s[nums[i]] = i
      
      
      #O(n)
