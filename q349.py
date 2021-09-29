class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        final = set()

        for i in nums1:
            if i in nums1 and i in nums2 and i not in final:
                final.add(i)
    
        return final
